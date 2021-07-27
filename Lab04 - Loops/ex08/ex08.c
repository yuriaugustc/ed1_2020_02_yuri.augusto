#include <stdio.h>

int main(){
    int i;
    printf("<< Contagem progressiva >>\n");
    printf("Qual é o número inicial? ");
    scanf("%d", &i);
    do{
        printf("%d.. ", i);
        i++;
    }while(i<=0);
    printf("FIM!");
}

/*
    "Discuta por que o do-while não é a melhor estrutura para resolver este exercício."

    O comando do-while não é o mais indicado pois a intenção deste é 
    entrar em um laço infinito até que determinada condição seja alcançada, 
    sendo esta condição verificada apenas ao fim do código, 
    o que pode gerar problemas se for tratado como um simples laço contínuo. 
    A melhor estrutura para se resolver laços contadores é o for, pois nele 
    é possível controlar a variável dentro da condição, enquanto do-while e 
    while é necessário realizar manutenção da variável utilizada na 
    condição dentro do laço;  
*/