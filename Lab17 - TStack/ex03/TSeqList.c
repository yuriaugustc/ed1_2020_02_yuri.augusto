#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "TSeqList.h"

//Definição do tipo lista
struct lista
{
    int max;
    int qtd;
    char *dados;
};



TSeqList *create_list(int num){
    TSeqList *li;
    li = (TSeqList *)malloc(sizeof(struct lista));
    if (li != NULL)
    {
        li->dados = (char *)malloc(num*sizeof(char));
        li->qtd = 0;
        li->max = num;
    }
    return li; // desaloca
}

int insert_list_back(TSeqList *li, char al)
{
    if (li == NULL)
        return INVALID_NULL_POINTER;
    li->dados[li->qtd] = al;
    (li->qtd)++;
    return SUCCESS;
}

int list_back(TSeqList *li, char *al){
    if(li == NULL){
        return INVALID_NULL_POINTER;
    }else{
        *al = li->dados[li->qtd-1];
    }
}

int insert_list_back(TSeqList* li, char al){
    if(li == NULL)
        return INVALID_NULL_POINTER;
    if (li->qtd == li->max) //lista cheia
        realloc_list(li);

    li->dados[li->qtd] = al;
    (li->qtd)++;
    return SUCCESS;
}

int erase_list_back(TSeqList* li){
    if(li == NULL)
        return INVALID_NULL_POINTER;
    int aux = (li->qtd)-1;
    free(&li->dados[aux]);
    
    (li->qtd)--;

    return SUCCESS;
}

int print_list(TSeqList *li)
{
    if (li == NULL)
        return INVALID_NULL_POINTER;
    printf("Conteudo armazenado: (listagem em formato de pilha, ou seja, do fim para o início)\n");
    for (int i = li->qtd; i >= 0; i--){
        printf("%c", li->dados[i]);
    }
    printf("\n");
    return SUCCESS;
}

int list_full(TSeqList *li){
    if(li == NULL){
        return INVALID_NULL_POINTER;
    }else{
        if(li->qtd == li->max){
            return OUT_OF_MEMORY;
        }else{
            return SUCCESS;
        }
    }
}

int list_empty(TSeqList *li){
    if(li == NULL){
        return INVALID_NULL_POINTER;
    }else{
        if(li->qtd == 0){
            return EMPTY_LIST;
        }else{
            return SUCCESS;
        }
    }
}

void free_list(TSeqList *li)
{
    free(li);
}