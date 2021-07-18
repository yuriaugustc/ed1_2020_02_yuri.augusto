#include <stdio.h>

int main() {
    int num1, num2, result1, result2, result3, result4;
    printf("== Operadores Booleanos ==\n");
    printf("Digite 0 para falso e nao 0 para verdadeiro\n");
    printf("Entre com o primeiro valor (A): ");
    scanf("%d", &num1);
    printf("Entre com o primeiro valor (B): ");
    scanf("%d", &num2);
    if((num1 != 0)&&(num2 != 0)){result1 = 1;}else{result1 = 0;}
    if((num1 == 0)&&(num2 == 0)){result2 = 0;}else{result2 = 1;}
    if((num1 || num2) && !(num1 && num2)){result3 = 1;}else{result3 = 0;}
    if(num1 == 0){result4 = 1;}else{result4 = 0;}
    printf("A and B: %d\n", result1);
    printf("A or B: %d\n", result2);
    printf("A xor B: %d\n", result3);
    printf("not A: %d\n", result4);

}

/*
=> Faça um algoritmo que mostre o funcionamento dos operadores lógicos. Peça para o usuário entrar com dois valores inteiros,, 
onde 0 implica em FALSO e qualquer outro número implica em VERDADEIRO.
Obs: XOR = (p || q) && !(p && q)

-------------------------------------------------------------------------------
Exemplo de saída:

== Operadores Booleanos ==
Digite 0 para falso e nao 0 para verdadeiro
Entre com o primeiro valor (A): -1
Entre com o segundo valor (B): 3
A and B: 1
A or B: 1
A xor B: 0
not A: 0
-------------------------------------------------------------------------------
*/