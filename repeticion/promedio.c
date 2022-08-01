#include <stdio.h>

int main()
{
    float nota;
    float suma = 0;
    int notas = 0;
    
    do {
        printf("Ingrese nota: ");
        scanf("%f", &nota);
        
        if (nota >= 0) {
            suma += nota;
            notas++;
        }
    } while (nota >= 0);
    
    printf("Suma: %.2f\n", suma);
    printf("Cantidad de notas: %d\n", notas);
    printf("Promedio: %.2f\n", suma / notas);
    
    return 0;
}
