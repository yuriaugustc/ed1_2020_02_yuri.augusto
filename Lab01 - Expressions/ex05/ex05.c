#include <stdio.h>

int main() {
    float valor, resultado;
    printf("<< Aumento Salarial >>\n");
    printf("Digite o valor do salario R$: ");
    scanf("%f", &valor);
    resultado = valor + (valor * 0.25);
    printf("Apos 25%% de aumento o salario fica em R$ %.2f", resultado);
}

/*
=> Ler quatro notas e mostrar as notas e a média aritmética obtida.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Aumento Salarial >>
Digite o valor do salario R$: 4000
Apos 25% de aumento o salario fica em R$ 5000.00
-------------------------------------------------------------------------------
*/