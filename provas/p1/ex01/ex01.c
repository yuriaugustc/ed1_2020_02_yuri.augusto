#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Fazer um programa para cadastro de livros. As informações para cadastro são: 
// - o nome do livro
// - O preço
// - Indicação se o livro é novo ou usado
// - ano de compra

// Definir as estruturas necessárias aqui:
struct livro{
    char nome[50];
    double preco;
    char uso[10];
// check:<<<erro: e1.01a: Novo/Usado deve ser booleano (no caso, int) ; Pode-se usar um char, mas com isso exige-se sempre uma comparação de valores>>>>
    int ano;
};

int main(){
    int num;
    struct livro *vet;
    // Ex 01: permitir que o usuário cadastre quantos livros quiser
    //  - ler do teclado a quantidade de livros que o usuário escolheu
    //  - ler do teclado as informações dos livros
    printf("Informe quantos livros deseja cadastrar: ");
    scanf("%d", &num);
    vet = (int *) malloc(num * sizeof(struct livro));// check:<<<erro:  cast para int?>>>>
    // como diabos eu faço um cast pra int de um vetor de tipo struct???
    for(int i = 0; i < num; i++){
        printf("\nDigite o nome do %d° livro: ", i+1);
        setbuf(stdin, NULL);
        scanf("%[^\n]s", &vet[i].nome);
        printf("Digite o preço: ");
        scanf("%lf", &vet[i].preco);
        printf("Informe se o livro está com a condição \"Novo\" ou \"Usado\": ");
        setbuf(stdin, NULL);
        scanf("%[^\n]s", &vet[i].uso);
        printf("Digite o ano do livro: ");
        scanf("%d", &vet[i].ano);
    }
    for(int i = 0; i < num; i++){
        printf("\nNome: %s", vet[i].nome);
        printf("\nPreço: %.2lf", vet[i].preco);
        printf("\nCondicao: %s", vet[i].uso);
        printf("\nAno: %d", vet[i].ano);
    }
// check:<<<erro: e1.5: Falou liberar memória com free>>>>
    return 0;
} */


// SUB - Refazendo o exercicio

// Fazer um programa para cadastro de livros. As informações para cadastro são: 
// - o nome do livro
// - O preço
// - Indicação se o livro é novo ou usado
// - ano de compra

// Definir as estruturas necessárias aqui:
struct livro{
    char nome[50];
    double preco;
    char estado_livro;
    int ano;
};
typedef struct livro biblioteca;

// Ex 01: permitir que o usuário cadastre quantos livros quiser
//  - ler do teclado a quantidade de livros que o usuário escolheu
//  - ler do teclado as informações dos livros
int main(){
    int op;
    printf("\n------- Cadastro de Livros ---------\n");
    printf("Quantos livros deseja cadastrar? ");
    scanf("%d", &op);
    biblioteca *vet = malloc(op * sizeof(struct livro));
    for(int i = 0; i < op; i++){
        printf("\nDigite o nome do %d livro: ", i+1);
        setbuf(stdin, NULL);
        fgets(vet[i].nome, 50, stdin);
        printf("Digite o preco: ");
        scanf("%lf", &vet[i].preco);
        printf("Informe se o livro esta com a condicao \"Novo\" ou \"Usado\" (n/u): ");
        scanf(" %c", &vet[i].estado_livro);
        printf("Digite o ano do livro: ");
        scanf("%d", &vet[i].ano);
    }
    printf("-------   Biblioteca ---------\n\n");
    for(int i = 0; i < op; i++){
        printf("\nInformacoes do %d livro: \n", i+1);
        printf("Nome: %s", vet[i].nome);
        printf("Preco: %.2lf\n", vet[i].preco);
        printf("Condicao do livro (Novo = n) (Usado = u): %c\n", vet[i].estado_livro);
        printf("Ano do livro: %d", vet[i].ano);
    }
    return 0;
}