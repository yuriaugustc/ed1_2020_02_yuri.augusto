#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    int i = 0, aux = 0, cont = 0;
    char name[50], pali[50];
    printf("<< Palíndromos >>\n");
    printf("Digite a string: ");
    gets(name);

    for(i = 0; i < 50; i++){
        if(name[i+1] == '\0'){
            break;
        }
    }
    pali[i+1] = '\0';
    while(i != -1){        
        pali[i] = name[i];
        printf("%c", pali[i]);
        i--;
    }
    printf("\n");
    aux = strcmp(name,pali);

    if(aux != 0){
        printf("A palavra não é um palíndromo");
        printf("%d", aux);
    }
    else{
        printf("A palavra é um palíndromo");
    }
    printf("\n");
    return 0;
}

/*

*/