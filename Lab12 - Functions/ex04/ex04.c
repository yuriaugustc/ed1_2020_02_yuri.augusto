#include <stdio.h>
#include <windows.h>

int Elevado(int x, int n){
    int elev = 1;
    for(int i = 0; i < n; i++){
        elev *= x;
    }
    return elev;
}

int main(){
    int x, n, elev;

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    if(n < 0){
        printf("n pode assumir valor negativo.\n");
        Sleep(1500);
        main();
        return 0;
    }
    elev = Elevado(x,n);
    printf("Elevado(%d,%d) tem como saída %d;\n", x,n,elev);
    return 0;
}

/*
=> Faça uma função para calcular x elevado a n. Não utilizar o operador pow (nem ^ - que não existe em C).
No programa principal permita ao usuário informar o valor de x e de n (inteiro). 
Lembre que n pode assumir valor negativo.

Ex: Elevado(2,4) tem como saída 16; 
    

No programa principal, solicite ao usuário o valor de x e o valor de n.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o valor de x: 2
Digite o valor de n: 4
O valor de 2 elevado a 4 eh 16
-------------------------------------------------------------------------------
*/