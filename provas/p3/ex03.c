/*
Utilizando uma ED de Pilha (STACK) que armazena caracteres, 
faça um programa que lê uma string do teclado e, 
**utilizando a pilha**, mostre a string na ordem reversa. 
Entregar somente o código do programa principal. 
Não há necessidade de mostrar o código da pilha

Se a pessoa digitar abcd, o programa vai devolver: dcba

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TStack.h"

int main(){
    char leitura[100];
    char print;
    TStack *stack;

    printf("Digite por favor a sequencia de caracteres a ser invertida: ");
    fgets(leitura, 100, stdin);
    leitura[strcspn(leitura, "\n")] = '\0';
    stack = stack_create();
    for(int i = 0; i < strlen(leitura); i++){
        stack_push(stack, leitura[i]); //
    }
    for(int i = strlen(leitura); i >=0; i--){// check:<<<erro: não precisa ser ordem inversa>>>>
        stack_top(stack, print);// check:<<<erro: faltou colocar o endereçoc>>>>
        stack_pop(stack);       //tinha feito o envio antes do aviso para nao usar stack_print, acho que não fazer o TAD me salvou ein kkkkkkkkk
        printf("%c", print); //fiz dessa forma pois como não fiz ainda o TADPilha, fiquei na duvida se o "stack_print" printava de trás para frente.
    }                        //entendo que esse é o caminho mais longo para chegar ao mesmo resultado, mas esse eu tinha certeza, pelo menos nesse momento sinto certeza de que funciona kkkk;
    printf("\n");
    stack_free(stack); //até que enfim acertei o free (eu errei a hora certa de chamar ele nas duas provas anteriores kkkk);
    return 0;
}