#include <stdio.h>
#include <string.h>

  struct eletro{
    char nome[16];
    double potencia;
    double temp;
    double cons;
  };

int main(){
    int i, dia, cons_total;
    double soma[5];
    struct eletro domesticos[5];
    printf("<< Eletrodomesticos >>\n");
    for(i = 0; i < 5; i++){
      printf("\nInforme os dados do %d° eletrodomestico: \n", i+1);
      printf("Nome: ");
      fgets(domesticos[i].nome, 16, stdin);
      printf("Potencia: ");
      scanf("%lf", &domesticos[i].potencia);
      printf("Tempo ativo por dia: ");
      scanf("%lf", &domesticos[i].temp);
      domesticos[i].cons = domesticos[i].potencia * domesticos[i].temp;
      getchar();
    }
    i = strstr(domesticos[i].nome,'\n');
    
    for(i = 0; i < 5; i++){
      soma[i] = (domesticos[i].cons*100)/cons_total;
    }
    printf("Informe um valor de tempo (em dia): ");
    scanf("%d", &dia);
    cons_total = (domesticos[0].cons+domesticos[1].cons+domesticos[2].cons+domesticos[3].cons+domesticos[4].cons)*dia;
    printf("Consumo total: %d\n", cons_total);
    printf("Consumo Relativo: \n");
    printf("%s: %.1lf\n", domesticos[0].nome, (domesticos[0].cons*100)/cons_total);
    printf("%s: %.1lf\n", domesticos[1].nome, (domesticos[1].cons*100)/cons_total);
    printf("%s: %.1lf\n", domesticos[2].nome, (domesticos[2].cons*100)/cons_total);
    printf("%s: %.1lf\n", domesticos[3].nome, (domesticos[3].cons*100)/cons_total);
    printf("%s: %.1lf\n", domesticos[4].nome, (domesticos[4].cons*100)/cons_total);
    return 0;
}

/*
6.Faça um programa que controla o consumo de energia dos eletrodomésticos de uma casa.

    • Crie e leia as informações de 5 eletrodomésticos: o nome (máximo 15 letras), 
      potencia (real,  em kW) e tempo ativo por dia (real, em horas).

    • Leia um valor de tempo t (em dias), calcule e mostre o consumo total na casa e
      o consumo relativo de cada eletrodoméstico  (consumo/consumo total) nesse período
      de tempo. Apresente este ultimo dado em porcentagem.

-------------------------------------------------------------------------------
Exemplo de saída:
Informe os dados do 1º eletrodomestico: 
Nome: Geladeira
Potencia: 800
Tempo ativo por dia: 24

Informe os dados do 2º eletrodomestico: 
Nome: Ar Condicionado
Potencia: 1500
Tempo ativo por dia: 8

Informe os dados do 3º eletrodomestico: 
Nome: Chuveiro
Potencia: 4500
Tempo ativo por dia: 1

Informe os dados do 4º eletrodomestico: 
Nome: Radio
Potencia: 100
Tempo ativo por dia: 6

Informe os dados do 5º eletrodomestico: 
Nome: Computador
Potencia: 750
Tempo ativo por dia: 18

Informe um valor de tempo (em dia): 30
Consumo total: 1494000 KW
Consumo relativo: 
Geladeira 38.6%
Ar Condicionado 24.1%
Chuveiro 9.0%
Radio 1.2%
Computador 27.1%
-------------------------------------------------------------------------------
*/