#include <stdlib.h>
#include <stdio.h>
#include<string.h>
#include "TLinkedList.h"

int main(){
    TLinkedList *alunos_pet;
    alunos_pet = list_create();
    aluno al, al1, al2, al3, al4;
    aluno aluno1, aluno2, aluno3, aluno4;

    al1.matricula = 1;
    strcpy(al1.nome, "Joaozinho");
    al1.n1 = 3.4;
    al1.n2 = 6.9;
    al1.n3 = 9.9;

    al2.matricula = 2;
    strcpy(al2.nome, "Josezinho");
    al2.n1 = 6.1;
    al2.n2 = 2.6;
    al2.n3 = 4.2;

    al3.matricula = 3;
    strcpy(al3.nome, "Juninho");
    al3.n1 = 8.9;
    al3.n2 = 7.9;
    al3.n3 = 9.9;

    al4.matricula = 4;
    strcpy(al4.nome, "Joaziania");
    al4.n1 = 8.9;
    al4.n2 = 7.9;
    al4.n3 = 9.9;

    list_push_front(alunos_pet, al1);
    list_push_back(alunos_pet, al2);
    list_insert(alunos_pet, 3, al3);
    list_insert_sorted(alunos_pet, al4);
    list_size(alunos_pet);
    list_find_pos(alunos_pet, 4, &aluno1);
    list_find_mat(alunos_pet, 4, &aluno2);
    list_front(alunos_pet, &aluno3);
    list_back(alunos_pet, &aluno4);
    list_get_pos(alunos_pet, 4);
    list_print(alunos_pet);
    list_pop_front(alunos_pet);
    list_pop_back(alunos_pet);
    list_erase_data(alunos_pet, 3);
    list_erase_pos(alunos_pet, 2);
    list_push_front(alunos_pet, al1);
    list_push_back(alunos_pet, al2);
    list_insert(alunos_pet, 3, al3);
    list_insert_sorted(alunos_pet, al4);
    list_free(alunos_pet);
    
    return 0;
}