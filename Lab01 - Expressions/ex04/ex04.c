#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4;
    int nfinal;
    printf("<< Media Aritmetica >>\n");

    printf("Digite a 1a nota: ");
    scanf("%f", &nota1);
    printf("Digite a 2a nota: ");
    scanf("%f", &nota2);
    printf("Digite a 3a nota: ");
    scanf("%f", &nota3);
    printf("Digite a 4a nota: ");
    scanf("%f", &nota4);
    printf("===Notas===\n");
    printf("Nota 1: %.2f; Nota 2: %.2f; Nota 3: %.2f; Nota 4: %.2f\n", nota1, nota2, nota3, nota4);
    nfinal = (nota1+nota2+nota3+nota4)/4;
    printf("Media: %d\n", nfinal);

}

/*
=> Ler quatro notas e mostrar as notas e a média aritmética obtida.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Media Aritmetica >>
Digite a 1a nota: 30
Digite a 2a nota: 40
Digite a 3a nota: 60
Digite a 4a nota: 30
===Notas===
Nota 1: 30; Nota 2: 40; Nota 3: 60; Nota 4: 30
Media: 40
-------------------------------------------------------------------------------
*/