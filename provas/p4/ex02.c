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

*/

//letra (a):

typedef struct TCLNode TCLNode;

struct TCLNode{ // TAD Circle List Node
    char data;
    TCLNode *next;
    int call;
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
                ch = node->data;
            }
        }
    }
    return 0;
}