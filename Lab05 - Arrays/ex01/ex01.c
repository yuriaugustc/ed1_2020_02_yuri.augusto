#include <stdio.h>

int main(){
    int vet[6];

    printf("<< Listando um vetor >>\n");
    printf("Entre com o numero 1: ", vet[0]);
    scanf("%d", &vet[0]);
    printf("Entre com o numero 2: ", vet[0]);
    scanf("%d", &vet[1]);
    printf("Entre com o numero 3: ", vet[0]);
    scanf("%d", &vet[2]);
    printf("Entre com o numero 4: ", vet[0]);
    scanf("%d", &vet[3]);
    printf("Entre com o numero 5: ", vet[0]);
    scanf("%d", &vet[4]);
    printf("Entre com o numero 6: ", vet[0]);
    scanf("%d", &vet[5]);

    printf("Os valores lidos são: %d, %d, %d, %d, %d, %d.\n", vet[0],vet[1],vet[2],vet[3],vet[4],vet[5]);
}