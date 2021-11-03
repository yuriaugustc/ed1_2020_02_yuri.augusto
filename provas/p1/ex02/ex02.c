#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Definir as estruturas necessárias aqui (copiar do exercício anterior):
struct livro{
    char nome[50];
    double preco;
    char uso[10];
    int ano;
};
// Função:
// Essa função retorna o livro usado mais antigo
// - Entrada: todos os livros cadastrados 
// - Saída: índice do vetor indicando o livro usado mais antigo
// (se houver empate pode ser retornado qualquer um dos livros)

   // Ex02: utilizando a função de buscar, mostre
   // todas as informações do livro *usado* mais antigo

   // Todas as funções de entrada e saída devem estar no programa
   // principal

   // Dica: para testar, crie um vetor estático preenchido com alguns valores (opcional)
int main(){
    int num, i, antigo, livro = 0, comp;
    struct livro biblioteca[10];

    printf("Informe quantos livros deseja cadastrar: ");
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        printf("\nDigite o nome do %d° livro: ", i+1);
        setbuf(stdin, NULL);
        scanf("%[^\n]s", &biblioteca[i].nome);
        printf("Digite o preço: ");
        scanf("%lf", &biblioteca[i].preco);
        printf("Informe se o livro está com a condição \"Novo\" ou \"Usado\": ");
        setbuf(stdin, NULL);
        scanf("%[^\n]s", &biblioteca[i].uso);
        printf("Digite o ano do livro: ");
        scanf("%d", &biblioteca[i].ano);
    }
    for(i = 0; i < num; i++){
        if(biblioteca[i].ano < antigo){
            comp = strcmp(biblioteca[i].uso, "usado");
            if(comp == 0){
            livro = i;
            }
        }
    }
 // check:<<<erro: não fez a função>>>>
 // check:<<<erro: e2.1: Chamada de função errada no programa principal>>>>
    printf("Livro usado mais antigo: \n");
    printf("Nome: %s\n", biblioteca[livro].nome);
    printf("Preço: %.2lf\n", biblioteca[livro].preco);
    printf("Condição: %s\n", biblioteca[livro].uso);
    printf("Ano: %d\n", biblioteca[livro].ano);

  
    return 0;
}*/


// SUB - Refazendo o exercicio

// Definir as estruturas necessárias aqui (copiar do exercício anterior):
struct livro{
    char nome[50];
    double preco;
    char estado_livro;
    int ano;
};
typedef struct livro biblioteca;
// Função:
// Essa função retorna o livro usado mais antigo
// - Entrada: todos os livros cadastrados 
// - Saída: índice do vetor indicando o livro usado mais antigo
// (se houver empate pode ser retornado qualquer um dos livros)

   // Ex02: utilizando a função de buscar, mostre
   // todas as informações do livro *usado* mais antigo

   // Todas as funções de entrada e saída devem estar no programa principal

   // Dica: para testar, crie um vetor estático preenchido com alguns valores (opcional)

int busca_livro_usado(biblioteca *lib, biblioteca *usado, int op){
    int qtd = 0;    //variavel para controle de quantas vezes foi encontrado um livro com a condicao usado;
    usado->ano = 0; // inicializando a variavel de teste em zero por causa do formato de comparacao;

    for(int i = 0; i < op; i++){ // pesquisa por todo os livros cadastrados;
        if(lib[i].estado_livro == 'u'){
            if(lib[i].ano > usado->ano){
                *usado = lib[i];
                qtd++; // caso tenha entrado no if, a qtd é incrementada para verificacao se foi ou nao achado;
            }
        }
    }
    if(qtd == 0){ // verificacao se foi encontrado algum livro ou nao
        return -1; // se nao foi encontrado nenhum livro nas condicoes usado, retorna -1;
    }else{
        return 0; // caso tenha encontrado pelo menos um, retorna 0;
    }
}

int main(){
    int op;

    printf("\n------- Cadastro de Livros ---------\n");
    printf("Quantos livros deseja cadastrar? ");
    scanf("%d", &op);
    biblioteca *lib = malloc(op * sizeof(struct livro));
    /*
    strcpy(lib[0].nome, "Rapunzel"); lib[0].preco = 12.90; lib[0].estado_livro = 'n'; lib[0].ano = 2009;
    strcpy(lib[1].nome, "Dom Casmurro"); lib[1].preco = 10.91; lib[1].estado_livro = 'u'; lib[1].ano = 2012;
    strcpy(lib[2].nome, "Historias de um Sargento de Milicias"); lib[2].preco = 143.92; lib[2].estado_livro = 'n'; lib[2].ano = 2009;
    strcpy(lib[3].nome, "Dom Quixote"); lib[3].preco = 132.93; lib[3].estado_livro = 'u'; lib[3].ano = 2011;
    strcpy(lib[4].nome, "Quincas Borba"); lib[4].preco = 98.94; lib[4].estado_livro = 'n'; lib[4].ano = 2018;
    */
    for(int i = 0; i < op; i++){
        printf("\nDigite o nome do %d livro: ", i+1);
        setbuf(stdin, NULL);
        fgets(lib[i].nome, 50, stdin);
        printf("Digite o preco: ");
        scanf("%lf", &lib[i].preco);
        printf("Informe se o livro esta com a condicao \"Novo\" ou \"Usado\" (n/u): ");
        scanf(" %c", &lib[i].estado_livro);
        printf("Digite o ano do livro: ");
        scanf("%d", &lib[i].ano);
    }
    printf("\npesquisando o livro mais antigo com a condicao usado em nossa biblioteca.\n");
    biblioteca *usado = malloc(sizeof(biblioteca));
    int i;
    i = busca_livro_usado(lib, usado, op); // em caso de sucesso, a variavel usado é preenchida por referencia;
    if(!i){     // controle de verificacao da funcao;
        printf("\nEcontramos! Printando abaixo os dados: \n\n");
        printf("Livro usado mais antigo: \n");
        printf("Nome: %s\n", usado->nome);
        printf("Preco: %.2lf\n", usado->preco);
        printf("Condicao: %c\n", usado->estado_livro);
        printf("Ano: %d\n", usado->ano);
    }
    else{
        printf("Nao foi encontrado nenhum livro em condicoes usado :/ Sinto muito.\n");
    }
    return 0;
}