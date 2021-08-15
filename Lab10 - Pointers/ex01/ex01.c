#include <stdio.h>

int main(){
    int val[5] = {2,4,5,8,10};
    unsigned int *p;
    p = &val[2];
    
    printf("<< Pointers >>\n");
    
    printf("val[5] = {");
    for(int i = 0; i < 5; i++){
        printf("%d,", val[i]);
    }
    printf("\b}\n");
    printf("Troque de 5 para 6: ");
    scanf("%d", p);
    printf("val[5] = {");
    for(int i = 0; i < 5; i++){
        printf("%d,", val[i]);
    }
    printf("\b}\n");
    return 0;
}

/*
Crie um programa que contenha a seguinte variável
int val[5] = {2,4,5,8,10};
                  ^
Utilizando a função scanf, altere o valor de 5 para 6. 
Não use o operador & no scanf. Utilize uma variável do tipo inteira*
para guardar o endereço da posição do vetor.

*obs:
unsigned int (para programas em 32bit)
unsigned long int (para programas em 64)

*/