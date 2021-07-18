#include <stdio.h>

int main(){
    int prova1, prova2, media;
    printf("<< Calculo da Media >>\n");
    printf("Digite a nota da prova 1: ");
    scanf("%d", &prova1);
    printf("Digite a nota da prova 2: ");
    scanf("%d", &prova2);
    media = (prova1+prova2)/2;
    printf("A nota media eh %d\n", media);
}

/*
=> Faça um algoritmo que calcula a média das notas de 2 provas.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Calculo da Media >>
Digite a nota da prova 1: 80
Digite a nota da prova 2: 90
A nota media eh 85
-------------------------------------------------------------------------------
*/