#include <stdio.h>
#include <stdlib.h>
#include "TSeqList.h" //inclui os Protótipos


//Definição do tipo lista
struct lista
{
    int qtd;
    struct aluno dados[MAX];
};

Lista *cria_lista()
{
    Lista *li;
    li = (Lista *)malloc(sizeof(struct lista));
    if (li != NULL)
    {
        li->qtd = 0;
    }
    return li; 
}

int insere_lista_final(Lista *li, struct aluno al)
{
    if (li == NULL)
        return -1;
    if (li->qtd == MAX) //lista cheia
        return -1;
    li->dados[li->qtd] = al;
    li->qtd++;
    return 0;
}

int troca_pos_lista(Lista *li, int pos1, int pos2){
    Lista *aux;
    if(li == NULL)
        return -1;
    if(li->qtd == MAX)
        return -1;
    if (pos1 <=0 || pos1 > li->qtd)
        return -1;
    if (pos2 <=0 || pos2 > li->qtd)
        return -1;
    aux->dados[0] = li->dados[pos1-1];
    li->dados[pos1-1] = li->dados[pos2-1];
    li->dados[pos2-1] = aux->dados[0];
    
    free(aux);
    return 0;
}

int remove_intervalo_lista(Lista *li, int pos1, int pos2){
    Lista *aux;
    if(li == NULL)
        return -1;
    if (pos1 <=0 || pos1 > li->qtd)
        return -1;
    if (pos2 <=0 || pos2 > li->qtd)
        return -1;
    int a = pos2; 
    int b = pos1;
    for (int i = pos2-1; i >= pos1; i--){ //este for faz o controle de quantas casas serão chegadas para frente
        for(int i = a; i >= b; i--)     //este for empurra posicao por posicao até a ultima vaga, pelo menos eu espero que faça isso;
            li->dados[i-1] = li->dados[i];
        a++; 
        b++;
        if(b == pos2) // controle para saber se o buraco foi preenchido;
            break;
    }
    
    int aux1 = pos2 - pos1;
    li->qtd -= aux1; // redefinindo a quantidade de alunos na lista;
    free(aux);
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
    if (li->qtd == MAX) //lista cheia
        return -1;
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
        printf("Notas: %f;%f;%f\n", li->dados[i].n1, li->dados[i].n2, li->dados[i].n3);
    }
    return 0;
}

void libera_lista(Lista *li)
{
    free(li);
}