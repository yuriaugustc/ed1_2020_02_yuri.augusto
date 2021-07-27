#include <stdio.h>

int main(){
    float valor, vfinal, imp;
    int unid;
    printf("<< Valor do Porduto com Imposto >>\n");
    printf("Digite o valor do produto R$: ");
    scanf("%f", &valor);
    printf("Digite a unidade da federação: ");
    scanf(" %d", &unid);
    if(unid == 1){
        vfinal = valor + (valor * 0.07);
        printf("Valor final com impostos R$: %.2f", vfinal);
    }
    else if(unid == 2){
        vfinal = valor + (valor * 0.12);
        printf("Valor final com impostos R$: %.2f", vfinal);
    }
    else if(unid == 3){
        vfinal = valor + (valor * 0.15);
        printf("Valor final com impostos R$: %.2f", vfinal); 
    }
    else
        printf("Unidade da federação não identificada. Tente Novamente.\n");

    //vfinal = valor + (valor * imp);
    //printf("Valor final com impostos R$: %.2f", vfinal);
}