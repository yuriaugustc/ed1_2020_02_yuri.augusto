#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "TDLinkedList.h"

typedef struct DLNode DLNode;

struct DLNode{
    aluno data;
    DLNode *next;
    DLNode *prev;
};

struct TDLinkedList{
    DLNode *begin;
    DLNode *end;
    int size;
};

TDLinkedList *list_create(){
    TDLinkedList *list = NULL;
    list = malloc(sizeof(TDLinkedList));
    if(list != NULL){
        list->begin = NULL;
    }
    return list;
}

int list_free(TDLinkedList *list){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        DLNode *node = list->begin->next;
        DLNode *aux = node;
        while(node->next != NULL){
            aux = node;
            node = node->next;
            free(aux);
        }
        free(list);
        return SUCCESS;
    }
}

int list_push_front(TDLinkedList *list, aluno al){
    
}