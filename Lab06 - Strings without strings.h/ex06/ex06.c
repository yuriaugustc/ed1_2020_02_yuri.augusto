#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[50], name2[50], i, cont = 0, cont2 = 0, aux2, aux;
    printf("<< Nomes >>\n");
    setbuf(stdin, NULL);
    printf("Digite o primeiro nome e o ultimo nome: ");
    while(aux != ' '){
        aux = getchar();
        name[cont] = aux;
        cont++;
    }
    while(aux2 != '\n'){
        aux2 = getchar();
        name2[cont2] = aux2;
        cont2++;
    }
    printf("Nome: ");
    for(i = 0; i < cont; i++){
            printf("%c", name[i]);
    }
    printf("\nSobrenome: ");
    for(i = 0; i < cont2; i++){
            printf("%c", name2[i]);
    }
}