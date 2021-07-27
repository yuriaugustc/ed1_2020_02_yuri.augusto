#include <stdio.h>

int main(){
    float peso, altura, imc;

    printf("<< IMC >>\n");
    printf("Digite seu peso(kg): ");
    scanf("%f", &peso);
    printf("Digite sua altura(m): ");
    scanf("%f", &altura);
    imc = peso/(altura * altura);
    if(imc < 18.5){printf("\nMagreza\n");}
    if(imc > 18.5 && imc < 24.9){printf("\nSaudável\n");}
    if(imc > 25.0 && imc < 29.9){printf("\nSobrepeso\n");}
    if(imc > 30.0 && imc < 34.9){printf("\nObesidade Grau I\n");}
    if(imc > 35.0 && imc < 39.9){printf("\nObesidade Grau II\n");}
    if(imc >= 40.0){printf("\nObesidade Grau III\n");}
}