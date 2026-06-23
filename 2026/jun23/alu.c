#include <stdio.h>

int main(void) {

  int nota = 0;
  int cont_total = 0, cant_aprobados = 0;

  while(nota != -1){
    printf("Ingrese nota: ");
    scanf("%d", &nota);
    if (nota != -1)
      cont_total++;
    if (nota >= 6)
      cant_aprobados++;
  }
  printf("Total: %d\n", cont_total);
  printf("Aprobados: %d\n", cant_aprobados);
  printf("Desaprobados: %% %f\n", (cont_total- cant_aprobados) * 100.0 / cont_total);


  return 0;
}
