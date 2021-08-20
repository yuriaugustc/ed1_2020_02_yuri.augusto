#include <stdio.h>
#include <stdlib.h>
//lembre-se de incluir as bibliotecas adequadas

int main(){
    int num, par = 0, impar= 0;
    int *point;

    printf("<< Par ou Impar >>\n");
    printf("Quantos inteiros serao lidos: ");
    scanf("%d", &num);
    point = (double*)malloc(num*sizeof(int));
    for(int i = 0; i < num; i++){
        printf("%d° inteiro: ", i+1);
        scanf("%d", &point[i]);
        if((point[i])%2 == 0){
            par++;
        }
        else{
            impar++;
        }
    }
    printf("Sao pares: %d dos %d inteiros lidos.\n", par, num);
    printf("Sao impares: %d dos %d inteiros lidos.\n", impar, num);

    free(point);
    return 0;
}

/*
3) Faça um programa que leia n inteiros (definidos pelo usuário) 
armazenando-os em uma memória alocada dinamicamente. Em seguida, mostre
quantos dos n números são pares e quantos são ímpares.


Exemplo de saída:
<< Par ou Impar >>
Quantos inteiros serao lidos: 5
1º inteiro: 1
2º inteiro: 2
3º inteiro: 3
4º inteiro: 4
5º inteiro: 5

Sao pares: 2 dos 5 inteiros lidos.
Sao impares: 3 dos 5 inteiros lidos.

*/