#include <stdio.h>

int main(){
    int num, vet[6], maior = 0, menor, pos_maior, pos_menor;
    double media = 0;

    printf("<< 5 valores >>\n");
    for(int i = 0; i< 5; i++){
        printf("Entre com o numero %d: ", i+1);
        scanf("%d", &vet[i]);
        if(vet[i] > maior){
            maior = vet[i];
            pos_maior = i;
        }
        if(vet[i] < menor){
            menor = vet[i];
            pos_menor = i;
        }
        media += vet[i];
    }
    printf("Os números digitados são: ");
    for(int i=0; i < 5; i++){
        printf("%d ", vet[i]);
    }
    printf("\nO maior valor é: %d, localizado na posição %d do vetor\n", maior, pos_maior);
    printf("O menor valor é: %d, localizado na posição %d do vetor\n", menor, pos_menor);
    printf("A média é: %.1lf\n", media/5);
}

/*
Fazer um programa para ler 5 valores, e, em seguida, mostrar todos os valores
lidos juntamente com o maior (Max), o menor (Min) e a média (Mean) dos valores
Mostrar o índice (index) do vetor associado ao maior número e ao menor número 

Exemplo de saída:
<< Five Values with index >>
Input #1: 5
Input #2: 6
Input #3: 4
Input #4: 0
Input #5: 3

The numbers entered are: 5 6 4 0 3
Max. Value: 6, index 1 of the array
Min. Value: 0, index 3 of the array
Mean: 3.6
*/