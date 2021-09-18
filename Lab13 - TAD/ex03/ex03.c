#include <stdio.h>
#include <stdlib.h>
#include "TMat2D.h"

int main(){
    TMat2D *mat, *mat1, *mat2;
    int line, column, aux;
    double value;

    mat = mat2D_create(2,3);
    if(mat != NULL)
        printf("Everything went well with the first matrix :D Yaay!\n\n");
    else
        printf("Something went wrong with the first matrix :(\n\n");
    mat1 = mat2D_create(3,2);
    if(mat1 != NULL)
        printf("Everything went well with the second matrix :D Yaay!\n\n");
    else
        printf("Something went wrong with the second matrix :(\n\n");
    mat2 = mat2D_create(1,5);
        if(mat2 != NULL)
        printf("Everything went well with the third matrix :D Yaay!\n\n");
    else
        printf("Something went wrong with the third matrix :(\n\n");


    aux = mat2d_set_random(mat);
    if(aux == 0)
        printf("The first matrix's random fill was a success :) Yaay!\n\n");
    else
        printf("Something went wrong with first matrix's random fill :(\n\n");
    aux = mat2d_set_random(mat1);
    if(aux == 0)
        printf("The first matrix's random fill was a success :) Yaay!\n\n");
    else
        printf("Something went wrong with second matrix's random fill :(\n\n");
    aux = mat2d_set_random(mat2);
    if(aux == 0)
        printf("The third matrix's random fill was a success :) Yaay!\n\n");
    else
        printf("Something went wrong with third matrix's random fill :(\n\n");
    printf("\n\nMatrix number 1:\n");
    mat2d_print_matrix(mat);
    printf("\n\nMatrix number 2:\n");
    mat2d_print_matrix(mat1);
    printf("\n\nMatrix number 3:\n");
    mat2d_print_matrix(mat2);
    printf("\n\n");
    printf("let's do now some few changes\n\n");
    printf("Choose some position in matrix 1 to change: (choose a line and next a column): ");
    scanf("%d%d", &line, &column);
    printf("Now choose some value to overwrite: ");
    scanf("%lf", &value);
    aux = mat2D_set_value(mat,line,column, value);
    printf("Let's see now if it got right: \n\n");
    if(aux == 0){
        printf("Did work! Let's see the change: \n\n");
        mat2d_print_matrix(mat);
    }
    else
        printf("Ops... You don't code so well as you think :(\n\n");
    return 0;
}