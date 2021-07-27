#include <stdio.h>

int main(){
    float venda, comissao;

    printf("<< Comissão >>\n");
    printf("Digite o valor da venda: ");
    scanf("%f", &venda);
    if(venda >= 100000){
        comissao = 700 + (venda * 0.16);
    }
    if(venda > 80000 && venda < 100000){
        comissao = 650 + (venda * 0.14);
    }
    if(venda > 60000 && venda < 80000){
        comissao = 600 + (venda * 0.14);
    }
    if(venda > 40000 && venda < 60000){
        comissao = 550 + (venda * 0.14);
    }
    if(venda > 20000 && venda < 40000){
        comissao = 500 + (venda * 0.14);
    }
    if(venda < 20000){  
        comissao = 400 + (venda * 0.14);
    }
    printf("Sua comissão é de %.2f.\n", comissao);
}