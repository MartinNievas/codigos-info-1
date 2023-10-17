
#include <stdio.h>

struct alumno {
  int legajo;
  char nombre [20];
  char apellido [20];
  char curso [3];
  int notas [4];
  float promedio;
  char estado;
};

void cargar_datos(struct alumno *alumos, int tam);
void calcular_promedios_y_estados(struct alumno *alumos, int tam);
void imprimir_arreglo(struct alumno *alumos, int tam);

int main(int argc, char *argv[]) {

  struct alumno al[TAM];
  float sumaprom = 0;

  cargar_datos(al, TAM);
  calcular_promedios_y_estados(al, TAM);
  imprimir_arreglo(al, TAM);


  return 0;
}

