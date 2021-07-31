#include <stdio.h>

int main(){
    char name[50], i, cont = 0, aux;
    printf("<< Vetor de char >>\n");
    while(aux != '\n'){
        name[cont] = aux;
        cont++;
        aux = getchar();
    }
    for(i = 0; i < cont; i++){
    printf("%c", name[i]);
    }
}