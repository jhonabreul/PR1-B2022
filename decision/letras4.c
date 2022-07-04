#include <stdio.h>

int main()
{
    char caracter;

    printf("Introduce un caracter: ");
    scanf("%c", &caracter);

    int es_mayuscula = caracter >= 'A' && caracter <= 'Z';
    int es_minuscula = caracter >= 'a' && caracter <= 'z';

    if (es_mayuscula || es_minuscula) {
        printf("El caracter %c es una letra", caracter);

        if (es_mayuscula) {
            printf(" y es mayúscula\n");
        } else {
            printf(" y es minúscula\n");
        }
    } else {
        printf("El caracter %c no es una letra\n", caracter);
    }

    return 0;
}
