#include <stdio.h>
#include <stdlib.h>
#include "search.c"

int main(){
    int aux = 0;
    Aluno aluno[5];

    for(int i = 0; i < 3; i++){
        printf("Aluno: ");
        setbuf(stdin, NULL);
        fgets(aluno[i].nome, 50, stdin);
        printf("Matricula: ");
        fgets(aluno[i].matricula, 12, stdin);
        printf("CRA: ");
        scanf("%lf", &aluno[i].cra);
        printf("\n");
    }
    printf("Pesquisando o aluno com maior coeficiente de aproveitamento: \n");
    aux = search(aluno);
    printf("Aluno: %s", aluno[aux].nome);
    printf("Matricula: %s", aluno[aux].matricula);
    printf("CRA: %.2lf\n", aluno[aux].cra);

    return 0; 
}