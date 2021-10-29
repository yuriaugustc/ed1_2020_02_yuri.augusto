#include <stdio.h>
#include <string.h>
#include "TStack.h"

int main()
{
    TStack *st = stack_create();
    char infix[100];
    char postfix[100];
    int i = 0, j = 0;

    printf("Digite uma expressao para ser convertida (maximo %d caracteres): ", sizeof(infix));
    scanf("%[^\n]s", infix);
    
   for(i = 0; infix[i] != '\0'; i++){
        switch (infix[i]){
            char ch;
            case '(':
                stack_push(st, infix[i]);
                break;
            case ')':
                stack_top(st, &ch);
                while(ch != '('){
                    postfix[j] = ch;
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
                    postfix[j] = ch;
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
                    postfix[j] = ch;
                    j++;
                    stack_pop(st);
                    stack_top(st, &ch);
                }
                stack_push(st, infix[i]);
                break;
            case ' ':
                break;
            default: 
                postfix[j] = infix[i];
                j++;
                break;
        }
    }
    postfix[j] = '\0';
    printf("Expressao postfix: %s\n", postfix);

    return 0;
}