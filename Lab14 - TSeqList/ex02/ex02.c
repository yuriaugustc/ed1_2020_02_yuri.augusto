#include <stdio.h>
#include "TVarSeqList.h"
#include <string.h>

int main()
{
    Lista *alunos, *alunos_enade = NULL;
    alunos = cria_lista();

    int matricula, num, *p;
    char nome[30];
    float n1, n2, n3;

    struct aluno aluno;

    printf("Deseja cadastrar quantos alunos: ");
    scanf("%d", &num);
    
    for (int i = 0; i < num; i++)
    {
        printf("Nome do aluno: ");
        scanf("%s", nome);
        printf("Matricula: ");
        scanf("%d", &matricula);
        printf("Nota 1: ");
        scanf("%f", &n1);
        printf("Nota 2: ");
        scanf("%f", &n2);
        printf("Nota 3: ");
        scanf("%f", &n3);

        aluno.matricula = matricula;
        strcpy(aluno.nome, nome);
        aluno.n1 = n1;
        aluno.n2 = n2;
        aluno.n3 = n3;

        int ret = insere_lista_final(alunos, aluno);
        if (ret == -1 ){
            printf("\nErro: lista cheia");
        }
    }

    struct aluno a;
    consulta_lista_pos(alunos,1,&a);
    printf("Esta é a lista dos alunos cadastrados:\n");
    imprime_lista(alunos);
    printf("\n--------------------------------\n");
    int aux = compactar_lista(alunos);
    if(aux == 0)
        printf("A lista dos alunos do PET foi compactada!.\n");
    int aux1 = compactar_lista(alunos_enade);
    if(aux1 == 0)
        printf("A lista dos alunos do enade foi compactada!.\n");

    libera_lista(alunos);
    printf("funcionei ate o fim");
}