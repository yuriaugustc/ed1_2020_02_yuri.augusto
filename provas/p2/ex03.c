/*
 3) Considerando o TAD Matriz implementado em aula², crie uma nova 
função que permite aumentar o tamanho da matriz (mat2d_increase_size).
Os elementos da matriz original devem continuar na mesma posição que
estavam antes do aumento. Os novos elementos devem receber valor 0.
Por exemplo, caso o usuário tenha uma matriz 2x2 e queria que ela vire uma 
matriz 3x3, ele poderá usar a função de aumento de tamanho como
abaixo:

// criando matriz 2x2
mat = mat2D_create(2,2);

// Exemplo de preenchimento
// |2 7|
// |4 5|

// aumentando o tamanho da matriz para 3x3
mat2d_increase_size(mat,3,3)

// Exemplo após o aumento de tamanho
// |2 7 0|      2 4 0 7 5 0 0 0 0 
// |4 5 0|
// |0 0 0|

²struct TMat2D
 {
  int nrows; // número de linhas
  int ncolumns; // número de colunas
  double *data; // ponteiro para os dados da matriz
 };


    //entreguei por entregar, tenho quase ctz que não está funcionando como deveria.
    //me embananei para fazer o preenchimento das posições corretas;
 TMat2D *mat2d_increase_size(TMat2D *mat, int i, int j){
    if(mat == NULL)
        return -1;
    if (i<=0)
        return -1;
    if (j<=0)
        return -1;
 
 // check:<<<erro: e3.1: não fez os testes comparando o tamanho novo com o antiga para saber se o tamanho é maior OU fez o teste considerando somente o total de elementos  OU fez erros no teste>>>>
 // check:<<<erro: e3.3: deve-se lembrar da representação linear da matriz na memória. Isso implica em reposicionar alguns elementos no vetor linear que estavam na matriz original>>>>
 // check:<<<erro: e3.4: Faltou zerar os novos elementos>>>>
    TMat2D *aux;
    int y = 0;
    int f = mat->nrows*mat->ncolumns;
    aux = mat2D_create(i, j);
    for(int y = 0; y < f; y++){
        aux->data[y] = mat->data[i];
    }
    mat = aux;// check:<<<erro: cópia de duas variáveis locais>>>>
    free(aux);
    return mat;
}*/


// SUB - Refazendo o exercicio
#include <stdlib.h>

TMat2D *mat2d_increase_size(TMat2D *mat, int i, int j){
    if(mat == NULL){
        return NULL;
    }
    if (i <= 0){
        return NULL;
    }
    if (j <= 0){
        return NULL;
    }
    TMat2D *aux = mat2D_create(i, j);
    int k = 0, f = 0, value = 0;

    for(k = 0; i < mat->nrows; i++){ // controle de linhas
        for(f = 0; j < mat->ncolumns; j++){ // controle de colunas
            value = imm_get_value(mat, k, f); // recebe o valor da posicao (k,f) da antiga matriz
            imm_set_value(aux, k, f, value);  // insere novamente na mesma posicao de antes, mas na matriz com o novo tamanho;
        }
    }
    free(mat); // desaloca a matriz antiga
    return aux; // retornando a matriz com novo tamanho;
}