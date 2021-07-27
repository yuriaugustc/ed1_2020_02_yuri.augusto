#include<stdio.h>
#include<math.h>

int main(){
    double bit = 2;
    //double end;

    printf("<< Exemplos de Memoria >> \n");
    for(int i = 0; i < 7; i++){
        printf("com %.0lf bits é possível endereçar %.0lf posições na memória.\n", bit, pow(2, bit));
        bit = bit*2;
    }
}