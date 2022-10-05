#include <stdio.h>
#define TAM 3
// Completar en base a los comentarios

typedef struct{
  char nombre[30];
  int num;
  float precio;
  int stock;
}parte_t;

// Prototipos
void cargar_elemento(parte_t *, int);
void imprimir_elementos(parte_t *, int);
void ordenar_elementos_precio(parte_t *, int);
void ordenar_elementos_nombre(parte_t *, int);

int main(void) {

  parte_t inventario[TAM];

  // Cargar los datos de cada pieza mediante la función:
  for (int i = 0; i < TAM; i++){
    cargar_elemento(inventario, i);
  }

  // Imprimir el arreglo desordenado
  imprimir_elementos(inventario, TAM);

  // ordenar_elementos_precio(inventario, TAM);

  // Imprimir el arreglo ordenado
  // imprimir_elementos(inventario, TAM);

  // Ordenar por nombre de menor a mayor
  ordenar_elementos_nombre(inventario, TAM);

  // Imprimir el arreglo ordenado por nombre
  imprimir_elementos(inventario, TAM);

  return 0;
}

// Función que recibe la base del arreglo y el índice
// del elemento a cargar
//
// p: puntero a un arreglo de elementos de tipo parte_t
// idx: indice del elemento a cargar
void cargar_elemento(parte_t* p, int idx)
{
  // Utilizando el operador flecha
  printf("Ingrese el precio: ");
  scanf("%f", &(p+idx)->precio);

  printf("Ingrese el nombre: ");
  scanf("%s", (p+idx)->nombre);

  printf("Ingrese el número de pieza: ");
  scanf("%d", &(p+idx)->num);

  printf("Ingrese la cantidad en stock: ");
  scanf("%d", &(p+idx)->stock);
}

// Función que imprime un arreglo de estructuras de tipo parte_t
//
// p: puntero a un arreglo de elementos de tipo parte_t
// tam: cantidad de elementos en el arreglo
void imprimir_elementos(parte_t *p, int tam)
{
  printf("%20s\tprecio\tstock\tnúmero\n", "Nombre");
  for (int i = 0; i < tam; i++){
    printf("%20s\t%f\t%d\t%d\n", p[i].nombre, p[i].precio,
            p[i].stock, p[i].num);
  }
}


// Función que recibe la base del arreglo y ordena los elementos
// en forma decreciente por su precio
//
// p: puntero a un arreglo de elementos de tipo parte_t
// tam: cantidad de elementos en el arreglo
void ordenar_elementos_precio(parte_t *p, int tam)
{

  parte_t temp;
  for (int i = 0; i < tam; i++){
    for (int j = 0; j < tam - 1; j++){
      if ( p[j].precio < p[j+1].precio){
        temp = p[j];
        p[j] = p[j+1];
        p[j+1] = temp;
      }
    }
  }
}


// Alternativas
// if ( (p+j)->precio < (p+j+1)->precio){
// }
// if ( (*(p+j)).precio < (*(p+j+1)).precio){
// }

void ordenar_elementos_nombre(parte_t *p, int tam)
{

  // Busco el menor arreglo
  int min = 1000;
  for (int i = 0; i < tam; i++){
    if (sizeof(p[i].nombre) < min ){
      min = sizeof(p[i].nombre);
    }
  }

  parte_t temp;

  for( int letra = 0; letra < min; letra++){
    for (int i = 0; i < tam; i++){
      for (int j = 0; j < tam - 1; j++){
        if (p[j].nombre[letra] < p[j+1].nombre[letra]){
          temp = p[j];
          p[j] = p[j+1];
          p[j+1] = temp;
        }
      }
    }
  }


}
