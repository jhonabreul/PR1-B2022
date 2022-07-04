#include <stdio.h>

int main()
{
    int edad;

    printf("Introduce tu edad: ");
    scanf("%d", &edad);

    if (edad < 0) {
        printf("No puede votar porque su edad es %d, menor que 0, usted no ha nacido\n", edad);
    } else if (edad > 120) {
        printf("No puede votar porque su edad es %d, mayor que 120, usted ha muerto\n", edad);
    } else if (edad < 18) {
        printf("No puede votar porque su edad es %d, menor que 18, usted es menor de edad\n", edad);
    } else {
        printf("Puede votar porque su edad es %d, usted está vivo y es mayor de edad\n", edad);
    }

    return 0;
}
