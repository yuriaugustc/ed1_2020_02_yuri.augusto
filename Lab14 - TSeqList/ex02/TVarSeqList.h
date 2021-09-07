//Arquivo ListaSequencial.h
//#define MAX 100
int max = 100;
struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
};

typedef struct lista Lista;

Lista *cria_lista();
void realoca_lista(Lista *li);
void libera_lista(Lista *li);
int compactar_lista(Lista *li);
int tam_lista(Lista *li);
int consulta_lista_pos(Lista *li, int pos, struct aluno *al);
int consulta_lista_mat(Lista *li, int mat, struct aluno *al);
int insere_lista_final(Lista *li, struct aluno al);
int insere_lista_inicio(Lista *li, struct aluno al);
int insere_lista_ordenada(Lista *li, struct aluno al);
int remove_lista(Lista *li, int mat);
int remove_lista_inicio(Lista *li);
int remove_lista_final(Lista *li);
int tamanho_lista(Lista *li);
int lista_cheia(Lista *li);
int lista_vazia(Lista *li);
int imprime_lista(Lista *li);
int remove_lista_otimizado(Lista *li, int mat);
