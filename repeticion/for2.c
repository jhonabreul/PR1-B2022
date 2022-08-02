#include <stdio.h>

int main()
{
    int ultimo_numero;
    
    scanf("%d", &ultimo_numero);

    for (int contador = 1; contador <= ultimo_numero; contador++) {
        if (contador % 7 == 1) {
            printf("%d\n", contador);
        }
    }

    return 0;
}
