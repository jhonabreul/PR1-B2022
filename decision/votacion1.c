#include <stdio.h>

int main()
{
    int edad;

    printf("Introduce tu edad: ");
    scanf("%d", &edad);

    if (edad >= 18) {
        print("Puede votar porque su edad es %d, es mayor de edad\n", edad);
    }

    return 0;
}
