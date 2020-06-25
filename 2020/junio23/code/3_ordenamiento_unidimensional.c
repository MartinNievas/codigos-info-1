#include <stdio.h>
#define TAM 3

int main(void){

  int arreglo_dni[TAM];
  float arreglo_promedio[TAM];
  int dni;
  float prom;
  int i, j;

  // Ingresamos el DNI y el promedio
  for (i = 0; i < TAM; i++){
    // Validamos el número ingresado
    do {
      printf("Ingrese el DNI[%d]: ", i);
      scanf("%d", &dni);
    } while (dni < 0);

    arreglo_dni[i] = dni;

    // Validamos el número ingresado
    do {
      printf("Ingrese el promedio[%d]: ", i);
      scanf("%f", &prom);
    } while (prom < 0. || prom > 10.);

    arreglo_promedio[i] = prom;
  }


  printf("Previo a ordenar\nDNI\tpromedio\n");
  for (i = 0; i < TAM; i++){
    printf("%d\t%f\n", arreglo_dni[i], arreglo_promedio[i]);
  }

  // Ordenar por número de DNI (menor a mayor)
  float prom_temp;
  int dni_temp;

  for (i = 0; i < TAM; i++){
    for (j = 0; j < TAM-1; j++){
      if (arreglo_dni[j] > arreglo_dni[j+1]){
        //Tengo que intercambiar en los dos arreglos

        // Intercambio dni
        dni_temp = arreglo_dni[j];
        arreglo_dni[j] = arreglo_dni[j+1];
        arreglo_dni[j+1] = dni_temp;

        // Intercambio promedio
        prom_temp = arreglo_promedio[j];
        arreglo_promedio[j] = arreglo_promedio[j+1];
        arreglo_promedio[j+1] = prom_temp;
      }
    }
  }

  printf("Luego de ordenar\nDNI\tpromedio\n");
  for (i = 0; i < TAM; i++){
    printf("%d\t%f\n", arreglo_dni[i], arreglo_promedio[i]);
  }

  return 0;
}
