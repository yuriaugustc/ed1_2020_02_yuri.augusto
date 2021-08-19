#include <stdio.h>
#include <stdlib.h>
//lembre-se de incluir as bibliotecas adequadas
struct ponto{
    int x,y;
};

int main(){
    int n, esq, dir, cim, baix, aux = 0,aux1 =0, aux2 = 0, aux3 = 0;
    struct ponto *pointer, *esquerda, *direita, *cima, *baixo;
    printf("Quantos pontos deseja digitar: ");
    scanf("%d", &n);
    pointer = (int *)malloc(n*sizeof(struct ponto));
    for(int i = 0; i < n; i++){
        printf("Entre com a coordenada x do ponto %d:", i+1);
        scanf("%d", &pointer[i].x);
        printf("Entre com a coordenada y do ponto %d:", i+1);
        scanf("%d", &pointer[i].y);
        printf("\n");
        if((pointer[i].x) < esq){
            esq = pointer[i].x;
            esquerda = &pointer[i];
        }
        else if((pointer[i].x) > dir){
            dir = pointer[i].x;
            direita = &pointer+i; 
        }
        else if((pointer[i].y) < baix){
            baix = pointer[i].y;
            baixo = &pointer+i; 
        }
        else if((pointer[i].y) > cim){
            cim = pointer[i].y;
            cima = &pointer+i;
        }
    }
    printf("Pontos digitados: ");
    for(int i = 0; i < n; i++){
        printf("(%d,%d); ", pointer[i].x, pointer[i].y);
    }
    printf("\nPonto mais a esquerda: (%d,%d);\n", esquerda[0].x,esquerda[0].y);
    printf("Ponto mais a direita: (%d,%d);\n", direita[0].x,direita[0].y);
    printf("Pronto mais acima: (%d,%d);\n"), cima[0].x,cima[0].y;
    printf("Pronto mais abaixo: (%d,%d);\n"), baixo[0].x,baixo[0].y;
    return 0;
}
/*
5) Modifique o programa anterior incluindo quatro ponteiros, que apontarão para
os seguintes pontos: mais a esquerda, mais a direita, mais acima, mais abaixo.
Mostre quem são esses pontos utilizando esses ponteiros.

Exemplo de saída:
<< Vetor de pontos alocados dinamicamente >>
Digite a quantidade de pontos a serem armazenados: 5

Digite o valor da coordenada x do ponto 1: 2
Digite o valor da coordenada y do ponto 1: 5

Digite o valor da coordenada x do ponto 2: 4
Digite o valor da coordenada y do ponto 2: 8

Digite o valor da coordenada x do ponto 3: 3
Digite o valor da coordenada y do ponto 3: 4

Digite o valor da coordenada x do ponto 4: 6
Digite o valor da coordenada y do ponto 4: 7

Digite o valor da coordenada x do ponto 5: 23
Digite o valor da coordenada y do ponto 5: 25


Os pontos digitados sao: (2,5); (4,8); (3,4); (6,7); (23,25)

Ponto mais a esquerda: (2,5)
Ponto mais a direita: (23,25)
Ponto mais acima: (23,25)
Ponto mais abaixo: (3,4)

*/