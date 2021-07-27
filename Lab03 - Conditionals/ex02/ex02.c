#include <stdio.h>

int main() {
    float cel, var;
    int far;
    char temp;

    printf("<< Conversor Temperatura >>\n");
    printf("Digite a temperatura: ");
    scanf("%f", &var);
    printf("Digite a unidade: ");
    scanf(" %c", &temp);
    if(temp == 'c'){
    far = (var * 9/5) + 32;
    printf("%.1f graus Celsius correspondem a %d Fahrenheit\n", var, far);
    }
    else{
        cel = ((var - 32) * 5)/9;
        printf("%.1f graus Fahrenheit correspondem a %.1f Celsius\n", var, cel);
    }
}