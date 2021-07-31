#include<stdio.h>

int main(){
    int i, j, num, cont = 1, aux = 1;
    printf("<< Triangulo de Floyd >>\n");
    printf("Quantas linhas deseja visualizar? ");
    scanf("%d", &num);
    for(i = 0; i < num; i++){
        for(j = 0; j < aux; j++){
            printf("%d ", cont);
            cont += 1;
        }
        printf("\n");
            aux++;
    }
}