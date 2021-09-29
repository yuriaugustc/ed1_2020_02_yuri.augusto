#include <stdio.h>
#include "TLinkedList.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

int list_push_back(TLinkedList *list, struct aluno al)
{
    if (list == NULL)
    {
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
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        list_node *node = malloc(sizeof(list_node));
        if(node == NULL){
            return OUT_OF_MEMORY;
        }
        node->data = al;
        list_node *aux = list->head;
        int count = 1;               // (position starts in 1);
        while(count+1 != pos){       // +1 because the point must be stopped a position before the wanted position, to set back position to point to new node;
            if(aux->next == NULL){
                return OUT_OF_RANGE;
            }
            count++;
            aux = aux->next;
        }
        node->next = aux->next; //set the new node to point to node that has pushed foward;
        aux->next = node; //set the back foward to point to new node;
        return SUCCESS;
    }
}

/*  Descripition: Insert neatly on the list;
 *  Input: (The List's pointer to do the inserction, the struct with student's data);
 *  Output: A code that can means success or error (0 in success cases, any other code in fail cases); 
 */ 
int list_insert_sorted(TLinkedList *list, aluno al){
    // this function only may works if the list is already ordered;
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        list_node *node = malloc(sizeof(list_node));
        if(node == NULL){
            return OUT_OF_MEMORY;
        }
        node->data = al;
        list_node *aux = list->head;
        while(aux->data.matricula <= node->data.matricula){
            if(aux->next == NULL){
                return OUT_OF_RANGE;
            }
            aux = aux->next;
        }
        node->next = aux->next; //set the new node to point to node that has pushed foward;
        aux->next = node; //set the back foward to point to new node;
        return SUCCESS;
    }
}

/*  Descripition: Calculate the list's size;
 *  Input: (The List's pointer to calculate the size);
 *  Output: A code that can means success or error (0 in success cases, any other code in fail cases); 
 */ 
int list_size(TLinkedList *list){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        list_node *aux = list->head;
        int count = 1;                  // (position starts in 1);
        while(aux->next != NULL){
            count++;
            aux = aux->next;
        }
        return count;
    }
}

/*  Descripition: Remove the student in the first position from the list;
 *  Input: (The List's pointer to removal);
 *  Output: A code that can means success or error (0 in success cases, any other code in fail cases); 
 */ 
int list_pop_front(TLinkedList *list){
    if (list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        list_node *aux = list->head;  // a auxiliary pointer to move foward the head list;
        list_node *aux1 = aux->next; // a auxiliary pointer to keep the position to can deallocate at end of function;
        aux = aux1->next;
        list->head = aux;
        list_free(aux1);
        return SUCCESS;
    }
}

/*  Descripition: Remove the student in the last position form the list;
 *  Input: (The List's pointer to removal);
 *  Output: A code that can means success or error (0 in success cases, any other code in fail cases); 
 */ 
int list_pop_back(TLinkedList *list){
    if (list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        list_node *aux = list->head; // a auxiliary pointer to scroll through the list;
        list_node *aux1 = aux;       // a auxiliary pointer to set the new last position to point to NULL;
        while(aux->next != NULL){
            aux1 = aux;
            aux = aux->next;
        }
        aux1->next = NULL;
        free(aux);
        return SUCCESS;
    }
}

/*  Descripition: Remove the student form the list by your registry;
 *  Input: (The List's pointer to removal, your registry);
 *  Output: A code that can means success or error (0 in success cases, any other code in fail cases); 
 */ 
int list_erase_data(TLinkedList *list, int matr){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        list_node *aux = list->head; // a auxiliary pointer to scroll through the list;
        list_node *aux1 = aux;       // a auxiliary pointer to push back the list, filling the hole;
        while(aux->data.matricula != matr){
            if(aux->next == NULL){
                return OUT_OF_RANGE;
            }
            aux1 = aux;
            aux = aux->next;
        }
        aux1->next = aux->next; // pointing the auxiliary to the position after the indicated position to delete; 
        free(aux);
        return SUCCESS;
    }
}

/*  Descripition: Remove the student form the list by your position;
 *  Input: (The List's pointer to removal, your position in the list);
 *  Output: A code that can means success or error (0 in success cases, any other code in fail cases);  
 */ 
int list_erase_pos(TLinkedList *list, int pos){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        list_node *aux = list->head; // a auxiliary pointer to scroll through the list;
        list_node *aux1 = aux;       // a auxiliary pointer to push back the list, filling the hole;
        int count = 1;               // a auxiliary counter to find the wanted position (position starts in 1);
        while(count != pos){
            if(aux->next == NULL){
                return OUT_OF_RANGE;
            }
            aux1 = aux;
            aux = aux->next;
            count++;
        }
        aux1->next = aux->next; // pointing the auxiliary to the position after the indicated position to delete; 
        free(aux);
        return SUCCESS;
    }
}

/*  Descripition: Find the student form the list by your position;
 *  Input: (The List's pointer to search, your position in the list, a pointer to struct to access student's data);
 *  Output: Returns the student position's value, or a error code; 
 */ 
int list_find_pos(TLinkedList *list, int pos, aluno *al){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        list_node *aux = list->head;
        int count = 1;                  // a auxiliary counter to find the wanted position (position starts in 1);
        while(count != pos){
            if(aux->next == NULL){
                return OUT_OF_RANGE;
            }
            count++;
            aux = aux->next;
        }
        al->matricula = aux->data.matricula;
        strcpy(al->nome, aux->data.nome);
        al->n1 = aux->data.n1;
        al->n2 = aux->data.n2;
        al->n3 = aux->data.n3;
        return SUCCESS; //tenho que usar passagem por referencia; por isso ele passou um ponteiro como argumento(vide linha 290);
    }
}

/*  Descripition: Find the student form the list by your registry;
 *  Input: (The List's pointer to search, your registry, a pointer to struct to access student's data);
 *  Output: Returns the student position's value, or a error code; 
 */
int list_find_mat(TLinkedList *list, int matr, aluno *al){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        list_node *aux = list->head;
        aux->data = *al;
        while(aux->data.matricula != matr){
            if(aux->next == NULL){
                return OUT_OF_RANGE;
            }
            aux = aux->next;                   //tenho que usar passagem por referencia; por isso ele passou um ponteiro como argumento,                               
        }                                      // passagem por referencia, vc modifica o valor direto na variavel, isto é, no endereço dela, assim a modificação fica salva fora da função chamada, uma especie de return indireto;
        al->matricula = aux->data.matricula;   // este é um meio de burlar o retorno de uma função, que retorna apenas uma coisa, quando vc deseja retornar mais de um valor;
        strcpy(al->nome, aux->data.nome);
        al->n1 = aux->data.n1;
        al->n2 = aux->data.n2;
        al->n3 = aux->data.n3;
        return SUCCESS;        
    }
}

/*  Descripition: Find and returns the student's content that has in first position in the list;
 *  Input: (The List's pointer to search, a pointer to struct to access student's data);
 *  Output: Returns the student position's value, or a error code; 
 */ 
int list_front(TLinkedList *list, aluno *al){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        list_node *aux = list->head->next;
        al->matricula = aux->data.matricula;
        strcpy(al->nome, aux->data.nome);
        al->n1 = aux->data.n1;
        al->n2 = aux->data.n2;
        al->n3 = aux->data.n3;
        return SUCCESS;
    }
}

/*  Descripition: Find and returns the student's content that has in last position in the list;
 *  Input: (The List's pointer to search, a pointer to struct to access student's data);
 *  Output: Returns the student position's value, or a error code;  
 */ 
int list_back(TLinkedList *list, aluno *al){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        list_node *aux = list->head;
        while(aux->next != NULL){
            aux = aux->next;
        }
        al->matricula = aux->data.matricula;
        strcpy(al->nome, aux->data.nome);
        al->n1 = aux->data.n1;
        al->n2 = aux->data.n2;
        al->n3 = aux->data.n3;
        return SUCCESS;
    }
}

/*  Descripition: Find and returns a student position by your registry;
 *  Input: (The List's pointer to search, a pointer to struct to access student's data);
 *  Output: Returns the student position's value, or a error code; 
 */ 
int list_get_pos(TLinkedList *list, aluno *al){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        list_node *aux = list->head;
        aux->data = *al;
        int count = 1;                  // a auxiliary counter to find the wanted position (position starts in 1);
        while(aux->data.matricula != al->matricula){
            if(aux->next == NULL){
                return OUT_OF_RANGE;
            }
            aux = aux->next;
            count++;                           //tenho que usar passagem por referencia; por isso ele passou um ponteiro como argumento, 
        }
    return count;
    }
}  

/*  Descripition: Print all the list on console;
 *  Input: (The List's pointer to print);
 *  Output: The data of all position in the list; 
 */ 
int list_print(TLinkedList *list){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        list_node *aux = list->head;
        int count = 1;
        printf("Seeing now the printing list, wait until the end.\n");
        Sleep(3000);
        while(aux->next != NULL){ 
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

/*  Descripition: This function destroy/deallocate a memory allocation by your pointer;
 *  Input: (The List's pointer to deallocate);
 *  Output: A code that can means success or error (0 in success cases, any other code in fail cases); 
 */
int list_free(TLinkedList *list){
    if (list == NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        list_node *aux = list->head;
        list_node *aux1 = aux->next;
        while(aux->next != NULL){
            aux = aux1;
            aux1 = aux1->next;
            free(aux);
        }
        free(list);
        return SUCCESS;
    }
}
