#include <stdio.h>

int main(){
    char nome[] = "José Augusto";
    unsigned char *p;
    printf("<< Pointers >>\n");
    p = &nome[0];
    for(int i = 0; i < 14;i++){
        printf("%c", *p);
        p++;
    }
    printf("\n");
    return 0;
}