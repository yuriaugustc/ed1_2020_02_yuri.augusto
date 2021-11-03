#include <stdio.h>
#include <stdlib.h>

// Funcão: Cálculo do lucro
// Crie um funcão que calcula qual foi o lucro (ou prejuízo) de uma venda
// A funcão recebe como entrada o preco de compra e o preco de venda
// Ela calcula e retorna o porcentual de lucro ou prejuízo obtido
//
// A funcão deve retornar um valor inteiro de acordo com a classificacão listada na tabela abaixo.
// Valores inválidos correspondem a números negativos e zeros
// Todos os comandos de entrada e saída devem estar no programa principal
// Todos os cálculos devem ser feitos na funcão.

/*
+-------------------+-----------------------------------------------+----------------+
| Retorno da Funcão | Porcentual de lucro                           | Classificacão  |
+-------------------+-----------------------------------------------+----------------+
| -1                | -                                             | Valor invalido |
+-------------------+-----------------------------------------------+----------------+
| 1                 | abaixo ou igual 0%                            | Prejuízo       |
+-------------------+-----------------------------------------------+----------------+
| 2                 | acima de 0% e menor ou igual a 20%            | Lucro pequeno  |
+-------------------+-----------------------------------------------+----------------+
| 3                 | acima de 20% e menor ou igual a 40%           | Lucro bom      |
+-------------------+-----------------------------------------------+----------------+
| 4                 | acima de 40%                                  | Lucro alto     |
+-------------------+-----------------------------------------------+----------------+


// check:<<<erro: não fez a funcão>>>>

int main(){
    double compra, venda;
    double lucro;
   // Ex03: utilizando a funcão de cálculo de lucro, leia o preco de compra e venda
   // e mostre o percentual de lucro ou prejuízo e a classificacão de acordo com
   // a tabela acima. 
    printf("Digite o preco de compra:");
    scanf("%lf", &compra);
    printf("Digite o preco de venda:");
    scanf("%lf", &venda);
    // check:<<<erro: e3.3: Cálculo com erros (não corresponde a porcentagem pedida OU erro na fórmula OU porcentagem baseada na venda e não na compra OU divisão inteira )>>>>    lucroPercent = (venda-compra)*10;

    lucro = (venda - compra)*compra;
    printf("Preco de compra: %.2lf; Preco de venda: %.2lf; Lucro Pequeno de %.0lf%%", compra, venda, lucro);
    //if(){
// check:<<<erro: não fez os testes IF>>>>
// check:<<<erro: não chamou a funcão>>>>
   // }
   // exemplo de saída:
   // Preco de compra: 10; Preco de venda:11; Lucro Pequeno de 10%
   // Preco de compra: 10; Preco de venda: 9; Prejuízo de 10%
  
    return 0;
}*/

// SUB - Refazendo o exercicio

// Funcão: Cálculo do lucro
// Crie um funcão que calcula qual foi o lucro (ou prejuízo) de uma venda
// A funcão recebe como entrada o preco de compra e o preco de venda
// Ela calcula e retorna o porcentual de lucro ou prejuízo obtido
//
// A funcão deve retornar um valor inteiro de acordo com a classificacão listada na tabela abaixo.
// Valores inválidos correspondem a números negativos e zeros
// Todos os comandos de entrada e saída devem estar no programa principal
// Todos os cálculos devem ser feitos na funcão.

/*
+-------------------+-----------------------------------------------+----------------+
| Retorno da Funcão | Porcentual de lucro                           | Classificacão  |
+-------------------+-----------------------------------------------+----------------+
| -1                | -                                             | Valor invalido |
+-------------------+-----------------------------------------------+----------------+
| 1                 | abaixo ou igual 0%                            | Prejuízo       |
+-------------------+-----------------------------------------------+----------------+
| 2                 | acima de 0% e menor ou igual a 20%            | Lucro pequeno  |
+-------------------+-----------------------------------------------+----------------+
| 3                 | acima de 20% e menor ou igual a 40%           | Lucro bom      |
+-------------------+-----------------------------------------------+----------------+
| 4                 | acima de 40%                                  | Lucro alto     |
+-------------------+-----------------------------------------------+----------------+

*/

int calculo(double compra, double venda, double *lucro){
    if(venda <=0 || compra <= 0){
        return -1;
    }
    *lucro = (venda-compra)/compra*100;
    if(*lucro <= 0.0){
        return 1;
    }
    if(*lucro > 0.0 && *lucro <= 20.0){
        return 3;
    }
    if(*lucro > 20.0 && *lucro <= 40.0){
        return 3;
    }
    if(*lucro > 40.0){
        return 4;
    }
}

int main(){
    double compra, venda;
    double lucro = 0.00;
    int i = 0;
   // Ex03: utilizando a funcão de cálculo de lucro, leia o preco de compra e venda
   // e mostre o percentual de lucro ou prejuízo e a classificacão de acordo com
   // a tabela acima. 
    printf("Digite o preco de compra: ");
    scanf("%lf", &compra);
    printf("Digite o preco de venda: ");
    scanf("%lf", &venda);
    i = calculo(compra, venda, &lucro);
    lucro *= -1; //para apresentar a porcentagem sem valor negativo;
    if(i == -1){
        printf("Algum dos valores inseridos sao invalidos, por favor cheque os valores e tente novamente.\n");
        return 0;
    }
    if(i == 1){
        printf("Preco de compra: %.2lf; Preco de venda: %.2lf; Prejuizo de %.0lf%%", compra, venda, lucro);
    }
    if(i == 2){
        printf("Preco de compra: %.2lf; Preco de venda: %.2lf; Lucro Pequeno de %.0lf%%", compra, venda, lucro);
    }
    if(i == 3){
        printf("Preco de compra: %.2lf; Preco de venda: %.2lf; Lucro Bom de %.0lf%%", compra, venda, lucro);
    }
    if(i == 4){
        printf("Preco de compra: %.2lf; Preco de venda: %.2lf; Lucro Alto de %.0lf%%", compra, venda, lucro);
    }
    return 0;
}