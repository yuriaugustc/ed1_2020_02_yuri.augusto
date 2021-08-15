#include <stdio.h>

void DesenhaLinha(int qtd, int lin){
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < qtd; j++){
            printf("=");
        }
        printf("\n");
    }
}

int main(){
    int qtd = 0, lin = 0;
    printf("Digite a quantidade de linhas a serem impressas: ");
    scanf("%d", &lin);
    printf("Digite o tamanho da linha: ");
    scanf("%d", &qtd);
    DesenhaLinha(qtd, lin);
    return 0;
}

/*
=> Faça um procedimento chamado DesenhaLinha. Ele deve desenhar 
uma linha na tela usando vários caracteres "=" (Ex: ========). 
O procedimento deve ter como argumento um valor que indica
quantos caracteres "=" serão mostrados. 

Ex: DesenhaLinha(4) tem como saída ====; 
    DesenhaLinha(10) tem  como saída ==========

No programa principal, solicite ao usuário quantas vezes a função 
deverá ser executada e qual o tamanho da linha a ser desenhada.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite a quantidade de linhas a serem impressas: 3
Digite o tamanho da linha: 5
=====
=====
=====
-------------------------------------------------------------------------------
*/