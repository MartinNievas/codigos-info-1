/*
 * Ejercicio 4 - Estadisticas
 * Tema: arreglos + punteros + funciones por referencia.
 *
 * Implementar una funcion que reciba un arreglo de enteros
 * y calcule mediante parametros de salida:
 *   - suma
 *   - promedio
 *   - minimo
 *   - maximo
 */

#include <stdio.h>


void estadisticas(int v[], int n,
    int *suma, float *promedio,
    int *minimo, int *maximo){

  *suma = 0;
  for (int i = 0; i < n; i++){
    *suma += *(v+i); 
  }

  *promedio = *suma/(float) n;

  *minimo = *v;
  for (int i = 1; i < n; i++){
    if (*minimo > *(v+i))
      *minimo = *(v+i);
  }

  *maximo = *(v);
  for (int i = 1; i < n; i++){
    if (*maximo < *(v+i))
      *maximo = *(v+i);
  }
}

int main(void)
{
  int v[] = {8, 4, 15, 3, 10, 7};
  int n = sizeof(v) / sizeof(v[0]);

  int suma, minimo, maximo;
  float promedio;

  estadisticas(v, n, &suma, &promedio, &minimo, &maximo);

  printf("Suma: %d\n", suma);
  printf("Promedio: %.2f\n", promedio);
  printf("Minimo: %d\n", minimo);
  printf("Maximo: %d\n", maximo);

  return 0;
}
