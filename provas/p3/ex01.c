/*
Considere o TAD TDLinkedList que serve para manipular uma lista duplamente 
encadeada de alunos (a lista usada na prática 16 – copiar o código 
da SUA PRÁTICA)

Implemente no TAD a função  int list_erase_max_nota_n1(TDLinkedList *li), que 
retira da  lista todos os alunos que possuem a maior nota na primeira prova
(elemento n1 da struct aluno; note que mais de um aluno pode possuir 
a nota máxima). Pode-se utilizar qualquer função já implementada na
lista (que estão no .h)


*/



int list_erase_max_nota_n1(TDLinkedList *list){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        DLNode *aux = list->begin;
    
        int max = 0;
        while(aux->next != NULL){
            if(aux->data.n1 > max){
                max = aux->data.n1;
            }
            aux = aux->next;
        }
        int count = 1;
        aux = list->begin;
        while(aux->next != NULL){
            if(aux->data.n1 == max){
                aux = aux->next;
                list_erase(list, count); // só fiquei com um pouquinho de duvida se essa funcao alteraria algo no meu "aux = aux->next", mas acho que nao, já que eu fiz essa linha antes;
// check:<<<erro: e1.2 Não apagou corretamente. Ao usar list_erase(list,pos) tem que lembrar que a lista diminui de tamanho a cada chamada e o 'pos' não faz mais sentido>>>>
            }
            count++;
        }
    }
}

/*  Descripition: Remove the student from the list by your position;
 *  Input: (The List's pointer to removal, your position in the list);
 *  Output: A code that can means success or error (0 in success cases, any other code in fail cases);  
 */ 
int list_erase(TDLinkedList *list, int pos){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    if(pos <= 0 || pos > list->size){
        return OUT_OF_RANGE;
    }
    if(pos == 1){
        list_pop_front(list);
    }
    if(pos == list->size){
        list_pop_back(list);
    }
    DLNode *aux = list->begin;
    DLNode *aux1 = aux;
    DLNode *aux2;
    int count = 1;
    while(count != pos){
        aux1 = aux;
        aux = aux->next;
        count++;
    }
    aux1->next = aux->next;
    aux2 = aux->next;
    aux2->prev = aux1;
    free(aux);
    return SUCCESS;
}