#include <stdio.h>

int main(){
    int fat = 3628800;
    printf("<< Fatorial >>\n");
    for(int i = 11; i <= 15; i++){
        fat = fat * i;
        printf("%d! = %d\n", i, fat);
    }
/*
    O problema se deve ao espaço máximo de alocação 
    de bits para o tipo int;
*/
}