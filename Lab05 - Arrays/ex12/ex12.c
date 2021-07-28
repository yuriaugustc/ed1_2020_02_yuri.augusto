#include <stdio.h>

int main(){
    float valor, piscina[4]; 
    float prob[4], maior = 0;

    printf("<< Probabilidades >>\n");
    printf("Digite a quantidade de bolinhas: ");
    printf("\nVerde: ");
    scanf("%f", &piscina[0]);
    printf("Azul: ");
    scanf("%f", &piscina[1]);
    printf("Amarela: ");
    scanf("%f", &piscina[2]);
    printf("Vermelha: ");
    scanf("%f", &piscina[3]);
    printf("\n");
    valor = piscina[0] + piscina[1] + piscina[2] + piscina[3];
    for(int i = 0; i < 4; i++){
        prob[i] = (piscina[i]/valor) * 100;
        if(prob[i]>maior){ maior = prob[i]; }
    }
    printf("\nProbabilidades");
    printf("\nVerde: %.1f%%", prob[0]); if(prob[0] == maior){ printf(" << Maior probabilidade"); }
    printf("\nAzul: %.1f%%", prob[1]); if(prob[1] == maior){ printf(" << Maior probabilidade"); }
    printf("\nAmarela: %.1f%%", prob[2]); if(prob[2] == maior){ printf(" << Maior probabilidade"); }
    printf("\nVermelha: %.1f%%", prob[3]); if(prob[3] == maior){ printf(" << Maior probabilidade"); }

    return 0;
}

/*
Uma piscina de bolinhas possui bolas azuis, verdes, amarelas e vermelhas. 
Faça um programa em que o usuário digita a quantidade de bolinhas de cada
cor existente em uma piscina e mostra a probabilidade de ocorrência de cada 
cor, indicando qual possui a maior probabilidade

Exemplo de saída:
<< Probabilidades >>

Digite a quantidade de bolinhas
Verde: 51
Azul: 60
Amarela: 70
Vermelha: 80

Probabilidades
Verde: 19.5%
Azul: 22.9%
Amarela: 26.8%
Vermelha: 30.6% << Maior probabilidade
*/