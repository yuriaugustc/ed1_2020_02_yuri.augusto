#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4
#include "aluno.h"

typedef struct TLinkedList TLinkedList;

TLinkedList *list_create(); //creates the list;
int list_free(TLinkedList *list); //destroy/deallocate the list;
int list_push_front(TLinkedList *list, aluno al); //insert on the first position
int list_push_back(TLinkedList *list, aluno al); //insert on the last position;
int list_insert(TLinkedList *list, int pos, aluno al); //insert on indicated position;
int list_insert_sorted(TLinkedList *list, aluno al); //insert neatly on the list;
int list_size(TLinkedList *list); //return list size (negative values if error cases);
int list_pop_front(TLinkedList *list); //remove the first student;
int list_pop_back(TLinkedList *list); //remove the last student;
int list_erase_data(TLinkedList *list, int matr); //remove a student by your registry;
int list_erase_pos(TLinkedList *list, int pos); //remove a student by your position (position starts in 1);
int list_find_pos(TLinkedList *list, int pos, aluno *al); //find a student by your position (position starts in 1);
int list_find_mat(TLinkedList *list, int matr, aluno *al); //find a student by your registry;
int list_front(TLinkedList *list, aluno *al); //return the student in the list's first place;
int list_back(TLinkedList *list, aluno *al); //return the student in the list's last place;
int list_get_pos(TLinkedList *list, aluno *al); //given your registry, finds and returns the student's position;
int list_print(TLinkedList *list); //print the list (unic function that allows printf);
