#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto{
    double x, y;
};

struct circulo{
    struct ponto raio;// check:<<<erro: errado>>>>
};

   // Ex04: Um círculo pode ser definido com duas informações
   // - um ponto central; que é sua coordenada x,y no espaço cartesiano
   // - um raio; que é a distância da borda ao centro

   // Crie uma estrura Circulo. Para isso, crie uma estrutura chamada Ponto, que armazenará as
   // coordenadas reais (x,y) de um ponto. Em seguida, crie uma estrutura chamada Circulo,
   // que define o círculo, isto é, armazena um ponto e um raio.
int main(){
    struct circulo circ;
    double area, dist, r;
   // No programa principal crie uma variável para definir um círculo e a partir dessa variável
   // e mostre a área e a distância do centro do círculo até a origem. 
   // fórmulas:
   // area = 3,14*r*r
   // distancia d = sqtr(x*x + y*y)
    printf("Digite a posição x: ");
    scanf("%lf", &circ.raio.x);
    printf("Digite a posição y: ");
    scanf("%lf", &circ.raio.y);
    r = circ.raio.y - circ.raio.x;// check:<<<erro: ??>>>>
    area = 3.14 * pow(r, 2);
    dist = floor(sqrt((circ.raio.x*circ.raio.x) + (circ.raio.y * circ.raio.y)));
    printf("Circulo: Centro (%.1lf,%.1lf); Raio %.2lf; Área: %.2lf; Distancia: %.2lf", circ.raio.x, circ.raio.y, r, area, dist);
   // Exemplo de saída: Circulo: Centro (3,5); Raio 2; Área: 12.56; Distancia: 5.0


    return 0;
}