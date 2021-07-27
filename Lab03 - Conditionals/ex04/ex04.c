#include <stdio.h>

int main(){
    char nome, nmaior, nmenor;
    float nota = 0.0;
    float menor = 10, maior = 0.0;

    printf("<< Notas da Turma >>\n");
    for(int i = 1;i <= 3; i++){
        printf("Enter com o nome do aluno #%d: ", i);
        scanf(" %c", &nome);
        printf("Entre com a nota do aluno #%d: ", i);
        scanf("%f", &nota);
        if(nota < menor){ 
            nmenor = nome;
            menor = nota; 
            }
        if(nota > maior){ 
            nmaior = nome;
            maior = nota; 
            }
    }
    printf("\n%c tem a maior nota (%.1f) e %c a menor (%.1f)\n", nmaior, maior, nmenor, menor);

}