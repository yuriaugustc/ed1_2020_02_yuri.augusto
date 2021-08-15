#include <stdio.h>

int main(){
    int num;
    double value;
    void *pointer;
    printf("<< Pointers >>\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    pointer = &num;
    printf("Digite um numero real: ");
    scanf("%lf", &value);
    printf("Mostrando os valores usando ponteiro com type cast: ");
    printf("%d\n", *(int *)pointer);
    pointer = &value;
    printf("%.2lf\n", *(double *)pointer);
    return 0;
}