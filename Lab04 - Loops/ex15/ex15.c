#include <stdio.h>
#include <math.h>

int main(){
    int i, num, aux, bit = 0, bits = 1, count = 0;

    printf("<< Conversor binário-decimal >>\n");
    printf("Entre com o numero de bits: ");
    scanf("%d", &num);
    aux = num-1;
    if(num>3){
        bits = 0;
    }
    for(i = 0; i < num; i++){
        printf("Digite o bit #%d:", i+1);
        scanf("%d", &bit);
        bits = bits + (bit*pow(10, aux));
        count = count + (bit*pow(2, aux));
        aux--;
    }
    printf("O numero binario %d em decimal é %d", bits, count);
}