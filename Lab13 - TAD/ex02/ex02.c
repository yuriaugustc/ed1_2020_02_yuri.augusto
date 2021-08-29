#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main(){
    int aux = 0;
    char nome[50];
    char matr[12];
    double cra;

    printf("<< TAD: Cadastro de alunos >>\n");
    //for(int i = 0; i < 3; i++){
        printf("Nome do aluno: ");
        setbuf(stdin, NULL);
        fgets(nome, 50, stdin);
        printf("Matricula: ");
        fgets(matr, 12, stdin);
        printf("CRA: ");
        scanf("%lf", &cra);
        printf("\n");
    //}
    Aluno *p;
    p = setAluno(nome, matr, cra);
    printf("Aluno cadastrado com sucesso!\n");

    altera_cra(p, 100.0);
    printf("Como o aluno acabou de ser cadastrado, seu CRA foi redefindo para 100;\n");
    
    getAluno(p);
    
    //free(p);

    aux = killAluno(p);
    if(aux == 0){
        printf("\nAluno descadastrado com sucesso!\n");
    }
    else{
        printf("Algo de errado aconteceu, tentando novamente...\n");
        free(p);
        printf("\nAluno descadastrado com sucesso!\n");
    }
    /* printf("Pesquisando o aluno com maior coeficiente de aproveitamento: \n");
     * aux = search(aluno);
     * printf("Aluno: %s", aluno.nome);
     * printf("Matricula: %s", aluno.matricula);
     * printf("CRA: %.2lf\n", aluno.cra);
     */
    return 0; 
}