#include <stdio.h>

int main(){
    int prova1, prova2;
    float media;
    char nome;
    printf("<< Calculo da Media >>\n");
    printf("Digite o nome do aluno: ");
    scanf(" %c", &nome);
    printf("Digite a nota da prova 1: ");
    scanf("%d", &prova1);
    printf("Digite a nota da prova 2: ");
    scanf("%d", &prova2);
    media = (prova1+prova2)/2;
    printf("A nota media do aluno %c eh %.1f\n", nome, media);
}

/*
=> Altere o algoritmo anterior para que, antes de o usuário entrar com as 
notas do aluno ele entre com a inicial do nome do aluno. Ao final, 
mostrar a inicial do nome do aluno juntamente com a sua média.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Calculo da Media >>
Digite o nome do aluno: C
Digite a nota da prova 1: 70
Digite a nota da prova 2: 85
A nota media do aluno C. eh 77.5
-------------------------------------------------------------------------------
*/