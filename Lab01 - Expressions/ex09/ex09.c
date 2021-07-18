#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    float dist;
    printf("<< Distancia >>\n");
    printf("Entre com a coordenada x: ");
    scanf("%d", &x);
    printf("Entre com a coordenada y: ");
    scanf("%d", &y);
    dist = sqrt( pow( (x-0), 2) + pow( (y-0), 2));
    printf("A distancia entre os pontos (%d,%d) e (0,0) eh %.1f\n", x , y, dist);
}

/*
=> Escreva um programa que leia as coordenadas x e y de pontos no R2 e calcule sua distância da origem (0,0).  
Obs: faça #include <math.h> e use a função sqrt() para calcular a raiz de um número

-------------------------------------------------------------------------------
Exemplo de saída:

<< Distancia >>
Entre com a coordenada x: 3
Entre com a coordenada y: 4
A distancia entre os pontos (3,4) e (0,0) eh 5.0
-------------------------------------------------------------------------------
*/