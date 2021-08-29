
typedef struct aluno Aluno;

Aluno* setAluno(char *nome, char *matr, double cra);
void altera_cra(Aluno *p, double *cra);
void getAluno(Aluno *p);
int killAluno(Aluno *p);
int search(Aluno aluno[]);