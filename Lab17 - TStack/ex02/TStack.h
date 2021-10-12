#ifndef _tstackh_
#define _tstackh_

#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4

#include "aluno.h"

typedef struct TStack TStack;

TStack *stack_create();
int stack_free(TStack *st);

int stack_push(TStack *st, struct aluno al);
int stack_pop(TStack *st);
int stack_top(TStack *st, struct aluno *al);

int stack_empty(TStack *st, int aux);
int stack_full(TStack *st, int aux);
int stack_print(TStack *st);

#endif