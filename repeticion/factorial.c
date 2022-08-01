#include <stdio.h>

int main()
{
    long long n;
    
    printf("Ingrese un numero entero: ");
    scanf("%lld", &n);
    
    long long resultado = 1;
    
    for (long long i = 1; i <= n; i++) {
        resultado *= i;
    }
    
    printf("%lld! = %lld\n", n, resultado);
    
    return 0;
}
