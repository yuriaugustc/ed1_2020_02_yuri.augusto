#include <stdio.h>

int main(){
    int num = 0, soma = 0;
    printf("<< Soma de n valores naturais >>\n");
    printf("Quantos números deseja somar? ");
    scanf("%d", &num);
    for(int i = 0; i <= num; i++){
        soma = soma + i;
    }
    printf("A soma dos %d primeiros numeros naturais é: %d", num, soma);
}