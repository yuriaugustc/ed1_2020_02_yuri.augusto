#include <stdio.h>

int main(){
    int num, vet[6];

    printf("<< Listando um vetor em ordem inversa >>\n");
    for(int i = 0; i< 6; i++){
        printf("Entre com o numero %d: ", i+1);
        scanf("%d", &vet[i]);
    }
    printf("A ordem inversa dos números é: ");
    for(int i = 5; i >= 0; i--){
        printf("%d ", vet[i]);
    }
}
/*
Faça um programa em que o usuário digita 6 números inteiros e o programa mostra
na tela os 6 números digitados na ordem inversa (obrigatório o uso de loops)

Exemplo de saída:
<< Listando um vetor em ordem inversa >>
Entre com o numero 1: 5
Entre com o numero 2: 6
Entre com o numero 3: 4
Entre com o numero 4: 0
Entre com o numero 5: 3
Entre com o numero 6: 6

Ordem inversa dos numeros: 6 3 0 4 6 5
*/
