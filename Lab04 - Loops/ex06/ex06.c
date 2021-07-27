#include <stdio.h>

int main(){
    int i, j;
    printf("<< Contagem regressiva >>\n");
    printf("Qual é o número inicial? ");
    scanf("%d", &i);
    for(j = i;j >= 0; j--){
        printf("%d.. ", j);
    }
    printf("FIM!");
}