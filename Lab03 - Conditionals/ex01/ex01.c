#include <stdio.h>

int main(){
    int prova1, prova2, prova3;
    double media;
    char nome;

    printf("<< Calculo da Media >>\n");
    printf("Digite a inicial do nome do aluno: ");
    scanf(" %c", &nome);
    printf("Digite a nota da prova 1: ");
    scanf("%d", &prova1);
    printf("Digite a nota da prova 2: ");
    scanf("%d", &prova2);
    printf("Digite a nota da prova 3: ");
    scanf("%d", &prova3);
    media = (prova1+prova2+(prova3 * 2))/4;
    printf("A nota media do aluno %c eh %.1lf ", nome, media);
    if(media >= 60){ printf("=> APROVADO!\n"); }
    else { printf("=> REPROVADO!\n"); }
}