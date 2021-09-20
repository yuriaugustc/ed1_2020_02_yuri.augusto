#include <stdio.h>
#include <stdlib.h>

// Definir as estruturas necessárias aqui (copiar do exercício anterior):
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
}