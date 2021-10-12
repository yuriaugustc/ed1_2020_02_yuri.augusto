#include <stdlib.h>
#include "TStack.h"
#include "TSeqList.h"



// é possível criar a lista
struct TStack{
    TSeqList *list;
};

TStack *stack_create(){
    TStack *st;
    st = malloc(sizeof(TStack));
    if (st != NULL){
        st->list = list_create();
        if (st->list == NULL){
            free(st);
            return NULL;
        }
    }
    return st;
}

int stack_free(TStack *st){
    if(st == NULL){
        return INVALID_NULL_POINTER;
    }else{
        free_list(st);
        return SUCCESS;
    }
}

int stack_push(TStack *st, struct aluno al)
{
    if (st == NULL)
        return INVALID_NULL_POINTER;
    
    return list_push_back(st->list, al);

}

int stack_pop(TStack *st){
    if(st == NULL){
        return INVALID_NULL_POINTER;
    }else{
        return erase_list_back(st);
    }
}

int stack_top(TStack *st, struct aluno *al)
{
    if(st == NULL){
        return INVALID_NULL_POINTER;
    }else{
        return list_back(st->list, al);
    }
}

int stack_empty(TStack *st){
    if(st == NULL){
        return INVALID_NULL_POINTER;
    }else{
       return list_empty(st->list);
    }
}

int stack_full(TStack *st){
    if(st == NULL){
        return INVALID_NULL_POINTER;
    }else{
        return list_full(st->list);
    }
}

int stack_print(TStack *st){
    if(st == NULL){
        return INVALID_NULL_POINTER;
    }else{
        print_list(st->list);
    }
}