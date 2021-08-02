#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    int pos, i, j = 0;
    char nome[40], sobrenome[40];
    printf("<< Vetor de char >>\n");
    printf("Digite um nome e sobrenome: ");
    gets(nome);
    for(i = 0; i < 40; i++){
        if(nome[i-1] == ' '){
            break;
        }
    }
    while(nome[i-1] != '\0'){
        sobrenome[j] = nome[i];
            j++;
            i++;
    }

    printf("\nNome: ");
    for(i = 0; i < 40; i++){
        printf("%c", nome[i]);
        if(nome[i] == ' ')
            break;
    }
    printf("\nSobrenome: ");
    for(i = 0; i < 40; i++){
        printf("%c", sobrenome[i]);
        if(sobrenome[i] == '\0')
            break;
    }
    printf("\n");
    return 0;
}

/*

*/