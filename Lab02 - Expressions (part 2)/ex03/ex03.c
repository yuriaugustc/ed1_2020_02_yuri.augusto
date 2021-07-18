#include <stdio.h>

int main(){
    int prova1, prova2, prova3;
    double media;
    char nome;
    printf("<< Calculo da Media >>\n");
    printf("Digite o nome do aluno: ");
    scanf(" %c", &nome);
    printf("Digite a nota da prova 1: ");
    scanf("%d", &prova1);
    printf("Digite a nota da prova 2: ");
    scanf("%d", &prova2);
    printf("Digite a nota da prova 3: ");
    scanf("%d", &prova3);
    media = (prova1+prova2+(prova3 * 2))/4;
    printf("A nota media do aluno %c eh %.1lf\n", nome, media);
}
/*
=> Faça um algoritmo que calcule a média ponderada das notas de 3 provas. 
A primeira e a segunda prova têm peso 1 e a terceira tem peso 2. Antes de o usuário 
entrar com as notas do aluno ele deve informar a letra inicial do nome do aluno. 
Ao final, mostrar o a letra inicial do nome do aluno juntamente com a sua média.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Calculo da Media >>
Digite o nome do aluno: T
Digite a nota da prova 1: 40
Digite a nota da prova 2: 40
Digite a nota da prova 3: 80
A nota media do aluno C. eh 60
-------------------------------------------------------------------------------
*/