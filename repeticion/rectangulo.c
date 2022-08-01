#include <stdio.h>

int main()
{
    int filas, columnas;

    printf("Ingrese numero de filas: ");
    scanf("%d", &filas);
    printf("Ingrese numero de columnas: ");
    scanf("%d", &columnas);

    for (int i = 1; i <= filas; i++)
    {
        for (int j = 1; j <= columnas; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
