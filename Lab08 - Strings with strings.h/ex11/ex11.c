#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    printf("<< respostas do ex11 >>\n");
    printf("letra A) Qual é a função do programa?\n");
    printf("A função do programa é verificar se o usuário do programa sabe a senha ou não;\n");
    printf("letra B) Qual a saída quando a senha correta é digitada (senha correta: 1234)\n");
    printf("é impresso no console a mensagem \"Senha Correta\" em seguida, em outra linha \"Acesso liberado\".\n");
    printf("letra C)Qual a saída para as seguintes senhas\n");
    printf("C.a (123): \"Senha Errada\"\n");
    printf("C.b (12345): \"Senha Errada\"\n");
    printf("C.c (123456): Nesse caso, será gerado um erro.\n");
    printf("letra D) Em quais casos o programa obteve um comportamento inválido. Explique o motivo.\n");
    printf("Na ultima alternativa, devido à quantidade de caracteres que possui a entrada, é acima do limite de ");
    printf("memoria alocada para o vetor \"buff\", gerando uma invasão de memória e gerando comportamento inválido.\n");
    return 0;
}

/*

*/