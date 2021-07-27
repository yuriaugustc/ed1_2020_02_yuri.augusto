#include <stdio.h>

int main(){
    char letra, letter = 'q';

    printf("<< Forca de uma letra só >>\n");
    for(int i = 5; i > 0; i--){
        printf("\nQual a letra? ");
        scanf(" %c", &letra);
        if(letra == 'q'){
            printf("ACERTOU!!!\n");
            return 0;
        }
        else if(i == 2){
            printf("Última chance!!!\n");
        }
        else if(i == 1){
            printf("Acabaram suas chances. A letra correta é 'q'\n");
            return 0;
        }
        else{
            printf("Errado! Você tem mais %d chances.\n", i-1);
        }
    }
}