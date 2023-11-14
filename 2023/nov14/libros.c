#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char nombre[40];
  int anio_nacimiento;
}autor_t;

typedef struct libro{
  char nombre[40];
  int cant_paginas;
  int cant_capitulos;
  int* paginas_por_capitulo;
  float precio;
  autor_t datos_autor;
}libro_t;

int main(void) {

  libro_t bib[10];
  int i;

  for (i = 0; i < 3; i++){
    printf("Nombre: ");
    scanf(" %[^\n]s", bib[i].nombre);

    printf("cant capítulos: ");
    scanf("%d", &bib[i].cant_capitulos);

    bib[i].paginas_por_capitulo = malloc(bib[i].cant_capitulos * sizeof(int));

    for (int j = 0; j < bib[i].cant_capitulos; j++){
      printf("Ingrese la cantidad de página en el cap %d: ", j);
      scanf("%d", &bib[i].paginas_por_capitulo[j]);
    }

  }

  return 0;
}
