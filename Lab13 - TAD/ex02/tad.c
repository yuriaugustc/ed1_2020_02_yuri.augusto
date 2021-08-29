#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lib.h"

struct aluno{
    char nome[50];
    char matricula[12];
    double cra;
};

/*
 * Função : setAluno
 * Descrição: Faz a alocação na memória de um aluno com os parametros da struct Aluno; 
 * Entrada: Recebe como argumento o nome, matricula e cra;
 * Saída: devolve um ponteiro para a posição na memória onde foi alocada a struct Aluno;
 */
Aluno* setAluno(char *nom, char *matr, double cra){
    Aluno* p;
    p = malloc(1 * sizeof(Aluno));
    strcpy(p->nome, nom);
    strcpy(p->matricula, matr);
    p->cra = cra;
    return p;
}

/*
 * Função: altera_cra
 * Descrição: Faz a alteração encapsulada do CRA cadastrado na struct Aluno;
 * Entrada: Recebe como entrada o ponteiro para o endereço de memoria alocada para a struct e o valor a ser alterado;
 * Saída: Não possui (void);
 */
void altera_cra(Aluno *p, double cra){ 
    p->cra = cra;
}

/*
 * Função: getAluno
 * Descrição: Printa na tela o conteúdo da struct Aluno;
 * Entrada: Recebe como entrada o ponteiro para o endereço de memoria alocada para a struct a ser printada na tela;
 * Saída: Não possui (void) (não possui diretamente, mas indiretamente possui printfs do conteudo a ser printado;)
 */
void getAluno(Aluno *p){
    printf("Nome do Aluno: %s", p->nome);
    printf("Matrícula: %s\n", p->matricula);
    printf("CRA: %.2lf", p->cra);
}

/*
 * Função: killAluno
 * Descrição: Desaloca a memoria alocada para struct Aluno;
 * Função: Recebe como entrada o ponteiro para o endereço de memoria alocada para a struct Aluno;
 * Saída: Devolve 0 como saída em caso de sucesso e -1 em caso de falha;
 */
int killAluno(Aluno *p){
    if(p == NULL){
        return -1;
    }
    else{
        free(p);
        return 0;
    }
}

/*
 * Função search
 * Descrição: Busca o aluno com o maior CRA cadastrado;
 * Entrada: Recebe como entrada o valor cadastrado na variavel CRA, dentro da struct Aluno;
 * Retorna: Retorna o indice(posicao no vetor) do aluno com maior nota de CRA;
 */
int search(Aluno aluno[]){
    int aux; 
    double maior = 0;
    for(int i = 0; i < 3; i++){
        if(aluno[i].cra > maior){
            maior = aluno[i].cra;
            aux = i;
        }
    }
    return aux;
}