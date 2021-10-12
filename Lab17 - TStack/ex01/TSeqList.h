#ifndef _tseqlisth_
#define _tseqlisth_

#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4
#define EMPTY_LIST -5

#include "aluno.h"

typedef struct lista TSeqList;

TSeqList* create_list();
void free_list(TSeqList* li);
void realloc_list(TSeqList *li);
int compact_list(TSeqList *li);
int find_list_pos(TSeqList* li, int pos, struct aluno *al);
int find_list_mat(TSeqList* li, int mat, struct aluno *al);
int list_back(TSeqList *li, struct aluno *al);
int insert_list_back(TSeqList* li, struct aluno al);
int insert_list_front(TSeqList* li, struct aluno al);
int insert_list_sorted(TSeqList* li, struct aluno al);
int erase_list(TSeqList* li, int mat);
int erase_list_front(TSeqList* li);
int erase_list_back(TSeqList* li);
int size_list(TSeqList* li);
int list_full(TSeqList* li);
int list_empty(TSeqList* li);
int print_list(TSeqList* li);
int erase_list_optimized(TSeqList* li, int mat);

#endif
