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

/*  Descripition: Creates/allocate in memory the Linked list;
 *  Input: Nothing;
 *  Output: A pointer to Linked List's position;
 */
TLinkedList *list_create(){
    TLinkedList *list;
    list = malloc(sizeof(TLinkedList));
    if (list != NULL){
        list->head = NULL;
    }
    return list;
}

/*  Descripition: Insert a student on list's first position;
 *  Input: (The List's pointer to do the inserction, the struct with student's data);
 *  Output: A code that can means success or error (0 in success cases, any other code in fail cases);
 */
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

/*  Descripition: Insert a student on list's last position;
 *  Input: (The List's pointer to do the inserction, the struct with student's data);
 *  Output: A code that can means success or error (0 in success cases, any other code in fail cases);
 */
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

/*  Descripition: Insert a student in a indicated position;
 *  Input: (The List's pointer to do the inserction, a position to do the inserction, the struct with student's data);
 *  Output: A code that can means success or error (0 in success cases, any other code in fail cases); 
 */
int list_insert(TLinkedList *list, int pos, aluno al){

}

/*  Descripition: Insert neatly on the list;
 *  Input: (The List's pointer to do the inserction, the struct with student's data);
 *  Output: A code that can means success or error (0 in success cases, any other code in fail cases); 
 */ 
int list_insert_sorted(TLinkedList *list, aluno al){

}

/*  Descripition: Calculate the list's size;
 *  Input: (The List's pointer to calculate the size);
 *  Output: A code that can means success or error (0 in success cases, any other code in fail cases); 
 */ 
int list_size(TLinkedList *list){

}

/*  Descripition: Remove the student in the first position from the list;
 *  Input: (The List's pointer to removal);
 *  Output: A code that can means success or error (0 in success cases, any other code in fail cases); 
 */ 
int list_pop_front(TLinkedList *list){

}

/*  Descripition: Remove the student in the last position form the list;
 *  Input: (The List's pointer to removal);
 *  Output: A code that can means success or error (0 in success cases, any other code in fail cases); 
 */ 
int list_pop_back(TLinkedList *list){

}

/*  Descripition: Remove the student form the list by your registry;
 *  Input: (The List's pointer to removal, your registry);
 *  Output: A code that can means success or error (0 in success cases, any other code in fail cases); 
 */ 
int list_erase_data(TLinkedList *list, int matr){

}

/*  Descripition: Remove the student form the list by your position;
 *  Input: (The List's pointer to removal, your position in the list);
 *  Output: A code that can means success or error (0 in success cases, any other code in fail cases);  
 */ 
int list_erase_pos(TLinkedList *list, int pos){

}

/*  Descripition: Find the student form the list by your position;
 *  Input: (The List's pointer to search, your position in the list, a pointer to struct to access student's data);
 *  Output: Returns the student position's value, or a error code; 
 */ 
int list_find_pos(TLinkedList *list, int pos, aluno *al){

}

/*  Descripition: Find the student form the list by your registry;
 *  Input: (The List's pointer to search, your registry, a pointer to struct to access student's data);
 *  Output: Returns the student position's value, or a error code; 
 */
int list_find_mat(TLinkedList *list, int matr, aluno *al){

}

/*  Descripition: Find and returns the student's content that has in first position in the list;
 *  Input: (The List's pointer to search, a pointer to struct to access student's data);
 *  Output: Returns the student position's value, or a error code; 
 */ 
int list_front(TLinkedList *list, aluno *al){

}

/*  Descripition: Returns the student's content that has in last position in the list;
 *  Input: (The List's pointer to search, a pointer to struct to access student's data);
 *  Output: Returns the student position's value, or a error code;  
 */ 
int list_back(TLinkedList *list, aluno *al){

}

/*  Descripition: Find and returns a student position by your registry;
 *  Input: (The List's pointer to search, a pointer to struct to access student's data);
 *  Output: Returns the student position's value, or a error code; 
 */ 
int list_get_pos(TLinkedList *list, aluno *al){

}

/*  Descripition: Print all the list on console;
 *  Input: (The List's pointer to print);
 *  Output: The data of all position in the list; 
 */ 
int list_print(TLinkedList *list){

}

/*  Descripition: This function destroy/deallocate a memory allocation by your pointer;
 *  Input: (The List's pointer to deallocate);
 *  Output: A code that can means success or error (0 in success cases, any other code in fail cases); 
 */
int list_free(TLinkedList *list){
    if (list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        free(list);
        return SUCCESS;
    }
}
