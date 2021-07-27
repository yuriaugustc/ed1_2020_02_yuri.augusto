#include <stdio.h>

int main(){
    int i, num, count = 0;

    printf("<< Numeros Primos >>\n");
    printf("Entre com o valor: ");
    scanf("%d", &num);
    for(i = 1; i <= num; i++){
        if((num%i)==0){
            count++;
        }
    }
    if(count == 2){
        printf("O numero %d é primo", num);
    }
    else {
        printf("O numero %d não é primo\n", num);
    }    
}