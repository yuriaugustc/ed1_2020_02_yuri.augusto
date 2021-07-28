#include <stdio.h>

int main(){
    int i, j, n, num[8], rep[8], cont = 0, aux[8] = {0,0,0,0,0,0,0,0};

    printf("<< Valores iguais >>\n");
    for(i = 0; i < 8; i++){
        printf("Entre com o numero %d: ", i+1);
        scanf("%d", &num[i]);
        //for(j = 0; j<=8; j++){
        //    if(num[i] ==){
        //        aux[i] = num[i];
        //    }
        //}
    }
    for(i = 0; i < 8; i++){
        for(j = 1; j<=8; j++){
            if(num[i]==num[j]){
                rep[i] = num[i];
            }
        }
    }
    for(i = 0; i < 8; i++){
        for(j = 1; j<=8; j++){
            if(rep[i]==rep[j]){
                rep[j] = 0;
            }
        }
    }
    printf("Valores repetidos: ");
    for(i = 0; i < cont; i++){
        if(rep[i]>0){
        printf("%d, ", rep[i]);
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