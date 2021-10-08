#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
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

/*  Descripition: This function destroy/deallocate a memory allocation by your pointer;
 *  Input: (The List's pointer to deallocate);
 *  Output: A code that can means success or error (0 in success cases, any other code in fail cases); 
 */
int list_free(TDLinkedList *list){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        DLNode *node = list->begin;
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

/*  Descripition: Insert a student in a indicated position;
 *  Input: (The List's pointer to do the inserction, a position to do the inserction, the struct with student's data);
 *  Output: A code that can means success or error (0 in success cases, any other code in fail cases); 
 */
int list_insert(TDLinkedList *list, int pos, aluno al){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    if(pos <= 0 || pos > list->size){
        return OUT_OF_RANGE;
    }
    if(pos == 1){
        list_push_front(list, al);
    }
    if(pos == list->size){
        list_push_back(list, al);
    }
    DLNode *node = malloc(sizeof(DLNode));
    DLNode *aux = list->begin;
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

/*  Descripition: Calculate the list's size;
 *  Input: (The List's pointer to calculate the size);
 *  Output: A code that can means success or error (0 in success cases, any other code in fail cases); 
 */
int list_size(TDLinkedList *list, int *pos){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    *pos = list->size;
    return SUCCESS;
}

/*  Descripition: Remove the student in the first position from the list;
 *  Input: (The List's pointer to removal);
 *  Output: A code that can means success or error (0 in success cases, any other code in fail cases); 
 */
int list_pop_front(TDLinkedList *list){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        DLNode *aux = list->begin->next;
        aux->prev = NULL;
        list->begin = aux;
        (list->size)++;
        return SUCCESS;
    }
}

/*  Descripition: Remove the student in the last position form the list;
 *  Input: (The List's pointer to removal);
 *  Output: A code that can means success or error (0 in success cases, any other code in fail cases); 
 */
int list_pop_back(TDLinkedList *list){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        DLNode *aux = list->end->next;
        aux->next = NULL;
        list->end = aux;
        (list->size)--;
    }
}

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
                list_erase(list, count);
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

/*  Descripition: Find the student from the list by your position;
 *  Input: (The List's pointer to removal, your position in the list);
 *  Output: A code that can means success or error (0 in success cases, any other code in fail cases);  
 */ 
int list_find_pos(TDLinkedList *list, int pos, aluno *al){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    if(pos <= 0 || pos > list->size){
        return OUT_OF_RANGE;
    }
    DLNode *aux = list->begin;
    int count = 1;
    while(count != pos){
        aux = aux->next;
        count++;
    }
    *al = aux->data;
    return SUCCESS;
}

/*  Descripition: Find the student form the list by your registry;
 *  Input: (The List's pointer to search, your registry, a pointer to struct to access student's data);
 *  Output: Returns the student position's value, or a error code; 
 */
int list_find_mat(TDLinkedList *list, int nmat, aluno *al){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        DLNode *aux = list->begin;
        while(aux->data.matricula != nmat){
            if(aux->next == NULL){
                return OUT_OF_RANGE;
            }
            aux = aux->next;
        }
        *al = aux->data;
        return SUCCESS;
    }
}

/*  Descripition: Find and returns the student's content that has in first position in the list;
 *  Input: (The List's pointer to search, a pointer to struct to access student's data);
 *  Output: Returns the student position's value, or a error code; 
 */
int list_front(TDLinkedList *list, aluno *al){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        *al = list->begin->data;
        return SUCCESS;
    }
}

/*  Descripition: Find and returns the student's content that has in last position in the list;
 *  Input: (The List's pointer to search, a pointer to struct to access student's data);
 *  Output: Returns the student position's value, or a error code;  
 */
int list_back(TDLinkedList *list, aluno *al){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        *al = list->end->data;
        return SUCCESS;
    }
}

/*  Descripition: Find and returns a student position by your registry;
 *  Input: (The List's pointer to search, the student's registry, a pointer to return the value by reference);
 *  Output: Returns the student position's value, or a error code; 
 */
int list_get_pos(TDLinkedList *list, int nmat, int *pos){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        DLNode *aux = list->begin->next;
        int count = 1;
        while(aux->data.matricula != nmat){
            if(aux->next == NULL){
                return OUT_OF_RANGE;
            }
            aux = aux->next;
            count++;
        }
        *pos = count;
        return SUCCESS;
    }
}

/*  Descripition: Print all the list on console, from first until last;
 *  Input: (The List's pointer to print);
 *  Output: The data of all position in the list; 
 */ 
int list_print_forward(TDLinkedList *list){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        DLNode *aux = list->end;
        int count = list->size;
        while(aux != NULL){ 
            printf("Student the position number %d of the list: ", count);
            printf("Registry: %d\n", aux->data.matricula);
            printf("Name: %s", aux->data.nome);
            printf("Grade n°1: %.2lf\n", aux->data.n1);
            printf("Grade n°2: %.2lf\n", aux->data.n2);
            printf("Grade n°3: %.2lf\n", aux->data.n3);
            for(int i = 0; i < 30; i++){
            printf("-");
            Sleep(500);
            }
            printf("\n");
            aux = aux->prev;
            count--;
        }
        return SUCCESS;
    }
}

/*  Descripition: Print all the list on console, from last until first;
 *  Input: (The List's pointer to print);
 *  Output: The data of all position in the list; 
 */
int list_print_reverse(TDLinkedList *list){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        DLNode *aux = list->end;
        int count = 1;
        while(aux != NULL){ 
            printf("Student the position number %d of the list: ", count);
            printf("Registry: %d\n", aux->data.matricula);
            printf("Name: %s", aux->data.nome);
            printf("Grade n°1: %.2lf\n", aux->data.n1);
            printf("Grade n°2: %.2lf\n", aux->data.n2);
            printf("Grade n°3: %.2lf\n", aux->data.n3);
            for(int i = 0; i < 30; i++){
            printf("-");
            Sleep(500);
            }
            printf("\n");
            aux = aux->next;
            count++;
        }
        return SUCCESS;
    }
}