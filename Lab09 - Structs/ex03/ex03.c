#include <stdio.h>
#include <string.h>

int main(){
    printf("<< Endereço >>\n");
    struct endereco {
        int numero;
        char rua[50];
        char complemento[50];
        char cidade[50];
        char estado[3];
        char cep[10];
    };
    struct endereco enderecos[3];
    int cep_mg = 0;

    for(int i = 0; i < 3; i++){
        printf("Rua: ");
        fgets(enderecos[i].rua, 50, stdin);
        printf("Numero: ");
        scanf("%d", &enderecos[i].numero);
        printf("Complemento: ");
        fgets(enderecos[i].complemento, 50, stdin);
        printf("Cidade: ");
        fgets(enderecos[i].cidade, 50, stdin);
        printf("Estado: ");
        fgets(enderecos[i].estado, 50, stdin);
        printf("CEP: ");
        fgets(enderecos[i].cep, 50, stdin);
        printf("\n");
        if((strcmp(enderecos[i].estado, "MG")) == 0){
            cep_mg++;
        }
    }
    printf("Enderecos cadastrados que sao de \"MG\": \n");
    for(int i = 0; i < cep_mg; i++){
        printf("%s, %d. %s. %s-%s, %s.\n", enderecos[i].rua, enderecos[i].numero, enderecos[i].complemento, enderecos[i].cidade, enderecos[i].cep);
    }

    return 0;
}

/*
1) Crie uma estrutura chamada endereco, que armazena Rua, Número, Complemento,
Cidade, Estado e CEP (ilustração abaixo).  
Cadastre 3 endereços. Mostre ao final, todos os dados dos endereços cadastrados que são do estado “MG”

Endereco*
+------------+------------+---------------+
| Rua        | Número     |  Complemento  |
+------------+------------+---------------+
| Cidade     | Estado     |     CEP       |
+------------+------------+---------------+ 


-------------------------------------------------------------------------------
Exemplo de saída:
Rua: Joao
Numero: 32
Complemento: casa A
Cidade: Uberlandia
Estado: MG
CEP: 38400034


Rua: Almeida
Numero: 43
Complemento: Sem
Cidade: Araguari
Estado: MG
CEP: 38400045


Rua: Coronel Pedro
Numero: 25
Complemento: apto 40
Cidade: Caldas Novas
Estado: GO
CEP: 75780023


Enderecos cadastrados que sao de "MG":
Joao, 32. casa A. Uberlandia-MG, 38400034.
Almeida, 43. Sem. Araguari-MG, 38400045.
-------------------------------------------------------------------------------
*/