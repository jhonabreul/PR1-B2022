#include <stdio.h>

int main()
{
    int a = 10, res = 0;

    printf("a es %d y res es %d al principio\n", a, res);

    // post-incremento o incremento sufijo
    // Se asigna a res el valor de a antes de que se incremente a, es decir, res ahora tiene el valor 10 y luego se incrementa a, que pasa a tener el valor 11
    res = a++;
    printf("a es %d y res es %d despues de ejecutar res = a++\n", a, res);

    // post-decremento o decremento sufijo
    // Se asigna a res el valor de a antes de que se incremente a, es decir, res ahora tiene el valor 11 y luego se decrementa a, que pasa a tener el valor 10
    res = a--;
    printf("a es %d y res es %d despues de ejecutar res = a--\n", a, res);

    // pre-incremento o incremento prefijo
    // Primero se incrementa a, que pasa a tener el valor 11 y luego se asigna a res el valor de a, es decir, res ahora tiene el valor 11
    res = ++a;
    printf("a es %d y res es %d despues de ejecutar res = ++a\n", a, res);

    // pre-decremento o decremento prefijo
    // Primero se decrementa a, que pasa a tener el valor 10 y luego se asigna a res el valor de a, es decir, res ahora tiene el valor 10
    res = --a;
    printf("a es %d y res es %d despues de ejecutar res = --a\n", a, res);

    return 0;
}
