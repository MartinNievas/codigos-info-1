#include <stdio.h>

struct libro {
  char nombre[30];
  int chapters[10];
  unsigned int cod_barra;
  float precio;
};

int main(void) {

  struct libro libro_1;
  float * pprecio;
  pprecio = &libro_1.precio;


  printf("Ingrese el nombre: ");
  scanf("%s", libro_1.nombre);
  printf("Ingrese el precio: ");
  scanf("%f", &libro_1.precio);
  for (int i = 0; i < 10; i++){
    printf("Ingrese el capítulo[%d]: ", i);
    scanf("%d", &libro_1.chapters[i]);
  }

  struct libro biblioteca[10];
  // Cargar los 10 libros
  for (int i = 0; i < 10 ; ++i){
    printf("Ingrese el nombre: ");
    scanf("%s", biblioteca[i].nombre);
    printf("Ingrese el precio: ");
    scanf("%f", &biblioteca[i].precio);

    for (int j = 0; j < 10; j++){
      printf("Ingrese el capítulo: ");
      scanf("%d", &biblioteca[i].chapters[j]);
    }
  }

  struct libro *plibro;
  plibro = &libro_1;
  printf("Ingrese el nombre: ");
  scanf("%s", plibro->nombre);
  scanf("%s", (*plibro).nombre);
  printf("Ingrese el precio: ");
  scanf("%f", &plibro->precio);

  struct libro *pbib;
  pbib = biblioteca;

  for (int i = 0; i < 10; i++){
    printf("Ingrese el nombre: ");
    scanf("%s", &(pbib+i)->nombre[0]);
    // scanf("%s", (*(pbib+i)).nombre);
    // scanf("%s", pbib[i].nombre);
    // scanf("%s", i[pbib].nombre);
    printf("Ingrese el precio: ");
    scanf("%f", &(pbib+i)->precio);
  }

  return 0;
}
