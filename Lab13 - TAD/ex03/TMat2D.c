#include <stdlib.h>
#include "TMat2D.h"

struct TMat2D
{
  int nrows; // number of lines
  int ncolumns; // number of columns
  double *data; // ponteir to matrices's data;
};

/*  Descripition: This function initializes and allocates memory space foo the matrix whose line and column were passed to the criation;
 *  Input: ((int)Number of lines, (int)number of columns)
 *  Output: A pointer to the first element of matrix created;
 */
TMat2D *mat2D_create(int nrows, int ncolumns){
    TMat2D *mat;
    mat = malloc(sizeof(TMat2D));
    if (mat != NULL){
        mat->data = malloc(nrows*ncolumns*sizeof(double));
        if (mat->data != NULL){
            mat->ncolumns = ncolumns;
            mat->nrows = nrows;
        } else {
            free(mat);
            return NULL;
        }
    }
    return mat;
}

/*  Descripition: This function overwrite the content of position passed;
 *  Input: (Matrix's pointer selected to inserction, line, column, (double) the value to overwrite);
 *  Output: A int that confirm or not if the command was a success;
 *          (0 = success; -1 = fail);
 */
int mat2D_set_value(TMat2D *mat, int i, int j, double val){
    if(mat[i*j].data != NULL){
        mat->data[i*j] = val;
        return 0;
    }
    else
        return -1;
}

/*  Descripition: This function return the value of requisited position;
 *  Input: (Matrix's pointer selected to inserction, line, column, (double) the value to overwrite);
 *  Output: the value of requisited position;
 */
double mat2D_get_value(TMat2D *mat, int i, int j, double *val){
    if(mat[i*j].data != NULL){
        return mat->data[i*j];
    }
    else 
        return -1;
}

/*  Descripition: This function sets random's content in matrix's positions;
 *  Input: (Matrix's pointer)
 *  Output: A int that confirm or not if the command was a success;
 *          (0 = success; -1 = fail);
 */
int mat2d_set_random(TMat2D *mat){

    srand(time(NULL));
    for(int i = 0; i < (mat->nrows*mat->ncolumns); i++){
        mat->data[i] = (rand()/(double) RAND_MAX) * 100;
    }
    return 0;
}

/*  Descripition: This function sum two matrices each other;
 *  Input: (Matrix'Pointer1 to sum, Matrix'Pointer2 to sum);
 *  Output: A Pointer to a new memory allocation with the sum's results;
 */
TMat2D *mat2d_sum_2_mat(TMat2D *mat1, TMat2D *mat2){
    TMat2D *sum;
    sum = mat2D_create(mat1->nrows, mat1->ncolumns);
    if(sizeof(mat1) == sizeof(mat2)){
        for(int i = 0; i < (mat1->nrows*mat1->ncolumns); i++){
            sum->data[i] = mat1->data[i] + mat2->data[i];
        }
        return sum;
    }
    else
        return NULL;
}

/*  Descripition: This function multiplies two matrices each other, validating if that is possible;
 *  Input:(Matrix'Pointer1 to multiplie, Matrix'Pointer2 to multiplie);
 *  Output: A Pointer to a new memory allocation with the multiplie's results;
 */
TMat2D *mat2d_mult_2_mat(TMat2D *mat1, TMat2D *mat2){
    TMat2D *mult;
    if(mat1->ncolumns == mat2->nrows){
        mult = mat2D_create(mat1->nrows, mat2->ncolumns);
        for(int i = 0; i < mat1->ncolumns; i++)
            for(int j = 0; j < mat2->nrows; j++){
                mult->data[i*j] = mat1->data[] * mat2->data[];
            }
            
    }
    return mult;
}

/*  Descripition: This function deallocate the matrix's memory; 
 *  Input: The matrix's pointer;
 *  Output: A int that confirm or not if the command was a success;
 *          (0 = success; -1 = fail)
 */
int mat2D_free(TMat2D *mat){
    if(mat == NULL){
        return -1;
    }
    else{
        free(mat);
        return 0;
    }
}