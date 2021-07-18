#include <stdio.h>

int main() {
    int valor, valorb; 
    float valorl, iss, ir, aux;

    printf("<< Pagamento encanador >>\n");
    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &valor);
    valorb = valor * 30;
    iss = valorb * 0.04;
    aux = valorb - iss;
    ir = aux * 0.08;
    valorl = aux - ir;

    printf("Valor bruto R$: %d\n", valorb);
    printf("Valor líquido R$: %.2f\n", valorl);
    printf("ISS R$: %.2f\n", iss);
    printf("IR R$: %.2f\n", ir);
}

/*
=> Um contador percebeu que o cálculo de IR do encanador estava errado, pois estava sendo calculado sobre o valor bruto que ele recebeu. 
Refaça o programa anterior, considerando que o IR é sobre o valor bruto após o desconto do ISS.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Pagamento encanador >>
Digite o numero de dias trabalhados: 30
Valor bruto R$: 900
Valor liquido R$: 794.88
ISS R$: 36
IR R$: 68.12
-------------------------------------------------------------------------------
*/