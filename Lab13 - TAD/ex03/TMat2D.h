
typedef struct TMat2D TMat2D; 

TMat2D *mat2D_create(int nrows, int ncolumns);
int mat2D_free(TMat2D *mat);

int mat2D_set_value(TMat2D *mat, int i, int j, double val);
double mat2D_get_value(TMat2D *mat, int i, int j, double *val);
int mat2d_set_random(TMat2D *mat);
TMat2D *mat2d_sum_2_mat(TMat2D *mat1, TMat2D *mat2);
TMat2D *mat2d_mult_2_mat(TMat2D *mat1, TMat2D *mat2);