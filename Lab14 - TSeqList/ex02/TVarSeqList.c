#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "TVarSeqList.h" //inclui os Protótipos

//Definição do tipo lista
struct lista
{
    int qtd;
    int num;
    struct aluno dados[5];
};

Lista *cria_lista()
{
    Lista *li;
    li = (Lista *)malloc(sizeof(struct lista));
    if (li != NULL)
    {
        li->qtd = 0;
    }
    return li; // desaloca
}

void realoca_lista(Lista *li){
    max += 100;
    li = (Lista *)realloc(li, max * sizeof(int));
}

int compactar_lista(Lista *li){
    int aux = ceil(li->qtd/10) * 10;
    li = (Lista *)realloc(li, aux * sizeof(int));
    li->qtd = aux;
    if(li == NULL)
        return -1;
    else
        return 0;
}

int insere_lista_final(Lista *li, struct aluno al)
{
    if (li == NULL)
        return -1;
    if (li->qtd == max) //lista cheia
        realoca_lista(li);
    li->dados[li->qtd] = al;
    li->qtd++;
    return 0;
}

int consulta_lista_pos(Lista *li, int pos, struct aluno *al)
{
    if (li == NULL)
        return -1;
    if (pos <=0 || pos > li->qtd)
        return -1;
    *al = li->dados[pos-1];
    return 0;
}

int insere_lista_inicio(Lista *li, struct aluno al)
{
    if (li == NULL)
        return -1;
    if (li->qtd == max) //lista cheia
        realoca_lista(li);
    // deslocando os elementos
    for (int i = li->qtd - 1; i >= 0; i--)
    {
        li->dados[i + 1] = li->dados[i];
    }
    // primeira posição disponivel
    li->dados[0] = al;
    li->qtd++;
    return 0;
}

int imprime_lista(Lista *li)
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

void libera_lista(Lista *li)
{
    free(li);
}