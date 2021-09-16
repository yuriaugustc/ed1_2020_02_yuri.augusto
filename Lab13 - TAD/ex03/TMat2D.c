#include <stdlib.h>
#include "TMat2D.h"

struct TMat2D
{
  int nrows; // number of lines
  int ncolumns; // number of columns
  double *data; // ponteir to matrix's data;
};

// mat = mat2D_create(4,3);

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

int mat2D_set_value(TMat2D *mat, int i, int j, double val){
    if(mat[i*j].data != NULL){
        *(mat[i*j].data) = val;
        return 0;
    }
    else
        return -1;
}

double mat2D_get_value(TMat2D *mat, int i, int j, double *val){
    if(mat[i*j].data != NULL){
        return *(mat[i*j].data);
    }
    else 
        return -1;
}

int set_random(TMat2D *mat, int lin, int col){

    srand(time(NULL));
    for(int i = 0; i < (lin*col); i++){
        *(mat[i].data) = (rand()/(double) RAND_MAX) * 100;
    }
    return 0;
}



int mat2D_free(TMat2D *mat){
    if(mat == NULL){
        return -1;
    }
    else{
        free(mat);
        return 0;
    }
}