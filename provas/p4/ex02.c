/* ex02
Uma das utilidades das listas circulares dinâmicas é a possibilidade de percorrer
todos os elementos por diversas vezes em um loop. Modifique o TAD para incluir uma
função que retornará sempre o próximo elemento. Por exemplo, se a lista não foi
percorrida ainda, o próximo elemento é a cabeça. Depois, ao chamar a função
novamente, será devolvido o segundo elemento, e assim sucessivamente.
(a) mostrar como fica a estrutura do TAD
(b) mostrar a função que retorna o próximo elemento
*Não é necessário mostrar as outras funções afetadas pela modificação proposta

(c) Qual a diferença entre o vetor de acesso circular usado na 
implementação de uma fila estática de uma lista circular?
// responder aqui:
Um vetor de acesso circular estático ainda possui as mesmas limitações de um vetor estático, ele 
apenas está utilizando o método circular para fluir seu conteúdo, uma copia do metodo em si. Ele ainda está preso ao acesso sequencial
e tamanho fixo. 
Uma fila circular utiliza o metodo de alocacao dinamica e a pura implementação do conceito circular. Por natureza 
sua "forma" é circular e seu tamanho "indefinido"(pode ser aumentado a qualquer momento sem muito esforço e 
sem realocação de dados como no caso de um vetor estatico que por ventura tivesse seu tamanho aumentado).



//letra (a):

typedef struct TCLNode TCLNode;

struct TCLNode{ // TAD Circle List Node
    char data;
    TCLNode *next;
    int call;// check:<<<erro: é pra guardar a informação na lista, não no nó>>>>
};

//letra (b):
#include <stdlib.h>

int clist_find_next(TCLNode *cl, char *ch){
    if(cl == NULL){
        return -1;
    }
    else{
        TCLNode *node;
        if(cl->call == 0){
            ch = cl->next->data;
        }else{
            for(int i = 0; i <= cl->call; i++){
                node = cl->next;
                ch = node->data;// check:<<<erro: quando o valor de cl-all é atualizado?>>>>
            }
        }
    }
    return 0;
}
// check:<<<erro: faltou teste de lista vazia>>>>
// check:<<<erro: faz percorrer a lista sendo que bastava ter um ponteiro direto para o elemento>>>>
// check:<<<erro: fez o teste para saber se é a primeira vez que chama a função>>>>
// check:<<<erro: atualizou corretamente o ponteiro>>>>

*/

// SUB - Refazendo o exercicio

//letra (a):

typedef struct TCLNode TCLNode;
typedef struct TCList TCList;

struct TCList{
    TCLNode *end;
    TCLNode *fnext;
    int qtd;
    int calls;
};

struct TCLNode{ // TAD Circle List Node
    char data;
    TCLNode *next;
};

//letra (b):
#include <stdlib.h>

int clist_find_next(TCList *cl, char *ch){
    if(cl == NULL){
        return -1;
    }
    if(cl->qtd == 0){
        return NULL;
    }
    else{
        cl->fnext = cl->end->next;
        if(cl->calls == 1){
            *ch = cl->fnext->data;
            cl->calls++;
        }
        else{
            for(int i = 0; i < cl->calls;){
                cl->fnext = cl->fnext->next;
            }
            *ch = cl->fnext->data;
        }
    return 0;
    }
}