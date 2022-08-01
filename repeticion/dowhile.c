#include <stdio.h>

int main()
{
    char estado_civil;
    
    do {
        printf("Cual es su estado civil (s/c): ");
        scanf(" %c", &estado_civil);
    } while (estado_civil != 's' && estado_civil != 'c');
    
    return 0;
}
