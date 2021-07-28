#include <stdio.h>
#include <windows.h>

int main(){
    int num, i;
    struct aluno{
        int numero;
        char classe;
        float cra;
    };

    printf("<< Universidade X >>\n");
    printf("Quantos alunos serão cadastrados? ");
    scanf("%d", &num);
    if(num>10000){
        printf("Erro! Você só pode cadastrar no máximo 10.000 alunos!\n");
        Sleep(1500);
        main();
        return 0;
    }
    struct aluno matricula[num];
    printf("\n");
    for(i = 0; i < num; i++){
        printf("Entre com o número do aluno: ");
        scanf("%d", &matricula[i].numero);
        printf("Entre com a classe social do aluno %d: ", matricula[i].numero);
        scanf(" %c", &matricula[i].classe);
        printf("Enter com o CRA do aluno %d: ", matricula[i].numero);
        scanf("%f", &matricula[i].cra);
        printf("\n");
    }

    printf("==== Alunos Cadastrados ====\n");
    for(i = 0; i < num; i++){
        printf("Numero: %d ", matricula[i].numero);
        printf("Classe Social: %c ", matricula[i].classe);
        printf("CRA: %.2f ", matricula[i].cra);
        printf("\n");
    }

    return 0;
}

/*
Faça um programa que armazene informações sobre os alunos de uma universidade. 
O número máximo de alunos que o sistema pode cadastrar é 10000. Os dados a 
serem armazenados são: número de matrícula (inteiro); 
classe social (A, B, C, D ou E); CRA (real). Ao iniciar o programa, informe 
quantos usuários serão cadastrados. Depois de realizado o cadastro, mostre 
todos os dados lidos. A saída do programa deve ser como o exemplo abaixo.
* Proibido o uso de structs

Exemplo de saída:
<< Universidade X >>
Quantos alunos serão cadastrados: 2

Entre com o número do aluno: 5
Entre com a classe social do aluno 5: B
Entre com o CRA do aluno 5: 70

Entre com o número do aluno: 7
Entre com a classe social do aluno 7: B
Entre com o CRA do aluno 7: 60

==== Alunos Cadastrados ====
Número: 5 Classe Social: B CRA: 70.00
Número: 7 Classe Social: B CRA: 60.00
*/