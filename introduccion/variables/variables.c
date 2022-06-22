#include <stdio.h>

int main()
{
  int entero;
  unsigned int entero_sin_signo;
  short int entero_corto;
  unsigned short int entero_corto_sin_signo;
  long int entero_largo;
  unsigned long int entero_largo_sin_signo;
  long long int entero_largo_largo;
  unsigned long long int entero_largo_largo_sin_signo;
  float flotante;
  double doble;
  long double doble_largo;
  char caracter;

  printf("Tamaños:\n");
  printf("Entero (int): %d\n", sizeof(entero));
  printf("Entero sin signo (unsigned int): %d\n", sizeof(entero_sin_signo));
  printf("Entero corto (short int): %d\n", sizeof(entero_corto));
  printf("Entero corto sin signo (unsigned short int): %d\n", sizeof(entero_corto_sin_signo));
  printf("Entero largo (long int): %d\n", sizeof(entero_largo));
  printf("Entero largo sin signo (unsigned long int): %d\n", sizeof(entero_largo_sin_signo));
  printf("Entero largo largo (long long int): %d\n", sizeof(entero_largo_largo));
  printf("Entero largo largo sin signo (unsigned long long int): %d\n", sizeof(entero_largo_largo_sin_signo));
  printf("Flotante (float): %d\n", sizeof(flotante));
  printf("Doble (double): %d\n", sizeof(doble));
  printf("Doble largo (long double): %d\n", sizeof(doble_largo));
  printf("Caracter (char): %d\n", sizeof(caracter));
  
  return 0;
}
