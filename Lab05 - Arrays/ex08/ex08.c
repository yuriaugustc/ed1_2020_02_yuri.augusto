#include <stdio.h>
#include <math.h>

int main(){
    int i, media, valor[5];
    double desvio, aux = 0;

    printf("<< Media e desvio-padrao >>\n");
    for(i = 0; i < 5; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &valor[i]);
        aux += valor[i];
    }
    media = aux/5;
    for(i = 0; i < 5; i++){
        aux += pow((media - valor[i]), 2);
    }
    desvio = sqrt(aux/5);
    printf("A media eh %d e o desvio-padrao eh %.2lf", media, desvio);
    return 0;
}

/*
Calcular a média e o desvio padrão amostral de 5 números informados pelo usuário.
obs: desvio-padrão (amostral, normalizado por N-1)

Exemplo de saída:
<< Media e desvio-padrao >>
Digite o valor 1: 50
Digite o valor 2: 60
Digite o valor 3: 70
Digite o valor 4: 80
Digite o valor 5: 60
A media eh 64 e o desvio-padrao eh 11.40
*/
