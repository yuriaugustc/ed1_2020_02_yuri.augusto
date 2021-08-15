#include <stdio.h>

void Troque(double *a, double *b){
    a = &b;
    b = &a;
    return a, b;
}

int main(){
    double *p_a, *p_b;
    double a, b;
    printf("Digite o número A: ");
    scanf("%lf", &a);
    printf("Digite o número B: ");
    scanf("lf", &b);
    //p_a = Troque(&a,&b);
    //p_b = Troque(&a,&b);
    return 0;
}

/*
=> Faça um procedimento “Troque”, que recebe duas variáveis reais A e B
e troca o valor delas (i.e., A recebe o valor de B e B recebe o valor de A).
Mostre no programa principal o resultado da troca. 


No programa principal, solicite ao usuário o número A e o número B.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o número A: 2
Digite o número B: 5
O número A eh: 5
O número B eh: 2
-------------------------------------------------------------------------------
*/