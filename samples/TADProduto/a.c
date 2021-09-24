#include <stdio.h>
#include <windows.h>

int main()
{
    while(1)
    {
        printf("O VITAO MAMA MINHA ROLA!\n");
        for (int i = 0; i < 30; i++)
        {
            printf("-");
            Sleep(500);
        }
        printf("\n");
        return 0;
    }
}