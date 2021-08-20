#include <stdio.h>

int main(){
    int val[5] = {2,4,6,8,10};
    unsigned int *p;
    p = &val;
    
    printf("<< Pointers >>\n");
    
    printf("val[5] = {");
    for(int i = 0; i < 5; i++){
        printf("%d,", val[i]);
    }
    printf("\b}\n");
    printf("Decrementando em um cada elemento do vetor: \n");
    printf("val[5] = {");
    for(int i = 0; i < 5; i++){
        (*(p+i))--;
        printf("%d,", *(p+i));
    }
    printf("\b}\n");
    return 0;
}