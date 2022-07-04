#include <stdio.h>

int main()
{
    char caracter;

    printf("Introduce un caracter: ");
    scanf("%c", &caracter);

    if ((caracter >= 'A' && caracter <= 'Z') || (caracter >= 'a' && caracter <= 'z')) {
        printf("El caracter %c es una letra", caracter);

        if (caracter >= 'A' && caracter <= 'Z') {
            printf(" y es mayúscula\n");
        } else {
            printf(" y es minúscula\n");
        }
    } else {
        printf("El caracter %c no es una letra\n", caracter);
    }

    return 0;
}
