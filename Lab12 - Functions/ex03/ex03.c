#include <stdio.h>

void DesenhaLinha(int num){
    for(int i = 0; i < num; i++){
        printf("=");
    }
    printf("\n");
}

int Fatorial(int fat){
    for(int i = fat-1; i > 0; i--){
        fat *= i;
    }
    return fat;
}

int main(){
    int aux, fat, num;
    printf("Digite o tamanho da linha: ");
    scanf("%d", &num);
    printf("Digite o numero que deseja calcular o fatorial: ");
    scanf("%d", &fat);
    aux = Fatorial(fat);
    printf("Fatorial(%d) tem como saída %d\n", fat, aux);
    printf("DesenhaLinha(%d) tem  como saída ", num);
    DesenhaLinha(num);
    return 0;
}

/*
=> Faça uma função para calcular o fatorial de um número. Use essa função
para calcular o fatorial de um número que o usuário digitar.
Colocar todas as funções E/S (entrada e saída) no programa principal.
(use também a função DesenhaLinha – esta pode conter comandos de saída fora do programa principal). 

Ex: Fatorial(5) tem como saída 120 
    DesenhaLinha(10) tem  como saída ==========

No programa principal, solicite ao usuário o tamanho da linha a ser desenhada e o número que se
deseja calcular o fatorial.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho da linha: 10
Digite o numero que deseja calcular o fatorial: 5
==========
O fatorial de 5 eh 120
==========
-------------------------------------------------------------------------------
*/