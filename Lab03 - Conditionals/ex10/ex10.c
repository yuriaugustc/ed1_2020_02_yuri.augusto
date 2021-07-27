#include <stdio.h>
#include <windows.h>

int main(){
    int a, b;

    printf("== Operadores Booleanos ==\n");
    printf("Digite 0 para falso e 1 para verdadeiro");
    printf("Entre com o primeiro valor (A):");
    scanf("%d", &a);
    printf("Entre com o primeiro valor (B):");
    scanf("%d", &b);
    if((a != 0 && a != 1) || (b != 0 && b != 1)){ 
        printf("é permitido apenas o uso de 0 para falso e 1 para verdadeiro\n");
        Sleep(1500);
        printf("\n");
        main();
        return 0;
        }
    if(a == b){
        printf("A and B: VERDADEIRO\n");
        }
    else{
        printf("A and B: FALSO\n");
        }
    if(a == 1 || b == 1){ 
        printf("A or B: VERDADEIRO\n");
        }
    else{
        printf("A or B: FALSO\n");
        }
    if((a || b) && !(a == b)){ 
        printf("A xor B: VERDADEIRO\n");
        }
    else{
        printf("A xor B: FALSO\n");
        }
    if(a == 0){
        printf("not A: VERDADEIRO\n");
        }
    else{
        printf("not A: FALSO\n");
        }
}