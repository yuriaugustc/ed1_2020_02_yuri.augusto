#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "TSeqList.h"

//Definição do tipo lista
struct lista
{
    int max;
    int qtd;
    int num;
    struct aluno dados[5];
};



TSeqList *create_list(){
    TSeqList *li;
    li = (TSeqList *)malloc(sizeof(struct lista));
    if (li != NULL)
    {
        li->qtd = 0;
        li->max = 100;
    }
    return li; // desaloca
}

void realloc_list(TSeqList *li){
    if(li != NULL){
        li->max += 100;
        li = (TSeqList *)realloc(li, li->max * sizeof(int));
    }else{
        return -1;
    }
}

int compact_list(TSeqList *li){
    int aux = ceil(li->qtd/10) * 10;
    li = (TSeqList *)realloc(li, aux * sizeof(int));
    li->qtd = aux;
    if(li == NULL)
        return -1;
    else
        return 0;
}

int insert_list_back(TSeqList *li, struct aluno al)
{
    if (li == NULL)
        return -1;
    if (li->qtd == li->max) //lista cheia
        realoca_lista(li);
    li->dados[li->qtd] = al;
    (li->qtd)++;
    return 0;
}

int find_list_pos(TSeqList *li, int pos, struct aluno *al)
{
    if (li == NULL)
        return -1;
    if (pos <=0 || pos > li->qtd)
        return -1;
    *al = li->dados[pos-1];
    return 0;
}

int find_list_mat(TSeqList *li, int mat, struct aluno *al){
    int i = 0;
    if(li == NULL)
        return -1;
    for(i = 0; i < li->qtd; i++){
        if(li->dados->matricula == mat){
            break;
        }
    }
    *al = li->dados[i];
    return 0;
}

int list_back(TSeqList *li, struct aluno *al){
    if(li == NULL){
        return -1;
    }else{
        *al = li->dados[li->qtd-1];
    }
}

int insert_list_back(TSeqList* li, struct aluno al){
    if(li == NULL)
        return -1;
    if (li->qtd == li->max) //lista cheia
        realloc_list(li);

    li->dados[li->qtd] = al;
    (li->qtd)++;
    return 0;
}

int insert_list_front(TSeqList *li, struct aluno al)
{
    if (li == NULL)
        return -1;
    if (li->qtd == li->max) //lista cheia
        realloc_list(li);
    // deslocando os elementos
    for (int i = li->qtd - 1; i >= 0; i--)
    {
        li->dados[i + 1] = li->dados[i];
    }
    // primeira posição disponivel
    li->dados[0] = al;
    (li->qtd)++;
    return 0;
}

int erase_list_back(TSeqList* li){
    if(li == NULL)
        return -1;
    int aux = (li->qtd)-1;
    free(&li->dados[aux]);
    
    (li->qtd)--;

    return 0;
}

int print_list(TSeqList *li)
{
    if (li == NULL)
        return -1;

    for (int i = 0; i < li->qtd; i++)
    {
        printf("\nMatricula: %d\n", li->dados[i].matricula);
        printf("\nNome: %s\n", li->dados[i].nome);
        printf("Notas: %.2f; %.2f; %.2f\n", li->dados[i].n1, li->dados[i].n2, li->dados[i].n3);
    }
    
    return 0;
}

void free_list(TSeqList *li)
{
    free(li);
}