#include "search.h"
/*
 * Função search.c
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