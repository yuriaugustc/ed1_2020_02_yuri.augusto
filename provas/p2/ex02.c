/*
2) Considerando o TAD ListaSequencial¹, implemente uma nova função
chamada remove_intervalo_lista, que retira da lista todos os elementos
de uma posição inicial até uma posição final.  Por exemplo,
na chamada abaixo, são retirados da lista os elementos das
posições 5,6,7,8 e 9. Não é permitido chamar outras funções do TAD Lista. 
Nas situações inválidas a função deverá retornar como código de erro
o número -1. Sucesso retornar 0. Mantenha o padrão pré-definido do
TAD, que diz que a posição 1 corresponde ao primeiro elemento da lista.

Exemplo de chamada da função:
remove_intervalo_lista(lista,5,9)

int remove_intervalo_lista(Lista *li, int pos1, int pos2){
    if(li == NULL)
        return -1;
    if (pos1 <=0 || pos1 > li->qtd)
        return -1;
    if (pos2 <=0 || pos2 > li->qtd)
        return -1;
  // check:<<<erro: e2.2: erro em testes de tamanho da lista com as posições de remoção (posições aceitas >=1 <=qtd/ teste de lista null // start>end>>>>
    Lista *aux;
    int a = pos2; 
    int b = pos1;
    // check:<<<erro: e2.3: Um só laço deve ser usado O(n). Da forma como está envolve deslocar os mesmos elementos várias vezes O(N²)>>>>
    for (int i = pos2-1; i >= pos1; i--){ //este for faz o controle de quantas casas serão chegadas para frente
        for(int i = a; i >= b; i--)     //este for empurra posicao por posicao até a ultima vaga, pelo menos eu espero que faça isso;
            li->dados[i-1] = li->dados[i];
        a++; // check:<<<erro:?? >>>>
        b++;
        //if(b == pos2) // controle para saber se o buraco foi preenchido;
        //    break;    // acabei chegando a conclusao de que o primeiro for ja vai fazer esse controle, gostaria de saber se estou certo ou não quando corrigir;
    }
    
    int aux1 = pos2 - pos1;
    li->qtd -= aux1; // redefinindo a quantidade de alunos na lista;// check:<<<erro: aux+1>>>>
    free(aux);
    return 0;
}
*/

// SUB - Refazendo o exercicio


#include <stdlib.h>

int remove_intervalo_lista(Lista *li, int pos1, int pos2){
    if(li == NULL){
        return -1;
    }
    if(pos1 <=0 || pos1 > li->qtd){
        return -1;
    }
    if(pos2 <=0 || pos2 > li->qtd){
        return -1;
    }
    int j = pos2; // variavel auxiliar para modificar o valor equivalente ao de pos2;
    for(int i = pos1-1; i <= li->qtd; i++){ // iniciando o vetor a partir da posicao solicitada-1, pois o vetor inicia em 0;
        li->dados[i] = li->dados[j]; // a variavel i e j avancam conforme cada loop até o fim do vetor;
        j++;
    }
    li->qtd = (pos2 - pos1)+1; // atualizando o tamanho do vetor; 
    return 0;
}