#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    int i = 0;
    char name[50];
    printf("<< Separa letras >>\n");
    printf("Digite o nome: ");
    gets(name);
    while(name[i] != '\0'){
    printf("%da letra: %c\n", i+1, name[i]);
    i++;
    }
    return 0;
}

/*

*/