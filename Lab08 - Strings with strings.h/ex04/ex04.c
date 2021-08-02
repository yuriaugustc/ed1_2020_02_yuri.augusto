#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    int i = 0, aux = 0;
    char nome[50], nome2[50];

    printf("<< Compara nomes >>\n");
    printf("Digite o nome 1: ");
    gets(nome);
    printf("Digite o nome 1: ");
    gets(nome2);
    do{
        nome[i] = tolower(nome[i]);
        i++;
    }while(nome[i] != '\0');
    do{
        nome2[i] = tolower(nome2[i]);
        i++;
    }while(nome[i] != '\0');
    aux = strcmp(nome, nome2);
    if(aux == 0){
        printf("Os nomes digitados são iguais.\n");
    }
    else{
        printf("Os nomes digitados são diferentes.\n");
    }

    return 0;
}

/*

*/