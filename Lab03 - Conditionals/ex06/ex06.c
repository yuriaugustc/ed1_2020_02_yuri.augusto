#include <stdio.h>
#include <math.h>

int main(){
    int num;
    int aux;

    printf("<< Quadrado Perfeito >>\n");
    printf("Digite um numero a ser verificado: ");
    scanf("%d", &num);
    aux = sqrt(num);
    if((aux % 2) == 0){
        printf("Este numero é um quadrado perfeito!\n");
        printf("Esta é a raiz quadrada de %d: %d", num, aux);
    }
    else{
        printf("Este numero nao é um quadrado perfeito.\n");
    }
}