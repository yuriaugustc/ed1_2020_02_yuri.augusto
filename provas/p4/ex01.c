#include <stdio.h>
#include <stdlib.h>

/* ex01
Crie uma função que faz a junção de dois vetores inteiros. 
A função deve ter como entrada os dois vetores e seus
respectivos tamanhos. A alocação de espaço necessário para
o vetor concatenado deve ser feita dentro da função 
(a função então deve devolver para o programa principal 
o vetor alocado e também o tamanho desse novo vetor). 
A função deve retornar um valor inteiro: (0 - zero)
se a junção ocorreu de forma correta; (-1) em caso de erro.
Mostre o uso da função no programa principal. Não é
permitido criar novos tipos de dados para a solução
do exercício (ou seja, sem uso de structs).


Vetor 1: [1, 5, 2]
Vetor 2: [10, 30] 
Concatenção Vetor 1, Vetor 2

Vetor Concatenado = [ 1, 5, 2, 10, 30]


// check:<<<erro: tam3 deve ser passado por referência>>>>
int concatena_vetor(int *vet1, int *vet2, int tam1, int tam2, int **vet3, int tam3){
    if(vet1 == NULL || vet2 == NULL){ 
        return -1;
    }
    tam3 = tam1+tam2;
    **vet3 = malloc((tam3)*sizeof(int));// check:<<<erro: um só desrefernciamento>>>>
    int i = 0;
    for(i = 0; i < tam1; i++){
        vet3[i] = vet1[i];
    }
    int j = 0;
    for(i = tam1; i < tam3; i++){
        vet3[i] = vet2[j];
        j++;
    }
    return 0;
}

int main(){
    int tam1, tam2, tam3, n1;
    int *vet1, *vet2, *vet3;

    printf("<< Concatenacao de vetores >>\n\n");
    printf("Qual o tamanho do primeiro vetor? ");
    scanf("%d", &tam1);
    vet1 = malloc(tam1*sizeof(int));
    printf("Insira os dados do primeiro vetor:\n");
    for(int i = 0; i < tam1; i++){
        scanf("%d", &n1);
        vet1[i] = n1;
    }
    printf("Qual o tamanho do segundo vetor? ");
    scanf("%d", &tam2);
    printf("Insira os dados do segundo vetor:\n");
    vet2 = malloc(tam2*sizeof(int));
    for(int i = 0; i < tam2; i++){
        scanf("%d", &n1);
        vet2[i] = n1;
    }
    printf("Concatenando os dois vetores !\n\n");
    int aux = concatena_vetor(vet1, vet2, tam1, tam2, &vet3, &tam3);
    if(aux == -1){
        printf("Algo de errado nao esta certo :/\n");
        return 0;
    }
    printf("Aqui esta o resultado: [");
    for(int i = 0; i < tam3; i++){
        printf("%d, ", *vet3);
        if(i+1 == tam3){
            printf("%d]\n", *vet3);
        }
        vet3++;
    }
    return 0;
}

*/

    //SUB - Refazendo o exercicio

int concatena_vetor(int *vet1, int *vet2, int tam1, int tam2, int **vet3, int *tam3){
    if(vet1 == NULL || vet2 == NULL){ 
        return -1;
    }
    *tam3 = tam1+tam2;
    *vet3 = malloc((*tam3)*sizeof(int));
    int i = 0;
    for(i = 0; i < tam1; i++){
        vet3[i] = vet1[i];
    }
    int j = 0;
    for(i = tam1; i < *tam3; i++){
        vet3[i] = vet2[j];
        j++;
    }
    return 0;
}

int main(){
    int tam1, tam2, tam3, n1;
    int *vet1, *vet2, *vet3;

    printf("<< Concatenacao de vetores >>\n\n");
    printf("Qual o tamanho do primeiro vetor? ");
    scanf("%d", &tam1);
    vet1 = malloc(tam1*sizeof(int));
    printf("Insira os dados do primeiro vetor:\n");
    for(int i = 0; i < tam1; i++){
        scanf("%d", &n1);
        vet1[i] = n1;
    }
    printf("Qual o tamanho do segundo vetor? ");
    scanf("%d", &tam2);
    printf("Insira os dados do segundo vetor:\n");
    vet2 = malloc(tam2*sizeof(int));
    for(int i = 0; i < tam2; i++){
        scanf("%d", &n1);
        vet2[i] = n1;
    }
    printf("Concatenando os dois vetores !\n\n");
    int aux = concatena_vetor(vet1, vet2, tam1, tam2, &vet3, &tam3);
    if(aux == -1){
        printf("Algo de errado nao esta certo :/\n");
        return 0;
    }
    printf("Aqui esta o resultado: [");
    for(int i = 0; i < tam3; i++){
        printf("%d, ", *vet3);
        if(i+1 == tam3){
            printf("%d]\n", *vet3);
        }
        vet3++;
    }
    return 0;
}