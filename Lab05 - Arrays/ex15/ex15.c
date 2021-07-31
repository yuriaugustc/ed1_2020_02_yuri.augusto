#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, j, num[8], rep[8] = {0,0,0,0,0,0,0,0}, cont = 0;

    printf("<< Valores iguais >>\n");
    for(i = 0; i < 8; i++){
        printf("Entre com o numero %d: ", i+1);
        scanf("%d", &num[i]);
    }
    for(i = 0; i < 8; i++){
        for(j = i+1; j <= 8; j++){
            if(num[j] == num[i]){
                rep[i] = num[j];
                cont++;
            }
        }
    }

    printf("Valores repetidos: ");
    for(i = 0; i < cont; i++){
        if(rep[i] != 0){
        printf("%d ", rep[i]);
        }
    }

    return 0;
}

/*
Faça um programa que leia um vetor de 8 posições e verifique se existem 
valores iguais e os escreva (cada número repetido deve aparecer somente 
uma vez na resposta)

Exemplo de saída:
<< Valores iguais >>
Entre com o numero 1: 5
Entre com o numero 2: 6
Entre com o numero 3: 4
Entre com o numero 4: 5
Entre com o numero 5: -3 
Entre com o numero 6: -3
Entre com o numero 7: -3
Entre com o numero 8: 6


Valores repetidos: 5, 6, -3
*/