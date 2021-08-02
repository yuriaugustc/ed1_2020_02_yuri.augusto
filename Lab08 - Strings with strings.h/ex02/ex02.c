#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    int i = 0;
    char name[50];
    printf("<< Vetor de Char >>\n");
    printf("Digite um nome: ");
    gets(name);
    printf("\nO nome digitado é: ");
    while(name[i] != '\0'){
    printf("%c", name[i] = toupper(name[i]));
    i++;
    }
    i = 0;
    printf("\nO nome digitado é: ");
    while(name[i] != '\0'){
    printf("%c", name[i] = tolower(name[i]));
    i++;
    }
    return 0;
}

/*

*/