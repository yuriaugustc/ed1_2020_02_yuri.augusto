#include "TLinkedList.h"
#include <stdlib.h>

typedef struct list_node list_node;

struct list_node{
    aluno data;
    list_node *next;
};

struct TLinkedList{
    list_node *head;
};

TLinkedList *list_create(){
    TLinkedList *list;
    list = malloc(sizeof(TLinkedList));
    if (list != NULL){
        list->head = NULL;
    }
    return list;
}

int list_push_front(TLinkedList *list, aluno al)
{
    if (list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        list_node *node;
        node = malloc(sizeof(list_node));
        if (node == NULL){
            return OUT_OF_MEMORY;
        }
        node->data = al;
        node->next = list->head;
        list->head = node;
        return SUCCESS;
    }
}

int list_push_back(TLinkedList *list, aluno al){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        list_node *node;
        node = malloc(sizeof(list_node));
        if(node == NULL){
            return OUT_OF_MEMORY;
        }
            node->data = al;
            node->next = NULL;
            if(list->head == NULL){
                list->head = node;
            }
            list_node *aux = list->head;
            while(aux->next != NULL){
                aux = aux->next;
            }
        aux->next = node;
        return SUCCESS;
    }
}

int list_insert(TLinkedList *list, int pos, aluno al){

}

int list_free(TLinkedList *list){
    if (list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        free(list);
        return SUCCESS;
    }
}
