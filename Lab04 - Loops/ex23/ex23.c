#include <stdio.h>

int main(){
    int num;
    double fat = 1, nep = 1;

    printf("<< Número Neperiano >>\n");
    printf("Entre com o número de termos: ");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++){
        fat = fat * i;
        nep = nep + (1/fat);
    }
    printf("e ~ %lf\n", nep);
}