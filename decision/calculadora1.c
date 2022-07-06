#include <stdio.h>

int main()
{
    char operador;
    float operando1, operando2;
    
    printf("Ingrese el la operacion: ");
    scanf("%f %c %f", &operando1, &operador, &operando2);
        
    switch (operador) {
        case '+':
            printf("%.2f %c %.2f = %.2f\n", operando1, operador, operando2, operando1 + operando2);
            break;
        
        case '-':
            printf("%.2f %c %.2f = %.2f\n", operando1, operador, operando2, operando1 - operando2);        
            break;
        
        case '*':
            printf("%.2f %c %.2f = %.2f\n", operando1, operador, operando2, operando1 * operando2);        
            break;
        
        case '/':
            printf("%.2f %c %.2f = %.2f\n", operando1, operador, operando2, operando1 / operando2);        
            break;
            
        default:            
            printf("El operador %c no es valido\n", operador);        
            break;
    }

    return 0;
}

