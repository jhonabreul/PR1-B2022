#include <stdio.h>

/*
Programa que lee tres enteros del usuario y los imprime en orden ascendente,
es decir, de menor a mayor.
*/

int main()
{
    int a, b, c;

    printf("Ingrese tres enteros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b) {
        if (b < c) {
            printf("%d %d %d", a, b, c);
        } else if (a < c) {
            printf("%d %d %d", a, c, b);
        } else {
            printf("%d %d %d", c, a, b);
        }
    } else {
        if (c < b) {
            printf("%d %d %d", c, b, a);
        } else if (a < c) {
            printf("%d %d %d", b, a, c);
        } else {
            printf("%d %d %d", b, c, a);
        }
    }

    return 0;
}

