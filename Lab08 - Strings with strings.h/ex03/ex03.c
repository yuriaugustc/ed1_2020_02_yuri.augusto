#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    int i;
    char name[50], name2[50];
    printf("<< Compara nomes >>\n");
    printf("Digite o nome 1: ");
    gets(name);
    printf("Digite o nome 2: ");
    gets(name2);
    i = strcmp(name, name2);
    if(i != 0)
        printf("Os nomes digitados são iguais.\n");
    else
        printf("Os nomes digitados são diferentes.\n");

    return 0;
}

/*

*/