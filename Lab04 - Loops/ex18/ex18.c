#include <stdio.h>
#include <stdlib.h>

void conversao(){
    double vel, res;
    printf("Digite a velocidade (km/h): ");
    scanf("%lf", &vel);
    printf("A velocidade em m/s é %lf", vel/3.6);
    printf("\nPressione uma tecla para voltar ao menu principal.\n");
    setbuf(stdin, NULL);
    getchar();
}//conversao

void desconversao(){
    double vel, res;
    printf("Digite a velocidade (m/s): ");
    scanf("%lf", &vel);
    printf("A velocidade em km/h é %lf", vel*3.6);
    printf("\nPressione uma tecla para voltar ao menu principal.\n");
    setbuf(stdin, NULL);
    getchar();
}//desconversao

int main(){
    
    while(1){
        char op;
        printf("\n<< Conversor >>");
        printf("\n1 - para converter de km/h para m/s");
        printf("\n2 - para converter de km/h para km/h");
        printf("\nq - para sair\n");
        scanf(" %c", &op);
        if(op == '1'){conversao();}
        if(op == '2'){desconversao();}
        if(op == 'q'){return 0;}
    }
}//main