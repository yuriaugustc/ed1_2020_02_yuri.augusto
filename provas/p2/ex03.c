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
    TMat2D *aux;
    int y = 0;
    int f = mat->nrows*mat->ncolumns;
    aux = mat2D_create(i, j);
    for(int y = 0; y < f; y++){
        aux->data[y] = mat->data[i];
    }
    mat = aux;
    free(aux);
    return mat;
}

*/