#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char nome[50], cpf[20], rg[10], end[50], city[50], uf[3], cep[9]; 
    printf("<< Declaração >>\n");
    printf("Digite seu nome: ");
    gets(nome);
    printf("Digite seu CPF: ");
    gets(cpf);
    printf("Digite seu RG: ");
    gets(rg);
    printf("Digite seu endereço: ");
    gets(end);
    printf("Digite a cidade: ");
    gets(city);
    printf("Digite o estado: ");
    gets(uf);
    printf("Digite o CEP: ");
    gets(cep);
    printf("\n\n\t\tD E C L A R A Ç Ã O\t\t\n\n");
    printf("Eu, %s, RG %s, CPF %s, \n", nome, rg, cpf);
    printf("residente na %s, %s-%s, CEP %s, \n", end, city, uf, cep);
    //printf("\n");
    printf("venho por meio deste declarar que vou estudar mais para a prova.\n");

    return 0;
}

/*

*/