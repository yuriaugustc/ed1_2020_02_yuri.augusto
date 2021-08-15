#include <stdio.h>
#include <string.h>

    struct aluno {
        char nome[50];
        double nota[3];
        double media;
        int num_falta;
    };

int main(){
    struct aluno cadastro[3];
    double media2 = 0, prova1 = 0, media1 = 100;
    char nome0[50], nome1[50], nome2[50];

    printf("<< Matricula de Aluno >>\n");
    for(int i = 0; i < 3; i++){
        printf("\nEntre com os dados do %d° aluno\n", i+1);
        printf("Matricula: %d\n", i+1);
        printf("Nome: ");
        setbuf(stdin, NULL);
        scanf("%[^\n]s", &cadastro[i].nome);
        printf("Nota da prova 1: ");
        scanf("%lf", &cadastro[i].nota[0]);
        printf("Nota da prova 2: ");
        scanf("%lf", &cadastro[i].nota[1]);
        printf("Nota da prova 3: ");
        scanf("%lf", &cadastro[i].nota[2]);
        printf("Numero de faltas: ");
        scanf("%d", &cadastro[i].num_falta);
        cadastro[i].media = (cadastro[i].nota[0]+cadastro[i].nota[1]+cadastro[i].nota[2])/3;
        printf("%.2lf", cadastro[i].media);
        if(cadastro[i].media > media2){
            media2 = cadastro[i].media;
            strcpy(nome1, cadastro[i].nome);
        }
        if(cadastro[i].nota[0] > prova1){
            prova1 = cadastro[i].nota[0];
            strcpy(nome0, cadastro[i].nome);
        }
        if(cadastro[i].media < media1){
            media1 = cadastro[i].media;
            strcpy(nome2, cadastro[i].nome);
        }
    }

    printf("Aluno com maior nota na prova 1 foi %s com %.2lf pontos.\n", nome0, prova1);
    printf("Aluno com maior media geral foi %s com %.2lf pontos.\n", nome1, media2);
    printf("Aluno com menor media geral foi %s com %.2lf pontos.\n", nome2, media1);

    printf("Situação dos Alunos: \n");
    printf("1- %s. ", cadastro[0].nome);
    if((cadastro[0].media >= 60) && (cadastro[0].num_falta <= 18)){
        printf("Aprovado!\n");
    }
    else if(cadastro[0].num_falta > 18){
        printf("Reprovado por falta.\n");
    }
    else{
        printf("Reprovado por nota.\n");
    }
    printf("2- %s. ", cadastro[1].nome);
    if((cadastro[1].media >= 60) && (cadastro[1].num_falta <= 18)){
        printf("Aprovado!\n");
    }
    else if(cadastro[1].num_falta > 18){
        printf("Reprovado por falta.\n");
    }
    else{
        printf("Reprovado por nota.\n");
    }
    printf("3- %s. ", cadastro[2].nome);
    if((cadastro[2].media >= 60) && (cadastro[2].num_falta <= 18)){
        printf("Aprovado!\n");
    }
    else if(cadastro[2].num_falta > 18){
        printf("Reprovado por falta.\n");
    }
    else{
        printf("Reprovado por nota.\n");
    }
    return 0;
}

/*
5.Crie uma estrutura representando os alunos de um curso de graduação. 
A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, 
nota da segunda prova, nota da terceira prova, média e número de faltas.

    (a) Permita ao usuário entrar com os dados de 3 alunos. 
    (b) Encontre o aluno com maior nota da primeira prova.
    (c) Encontre o aluno com maior média geral.
    (d) Encontre o aluno com menor média geral.
    (e) Mostre a situação final do aluno. Para ser aprovado o aluno precisa ter nota média final 
        maior ou igual a 60 e ter presença maior ou igual a 75% (considere um total de 72 aulas). 
        No caso de reprovação, mostrar o motivo da mesma, isto é, caso o aluno foi reprovado por 
        falta, mostrar “Reprovado por falta”. Caso tenha sido reprovado por nota, mostrar “Reprovado por nota”. 
        Se um aluno foi reprovado por falta e por nota, prevalece, como motivo para reprovação, as faltas. Assim,
        mostrar a mensagem “Reprovado por falta”. 


-------------------------------------------------------------------------------
Exemplo de saída:
Entre com os dados do 1º aluno: 
Matricula: 1
Nome: Paulo
Nota da prova 1: 50
Nota da prova 2: 70
Nota da prova 3: 60
Numero de faltas: 12

Entre com os dados do 2º aluno: 
Matricula: 2
Nome: Gustavo
Nota da prova 1: 95
Nota da prova 2: 90
Nota da prova 3: 100
Numero de faltas: 19

Entre com os dados do 3º aluno: 
Matricula: 3
Nome: Luis
Nota da prova 1: 50
Nota da prova 2: 60
Nota da prova 3: 58
Numero de faltas: 2

Aluno com maior nota na prova 1 foi Gustavo com 95,0 pontos.
Aluno com maior media geral foi Gustavo com 95,0 pontos.
Aluno com menor media geral foi Luis com 56,0 pontos.

Situacao dos Alunos: 
1- Paulo. Aprovado.
2- Gustavo. Reprovado por falta.
3- Luis. Reprovado por nota.
-------------------------------------------------------------------------------
*/