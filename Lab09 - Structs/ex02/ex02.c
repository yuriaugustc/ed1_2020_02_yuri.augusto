#include <stdio.h>

int main(){
    printf("<< Data >>\n");
    struct data{
        int dia;
        char mes[50];
        int ano;
    };
    int maior = 0;
    struct data datas[3];
    for(int i = 0; i < 3; i++){
        printf("Digite o dia: ");
        scanf("%d", &datas[i].dia);
        printf("Digite o mes: ");
        scanf("%s", &datas[i].mes);
        printf("Digite o ano: ");
        scanf("%d", &datas[i].ano);
        printf("\n");
        if(datas[i].ano > maior){
            maior = datas[i].ano;
        }
    }
    printf("Datas cadastradas: \n");
    for(int i = 0; i < 3; i++){
        printf("Dia %d de %s de %d.\n", datas[i].dia, datas[i].mes, datas[i].ano);
    }
    printf("%d foi o maior ano cadastrado.\n", maior);
    return 0;
}

/*
1) Crie uma estrutura chamada data, que armazena o dia, mês e o ano (ilustração abaixo).  
Cadastre 3 datas, mostre as datas e o maior ano cadastrado. 

Data***
+------------+------------+---------------+
| Dia        | Mês        |   Ano         |    
+------------+------------+---------------+

-------------------------------------------------------------------------------
Exemplo de saída:
Digite o dia: 2
Digite o mes: Janeiro
Digite o ano: 2015

Digite o dia: 15
Digite o mes: Maio
Digite o ano: 2018

Digite o dia: 21
Digite o mes: Dezembro
Digite o ano: 2020


Datas cadastradas: 
Dia 2 de Janeiro de 2015
Dia 15 de Maio de 2018
Dia 21 de Dezembro de 2020

2020 foi o maior ano cadastrado.
-------------------------------------------------------------------------------
*/