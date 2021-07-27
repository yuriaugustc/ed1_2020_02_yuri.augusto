#include <stdio.h>

int main(){
    int i, aluno[5], maior = 0, posicao;

    printf("<< Normalizando as notas >>\n");
    for(i = 0; i < 5; i++){
        printf("Entre com a nota do aluno %d: ", i+1);
        scanf("%d", &aluno[i]);
        aluno[i] *= 2;
        if(aluno[i]>maior){
            maior = aluno[i];
        }
    }
    for(i = 0; i < 5; i++){
        if(aluno[i]==maior){
            aluno[i] = 100;
        }
    }
    printf("\nNotas Normalizadas\n\n");
    
    for( i = 0; i < 5; i++){
        printf("A nota do aluno %d é %d\n", i+1, aluno[i]);
    }
}

/*
Elabore um algoritmo para normalizar as notas de uma turma de 5 alunos.
A maior nota deve virar 100 e as demais devem ser modificadas 
proporcionalmente (pense em regra de três).

Exemplo de Saída
<< Normalizando as notas >>
Entre com a nota do aluno 1: 16
Entre com a nota do aluno 2: 20
Entre com a nota do aluno 3: 30
Entre com a nota do aluno 4: 45
Entre com a nota do aluno 5: 50

Notas normalizadas

A nota do aluno 1 é 32
A nota do aluno 2 é 40
A nota do aluno 3 é 60
A nota do aluno 4 é 90
A nota do aluno 5 é 100
*/