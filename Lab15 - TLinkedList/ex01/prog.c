#include <stdlib.h>
#include <stdio.h>
#include<string.h>
#include "TLinkedList.h"

int main(){
    TLinkedList *alunos_pet;
    alunos_pet = list_create();
    aluno *aluno1 = malloc(sizeof(aluno));
    char nome[30];
    int matricula;
    float n1, n2, n3;

    aluno1->matricula = 1;
    strcpy(aluno1->nome, "Joaozinho");
    aluno1->n1 = 3.4;
    aluno1->n2 = 6.9;
    aluno1->n3 = 9.9;

    list_push_front(alunos_pet, *aluno1);
    list_push_back(alunos_pet, *aluno2);
    list_insert(alunos_pet, );
    list_insert_sorted(alunos_pet, );
    list_size(alunos_pet);
    list_pop_front(alunos_pet, );
    list_pop_back(alunos_pet, );
    list_erase_data(alunos_pet, );
    list_erase_pos(alunos_pet, );
    list_find_pos(alunos_pet, );
    list_find_mat(alunos_pet, );
    list_front(alunos_pet, );
    list_back(alunos_pet, );
    list_get_pos(alunos_pet, );
    list_print(alunos_pet);

    return 0;
}