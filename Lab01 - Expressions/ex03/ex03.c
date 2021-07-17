#include <stdio.h>

int main() {
    int num;

    printf("<< Sucessor e Antecessor >>\n");
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("\n");
    printf("Antecessor: %d\n", num-1);
    printf("Numero: %d\n", num);
    printf("Sucessor: %d\n", num+1);
}

/*
=> Ler um número e retorne seu antecessor e seu sucessor.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Sucessor e Antecessor >>
Digite um numero: 2

Antecessor: 1
Numero: 2
Sucessor: 3
-------------------------------------------------------------------------------
*/