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
    printf("Saída invertida: ");
    for(i = 0; i < 50; i++){
        if(name[i+1] == '\0')
            break;
    }
    while(name[i] != 0){        
        printf("%c", name[i]);
        i--;
    }
    printf("\n");
    return 0;
}

/*

*/