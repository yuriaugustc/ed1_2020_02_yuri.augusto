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

/*  Descripition: Creates/allocate in memory the Doubly Linked list;
 *  Input: Nothing;
 *  Output: A pointer to Linked List's position;
 */
TDLinkedList *list_create(){
    TDLinkedList *list = NULL;
    list = malloc(sizeof(TDLinkedList));
    if(list != NULL){
        list->begin = NULL;
        list->end = NULL;
        list->size = 0;
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

/*  Descripition: Insert a student on list's first position;
 *  Input: (The List's pointer to do the inserction, the struct with student's data);
 *  Output: A code that can means success or error (0 in success cases, any other code in fail cases);
 */
int list_push_front(TDLinkedList *list, aluno al){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        DLNode *node = malloc(sizeof(DLNode));
        if(node == NULL){
            return OUT_OF_MEMORY;
        }
        node->data = al;
        node->next = list->begin->next;
        node->prev = NULL;
        list->begin->prev = node;
        list->begin = node;
        (list->size)++;
        if(list->size == 1)
            list->end = node;
        return SUCCESS;
    }
}

/*  Descripition: Insert a student on list's last position;
 *  Input: (The List's pointer to do the inserction, the struct with student's data);
 *  Output: A code that can means success or error (0 in success cases, any other code in fail cases);
 */
int list_push_back(TDLinkedList *list, aluno al){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        DLNode *node = malloc(sizeof(DLNode));
        if(node == NULL){
            return OUT_OF_MEMORY;
        }
        node->data = al;
        node->next = NULL;
        node->prev = list->end->next;
        list->end->next = node;
        list->end = node;
        (list->size)++;
        if(list->size == 1)
            list->begin = node;
        return SUCCESS;
    }
}

int list_insert(TDLinkedList *list, int pos, aluno al){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    if(pos <= 0 || pos > list->size){
        return OUT_OF_RANGE;
    }
    DLNode *node = malloc(sizeof(DLNode));
    DLNode *aux = list->begin->next;
    if(pos == 1){
        list_push_front(list, al);
    }
    if(pos == list->size){
        list_push_back(list, al);
    }
    int count = 1;
    while(count != pos){
        aux = aux->next;
        count++;
    }
    node->data = al;
    node->next = aux;
    node->prev = aux->prev;
    aux->prev = node;
    aux = node->prev;
    aux->next = node;
    (list->size)++;
    return SUCCESS;
}

int list_size(TDLinkedList *list, int *pos){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    pos = list->size;
    return SUCCESS;
}

int list_pop_front(TDLinkedList *list){
    
}