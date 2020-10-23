#include <stdio.h>

typedef struct {
  int cont;
  char name[20];
}entrada_t;

void incrementar(entrada_t*);
void incrementar_todos(entrada_t*,int);

int main(void) {

  // Versión una variable
  int temp;
  int *p_temp;
  //_____________________
  // temp |  X  |  0xfa0
  //      |     |  0xfa1
  //
  p_temp = &temp;
  //p_temp|0xfa0|  0xfc0
  //      |     |  0xfc1

  temp = 10;
  //_____________________
  // temp |  10 |  0xfa0
  //      |     |  0xfa1

  *p_temp = 10;
  //_____________________
  // temp |  10 |  0xfa0
  //      |     |  0xfa1
  //
  //p_temp|0xfa0|  0xfc0
  //      |     |  0xfc1

  // Versión una estructura
  entrada_t entrada1;
  entrada_t *pe;
  pe = &entrada1;
  // entrada1.cont = 10;
  //(*pe).cont = 10;
  pe->cont = 10;

  // Versión arreglo de estructuras
  entrada_t arreglo_entradas[2];
  entrada_t *pae;
  pae = arreglo_entradas;
  // arreglo_entradas[0].cont = 10;
  // (*pae).cont = 10;
  pae->cont = 10;
  // arreglo_entradas[1].cont = 20;
  // (*(pae+1)).cont = 20;
  (pae+1)->cont = 20;

  /** printf("Ingrese cont: "); */
  /** scanf("%d", &entrada1.cont); */
  printf("Ingrese el nombre: ");
  scanf("%s", entrada1.name);

  printf("%s: %d\n", entrada1.name, entrada1.cont);

  // Incrementar un solo elemento
  printf("Antes de incrementar: %d\n", pae->cont);
  incrementar(pae);
  printf("Desp de incrementar: %d\n", pae->cont);

  // Incrementar un todos los elementos
  for (int i = 0; i < 2; i++)
    printf("%d\t", (pae+i)->cont);
  printf("\n");
  incrementar_todos(pae, 2);
  for (int i = 0; i < 2; i++)
    printf("%d\t", (pae+i)->cont);
  printf("\n");


  return 0;
}

void incrementar(entrada_t *entry){
  entry->cont++;
}

void incrementar_todos(entrada_t *entry, int cant){

  for (int i = 0; i < cant; i++){
   // (*(entry+i)).cont++;
   // (entry+i)->cont++;
   entry[i].cont++; // algo[i] <==> *(algo+i)
  }

}
