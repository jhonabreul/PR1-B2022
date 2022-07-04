#include <stdio.h>

int main()
{
    char caracter;

    printf("Introduce un caracter: ");
    scanf("%c", &caracter);

    if (caracter >= 'A' && caracter <= 'Z') {
        printf("El caracter %c es una letra mayúscula\n", caracter);
    } else {
        printf("El caracter %c no es una letra mayúscula\n", caracter);
    }

    return 0;
}
