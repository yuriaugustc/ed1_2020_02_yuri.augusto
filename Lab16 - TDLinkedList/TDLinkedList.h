#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4

struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
};

typedef struct aluno aluno;
typedef struct TDLinkedList TDLinkedList;

TDLinkedList *list_create();
int list_free(TDLinkedList *list);
int list_push_front(TDLinkedList *list, aluno al);
int list_push_back(TDLinkedList *list, aluno al);
int list_insert(TDLinkedList *list, int pos, aluno al);
int list_size(TDLinkedList *list, int *pos);
int list_pop_front(TDLinkedList *list);
int list_pop_back(TDLinkedList *list);
int list_erase(TDLinkedList *list, int pos);
int list_find_pos(TDLinkedList *list, int pos, aluno *al);
int list_find_mat(TDLinkedList *list, int nmat, aluno *al);
int list_front(TDLinkedList *list, aluno *al);
int list_back(TDLinkedList *list, aluno *al);
int list_get_pos(TDLinkedList *list, int nmat, int *pos);
int list_print_forward(TDLinkedList *list);
int list_print_reverse(TDLinkedList *list);