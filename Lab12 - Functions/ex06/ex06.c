#include <stdio.h>

int Fatorial(int fat){
    for(int i = fat-1; i > 0; i--){
        fat *= i;
    }
    return fat;
}

double Neperiano(int num){
    double nep = 0, fat = 0;
    for(int i = 1; i <= num; i++){
        fat = Fatorial(i);
        nep = nep + (1/fat);
    }
    return nep+1;
}
int main(){
    int num;
    double nep;

    printf("Digite o valor de n para aproximar o numero neperiano: ");
    scanf("%d", &num);
    nep = Neperiano(num);
    printf("O valor do numero neperiano eh: %lf", nep);
    return 0;
}

/*
=> Faça uma função para calcular o número neperiano usando uma série (ver na wikipedia). 
A função deve ter como parâmetro o número de termos que serão somados (note que, 
 quanto maior o número, a resposta estará mais próxima do valor e). 
Observe que é preciso calcular o fatorial de vários números – para isso, utilize
a função criada anteriormente. Utilize também o procedimento criado no exercício 2.

Pesquise: https://pt.wikipedia.org/wiki/E_(constante_matemática)



Ex: Neperiano(0) tem como saída 1; 
    Neperiano(1) tem como saída 2;
    Neperiano(5) tem como saída 2.71666666666667;

No programa principal, solicite ao usuário o valor para aproximar
o número neperiano.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o valor de n para aproximar o numero neperiano: 14
O valor do numero neperiano eh: 2.71828182845823
-------------------------------------------------------------------------------
*/