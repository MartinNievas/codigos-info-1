
// Ejercicio 1 Maxi

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

typedef struct {
  int legajo;
  int nota1;
  int nota2;
  int nota3;
  float promedio;
  char estado;
} alumno_t;


int ingresarTamValidado(int min, int max) {
  int n;
  do{
    printf("Ingrese la cantidad de alumnos (0 - 10): ");
    scanf(" %d", &n);
    if(n > max || n < min)
      printf("\nError\n");
  }while(n > max || n < min);

  return n;

}

int cargarNota(void){
    int nota;
    do{
      printf("\nIngrese la nota: ");
      scanf(" %d", &nota);

      if(nota > 10 || nota < 0)
        printf("\nError");
    }while(nota > 10 || nota < 0);

    return nota;
}

void cargarAlumnos(alumno_t *arr, int cant) {

  for(int i = 0; i<cant; i++){
    printf("\nIngrese el legajo N%d: ", i+1);
    scanf(" %d", &(arr+i)->legajo);

      (arr+i)->nota1 = cargarNota();
      (arr+i)->nota2 = cargarNota();
      (arr+i)->nota3 = cargarNota();
  }

}

void calcularPromedios(alumno_t *arr, int cant) {
  float suma;
  for(int i = 0; i < cant; i++){
    suma = 0;
    suma += (arr+i)->nota1 + (arr+i)->nota2 + (arr+i)->nota3;

    (arr+i)->promedio = suma/3;

    if((arr+i)->promedio >= 8)
      (arr+i)->estado = 'P';

    if((arr+i)->promedio >= 6 && (arr+i)->promedio < 8)
      (arr+i)->estado = 'R';

    if((arr+i)->promedio < 6)
      (arr+i)->estado = 'A';
  }

}


void imprimirPromocionados(alumno_t *arr, int cant) {
  printf("\n-	Alumnos promocionados	-\n");
  for(int i = 0; i < cant; i++){
    if((arr+i)->estado == 'P'){

      printf("\nLegajo %d\nNota1 %d\nNota2 %d\nNota3 %d\nPromedio %.f\nEstado academico %c",
          (arr+i)->legajo,
          (*(arr+i)).nota1,
          (*(arr+i)).nota2,
          (*(arr+i)).nota3,
          (*(arr+i)).promedio,
          (*(arr+i)).estado);
    }
  }

}

int main(void) {

  alumno_t *alumnos;
  int tam;

  tam = ingresarTamValidado(0, TAM);

  alumnos = malloc(tam * sizeof(alumno_t));

  if(alumnos == NULL)
    return -1;
  printf("%d ", tam);

  cargarAlumnos(alumnos, tam);

  calcularPromedios(alumnos, tam);

  imprimirPromocionados(alumnos, tam);

  free (alumnos);
  return 0;
}
