#include <stdio.h>

int main() {
    float valor, prim, seg, terc;
    printf("<< Loteria >>\n");
    printf("Valor total do premio: ");
    scanf("%f", &valor);
    prim = valor * 0.46;
    seg = valor * 0.32;
    terc = valor * 0.22;

    printf("Primeiro vencedor: %.0f\n", prim);
    printf("Segundo vencedor: %.0f\n", seg);
    printf("Terceiro vencedor: %.0f\n", terc);
}

/*
=> A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso, sendo que da quantia total: 
    O primeiro ganhador receberá 46%;
    O segundo receberá 32%;
    O terceiro receberá o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Loteria >>
Valor total do premio: 780000
Primeiro vencedor: 358800
Segundo vencedor: 249600
Terceiro vencedor: 171600
-------------------------------------------------------------------------------
*/