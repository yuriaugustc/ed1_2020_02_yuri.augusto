#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Fazer um programa para cadastro de livros. As informações para cadastro são: 
// - o nome do livro
// - O preço
// - Indicação se o livro é novo ou usado
// - ano de compra

// Definir as estruturas necessárias aqui:
struct livro{
    char nome[50];
    double preco;
    char uso[10];
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
    vet = (int *) malloc(num * sizeof(struct livro));
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
    /*for(int i = 0; i < num; i++){
        printf("\nNome: %s", vet[i].nome);
        printf("\nPreço: %.2lf", vet[i].preco);
        printf("\nCondicao: %s", vet[i].uso);
        printf("\nAno: %d", vet[i].ano);
    }*/

    return 0;
}