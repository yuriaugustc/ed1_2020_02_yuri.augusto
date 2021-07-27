#include <stdio.h>

int main(){
    int x, x1, a, b, c;
    printf("<< Equacao de Segundo Grau >>\n");
    printf("Entre com o valor (A): ");
    scanf("%d", &a);
    printf("Entre com o valor (B): ");
    scanf("%d", &b);
    printf("Entre com o valor (C): ");
    scanf("%d", &c);
    if(sqrt((b*b)+4*a*c)> 0){
    x = ((-b) +(sqrt((b*b)+4*a*c)))/(2*a);
    x1 = ((-b) +(sqrt((b*b)-4*a*c)))/(2*a);
    printf("As raizes são reais: \n");
    printf("x: %lf\n");
    printf("x1: %lf\n");
    }
    if(sqrt((b*b)+4*a*c) == 0){
        
    }
    // deus do ceu, travei a cabeca
}