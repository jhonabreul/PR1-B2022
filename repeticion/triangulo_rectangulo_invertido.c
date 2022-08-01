#include <stdio.h>

int main()
{
    int altura;

    printf("Ingrese altura: ");
    scanf("%d", &altura);

    for (int i = 1; i <= altura; i++)
    {
        for (int j = 1; j <= altura - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
