#include <stdio.h>

int main(){
    double jose = 50000, carlos = 25000;
    int contador = 0;
    printf("Estimativa de tempo para Carlos ultrapassar Jose:\n");
    do{
        printf("%d ano(s): \n", contador);
        printf("Jose possui: R$%.2lf\n", jose);
        printf("Carlos possui: R$%.2lf\n",carlos);
        jose = jose + 800;
        carlos = carlos + 3000;
        contador++;
    }while(carlos<jose);
    printf("\nLevou %d ano(s) para Carlos ultrapassar Jose.\n", contador);
}