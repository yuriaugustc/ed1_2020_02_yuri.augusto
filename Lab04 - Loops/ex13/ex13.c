#include <stdio.h>

int main(){
    int n, j, i, k = 0, count = 0;

    printf("<< Multiplos >>\n");
    printf("Entre com o valor de n: ");
    scanf("%d", &n);
    printf("Entre com o valor de i: ");
    scanf("%d", &i);
    printf("Entre com o valor de j: ");
    scanf("%d", &j);

    printf("Os multiplos de i ou j sao: ");
    
    while(count != n){
        if((k%i)==0||(k%j)==0){
            if(k == n+1){
                printf("%d.", k);
                count++;
            }
            else { 
                printf("%d, ", k);
                count++;
            }
        }
        k++;
    }
}