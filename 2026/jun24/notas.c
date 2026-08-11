#include <stdio.h>

int main(void) {

  int nota;
  float prom_parcial = 0;
  float prom_total = 0;
  for (int i = 0; i < 5; i++){
    prom_parcial = 0;
    for (int j = 0; j < 3; j++){
      printf("Ingrese la nota: ");
      scanf("%d", &nota);
      prom_parcial+=nota;
    }
    prom_parcial/=3;
    printf("El promedio es: %f\n", prom_parcial);
    prom_total+=prom_parcial;
  }
  prom_total/=5;
  printf("Promedio total = %f\n", prom_total);

  return 0;
}
