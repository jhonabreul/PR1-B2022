#include <stdio.h>

int main()
{
    char opcion;
    int opcion_invalida = 1;
    
    printf("Calculadora de area.\nQue figura desea?\n   a) Cuadrado\n   b) Triangulo\n   c) Circulo\n");
   
    do {
        scanf(" %c", &opcion);
    
        switch (opcion) {
            case 'a':   
                printf("Va a calcular el area de un cuadrado\n");
                opcion_invalida = 0;
                break;
                
            case 'b':   
                printf("Va a calcular el area de un triangulo\n");
                opcion_invalida = 0;
                break;
                
            case 'c':   
                printf("Va a calcular el area de un circulo\n");
                opcion_invalida = 0;
                break;
                
            default:
                printf("Opcion invalida\n");
                opcion_invalida = 1;
                break;
        }
    } while (opcion_invalida);

    return 0;
}
