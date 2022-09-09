#include <stdio.h>
#define N 10

void validar_positividad(int* a, int p)
{
  do {
    printf("Ingrese el número [%d]: ", p);
    scanf("%d", a);
  } while (*a < 0 || *a > 100);
}

void validar_no_primo(int* a)
{
  int c_primo = 0;
  for (int i = 1; i < *a; i++)
    if ( (*a % i) == 0 )
      c_primo++;

  if (c_primo == 2 || *a == 1)
    *a += 1;
    // (*a)++;
    // *a = *a + 1;
    // ++*a;

}

int main(void) {

  int arreglo[N];

  for (int i = 0; i < N; i++)
    validar_positividad(&arreglo[i], i);

  printf("Antes del llamado: \n");
  for (int i = 0; i < N; i++)
    printf("%d\n", arreglo[i]);

  for (int i = 0; i < N; i++)
    validar_no_primo(&arreglo[i]);

  // Requisito 3 - Ordenamiento
  // A completar por el alumno

  printf("Después del llamado: \n");
  for (int i = 0; i < N; i++)
    printf("%d\n", arreglo[i]);


  return 0;
}
