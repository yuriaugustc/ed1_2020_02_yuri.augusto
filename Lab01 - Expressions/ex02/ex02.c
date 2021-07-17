#include <stdio.h>

int main() {
    float cel;
    int far;

    printf("<< Conversor Temperatura >>\n");
    printf("Digite a temperatura (em Celsius): ");
    scanf("%f", &cel);
    far = (cel * 9/5) + 32;
    printf("%.2f graus Celsius correspondem a %d Fahrenheit", cel, far);
}

/*
=> Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de 
conversão é : F = C ∗ (9.0/5.0)+ 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Conversor Temperatura >>
Digite a temperatura (em Celsius): 2.5O 
30 graus Celsius correspondem a 86 Fahrenheit
-------------------------------------------------------------------------------
*/