#include <stdio.h>
#define TAM 4
// 1. Pedir al usuario la cantidad de paquetes a cargar y validar la cantidad
// 2. Cargar el arreglo de paquetes mediante la función "cargar_paquetes"
//   - En la carga determinar la categoría del paquete según:
//     - peso < 100: categoría 'A'
//     - peso >= 100: categoría 'B'
// 3. Imprimir todos los paquetes
// 4. Imprimir los paquetes de la categoría A y B mediante las funciones correspondientes
// 5. Copiar los paquetes dentro de la categoría 'B' al arreglo paquetes_b

typedef struct {
  unsigned int id;
  float peso;
  char categoria;

  struct{
    char origen[30];
    char destino[30];
  }description;

} paquete_t;


void cargar_paquetes(paquete_t*, int);
void imprimir_paquetes(paquete_t*, int);
void imprimir_paquetes_categoria_B(paquete_t*, int);

// En estas funciones utilizar aritmética de puntero
void imprimir_paquetes_categoria_A(paquete_t*, int);
// paquete[i]
// *(paquetes+i)
// (paquetes+i)->peso
void copiar_paquetes(paquete_t*, paquete_t*);

int main(void) {

  int cantidad = -1;
  paquete_t paquetes[TAM];
  paquete_t paquetes_b[TAM];

  // Validar cantidad

  // Cargar paquetes
  cargar_paquetes(paquetes, cantidad);

  // Imprimir paquetes en categoría A
  imprimir_paquetes_A(paquetes, cantidad);

  // Imprimir paquetes en categoría B
  imprimir_paquetes_B(paquetes, cantidad);

  // Copiar los paquetes de la categoría B al arreglo paquetes_b
  copiar_paquetes(paquetes, paquetes_b);

  // Imprimir paquetes en el arreglo paquetes_b
  imprimir_paquetes(paquetes_b, cantidad);

  return 0;
}
