#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[50], name2[50], i, cont = 0, cont2 = 0, aux2, aux, add = 0;
    printf("<< Compara nomes >>\n");
    setbuf(stdin, NULL);
    printf("Digite o nome 1: ");
    while(aux != '\n'){
        aux = getchar();
        name[cont] = aux;
        cont++;
    }
    setbuf(stdin, NULL);
    printf("Digite o nome 2: ");
    while(aux2 != '\n'){
        aux2 = getchar();
        name2[cont2] = aux2;
        cont2++;
    }
    for(i = 0; i < cont; i++){
        if(name[i] != name2[i]){
            printf("Os nomes digitados são diferentes.\n");
            return 0;
        }
    }
    printf("Os nomes digitados são iguais.\n");
}