#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TStack.h"

char *postfix(char infix[])
{
    TStack *st = stack_create();
    //char infix[100];
    int i = 0, j = 0;

    //printf("Digite uma expressao para ser convertida (maximo %d caracteres): ", sizeof(infix));
    //scanf("%[^\n]s", infix);
    char *p;
    p = malloc(strlen(infix));
    for(i = 0; infix[i] != '\0'; i++){
        switch (infix[i]){
            char ch;
            case '(':
                stack_push(st, infix[i]);
                break;
            case ')':
                stack_top(st, &ch);
                while(ch != '('){
                    p[j] = ch;
                    j++;
                    stack_pop(st);
                    stack_top(st, &ch);
                }
                stack_pop(st);
                break;
            case '+':
            case '-':
                stack_top(st, &ch);
                while(ch != '('){
                    p[j] = ch;
                    j++;
                    stack_pop(st);
                    stack_top(st, &ch);
                }
                stack_push(st, infix[i]);
                break;
            case '*':
            case '/':
                stack_top(st, &ch);
                while(ch != '(' && ch != '+' && ch != '-'){
                    p[j] = ch;
                    j++;
                    stack_pop(st);
                    stack_top(st, &ch);
                }
                stack_push(st, infix[i]);
                break;
            case ' ':
                break;
            default: 
                p[j] = infix[i];
                j++;
                break;
        }
    }
    p[j] = '\0';

    return p;
}

int main()
{
    char equacao[101];
    float valores[26];
    float num = 0.0;
    char c; 
    TStack *pi = stack_create(), *pi2 = stack_create();

    printf("Digite a expressao (maximo 100 caracteres):");
    fgets(equacao,100,stdin);
    equacao[strcspn(equacao, "\n")] = '\0'; 
    

    printf("\nExpressao digitada:\n%s",equacao);

    for (int i = 0; i< strlen(equacao); i++){
        c = equacao[i];

        if (c == '+' || c == '-' || c == '*' || c == '/'){
            printf("\noperador: %c", c);
        } else if (c>=65 && c <= 90){ // testa se a letra é maior que A e menor que Z
            printf("\noperando: %c (%d)", c,c);
            printf("\nDigite o valor para %c = ",c);
            scanf("%f",&valores[c-65]); // letra A é mapeada na posição zero do vetor
        }
    }
    char *p = postfix(equacao);
    char aux[50];
    for(int i = strlen(p); i >= 0; i--){ //(A+B+(C*(D+E))+F)
        stack_push(pi, p[i]);
    }
    for(int i = 0; i < strlen(p); i++){
        stack_top(pi, &c);
        stack_pop(pi);
        if(aux[i] == '+'){
            aux[strlen(aux)] += aux[i-2] + aux[i-1];
        }
        else if(aux[i] == '-'){
            num += aux[i-2] - aux[i-1];
        }
        else if(aux[i] == '/'){
            num += aux[i-2] / aux[i-1];
        }
        else if(aux[i] == '*'){
            num += aux[i-2] * aux[i-1];
        }
    }
    printf("Equacao postfix resolvida! Seu resultado eh: %.2lf\n", num);

    return 0;
}