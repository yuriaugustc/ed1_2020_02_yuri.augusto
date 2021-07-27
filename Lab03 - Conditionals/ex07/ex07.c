#include <stdio.h>
#include <windows.h>

int main(){
    float A,B,C;    

    printf("<<Soma de Triângulos>>\n");
    printf("Digite o valor de A: ");
    scanf("%f", &A);
    if(A<0){
        printf("Valores negativos não sao permitidos!\n"); 
        Sleep(1500);
        main();
        return 0;
        }
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    if(B<0){
        printf("Valores negativos não sao permitidos!\n"); 
        Sleep(1500);
        main();
        return 0;
        }
    printf("Digite o valor de C: ");
    scanf("%f", &C);
    if(C<0){
        printf("Valores negativos não sao permitidos!\n"); 
        Sleep(1500);
        main();
        return 0;
        }
    else if(((A+B)<C)||((A+C)<B)){printf("Nenhum Triângulo é formado\n");}
    else if((A*A)==((B*B)+(C*C))){printf("Triângulo Retângulo\n");}
    else if((A*A)>((B*B)+(C*C))){printf("Triângulo Obtusângulo\n");}
    else if((A*A)<((B*B)+(C*C))){printf("Triângulo Acutângulo\n");}
}