#include <stdio.h>

int main(){
    int vet[] = {1,2,3,4,5,6,7,8,9,10};
    printf("<< Pointers >>\n");
    for(int i = 9; i >= 0; i--){
        printf("%d,", *(vet+i));     
    }
    return 0;
}