#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    int i = 0;
    char name[50];
    printf("<< Vetor de Char >>\n");
    printf("Digite a string: ");
    gets(name);
    printf("Saída sem vogais: ");
    while(name[i] != '\0'){
        if(name[i] == 'a'|| name[i] == 'e' || name[i] == 'i' || name[i] == 'o'|| name[i] == 'u'){
            if(name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U'){
            }
        }
        else
            printf("%c", name[i]);
    i++;
    }
    printf("\n");
    return 0;
}

/*

*/