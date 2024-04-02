
#include<stdio.h>

typedef struct{
  unsigned long int id;
  float precio;
  char nombre[300];
}prod_t;

int main(){

  FILE* datos_parseados_TP11;
  FILE* datos_estadisticos;
  prod_t lista, max = {0}, min = {0};

  datos_parseados_TP11 = fopen("datos_parseados.csv", "r");
  datos_estadisticos = fopen("datos_estadisticos.txt", "w");

  if(datos_estadisticos == NULL || datos_parseados_TP11 == NULL){
    printf("Error al abrir el archivo de datos estadisticos\n");
  } else {
    printf("Archivo de datos estadisticos abierto correctamente\n");

    fscanf(datos_parseados_TP11, "%lu,%f,%[^\n]s", &lista.id, &lista.precio, lista.nombre);

    printf("%lu %f %s\n", lista.id, lista.precio, lista.nombre);

    fclose(datos_parseados_TP11);
  }
  return 0;
}
