#include <stdio.h>

int main(){
    printf("<< Structs >>\n");
        struct telefone{
            int ddd;
            int telefone;
        };
        struct telefone numbers[3];
        for(int i = 0; i < 3; i++){
        printf("Digite o DDD: ");
        scanf("%d", &numbers[i].ddd);
        printf("Digite o telefone: ");
        scanf("%d", &numbers[i].telefone);
        }
        printf("\nTelefones cadastrados:\n");
        for(int i = 0; i < 3; i++){
            printf("%d %d\n", numbers[i].ddd, numbers[i].telefone);
        }
    return 0;
}

/*
1) Crie uma estrutura chamada telefone, que armazena o DDD e o telefone (ilustração abaixo).  
Cadastre 3 telefones e mostre na tela os telefones cadastrados. 

Telefone**
+------------+------------+
| DDD        | Telefone   |  
+------------+------------+

-------------------------------------------------------------------------------
Exemplo de saída:
Digite o DDD: 34
Digite o telefone: 991501111
Digite o DDD: 31
Digite o telefone: 991502222
Digite o DDD: 64
Digite o telefone: 991503333

Telefones cadastrados: 
34 991501111
31 991502222
64 991503333
-------------------------------------------------------------------------------
*/