#include <stdio.h>

int main(){
    int num = 0, soma = 0;
    int i = 0;

    printf("<< Soma de n valores naturais >>\n");
    printf("Quantos números deseja somar? ");
    scanf("%d", &num);
    do {
        soma = soma + i;
         i++;
    } while( i <= num);
    printf("A soma dos %d primeiros numeros naturais é: %d", num, soma);
}