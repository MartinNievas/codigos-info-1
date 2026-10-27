#include<stdio.h>
#include<stdlib.h>
#define N 100
typedef struct {
  char destino [80];
  unsigned int codigo ;
  unsigned int pasajeros ;
  float precio ;
} vuelo_t ;

void ingresarTam( int *tam){
  int n;

  do {
    printf("Ingrees n: ");
    scanf("%d", &n);
  } while (n < 0 || n > N);

  *tam = n;
}

void cargarVuelos ( vuelo_t * vuelos , int tam ){

  for(int i = 0; i < tam ; i+=1){
    printf("Ingrese destino: ");
    scanf("%s", vuelos[i].destino);

    printf("Ingrese código: ");
    scanf("%u", &vuelos[i].codigo);

    do{
      printf("Ingrese cantidad pasajeros: ");
      scanf("%u", &vuelos[i].pasajeros);
    }while(vuelos[i].pasajeros < 0);

    do{
      printf("Ingrese precio: ");
      scanf("%f", &vuelos[i].precio);
    }while(vuelos[i].precio < 0);
  }

}

vuelo_t * reservarVuelos( int tam ){
  vuelo_t *p;
  p = malloc(tam * sizeof(vuelo_t));
  return p;
}

int contarBajaOcupacion ( vuelo_t * arreglo , int tam ){
  int contador = 0;
  for (int i = 0; i < tam; i++){
    if( arreglo[i].pasajeros < 50)
      contador++;
  }
  return contador;
}

void copiarVuelosBajaOcupacion( vuelo_t * vuelos , int tam , vuelo_t * bajaOcupacion ){

  int j = 0;
  for(int i = 0; i < tam; ++i){
    if (vuelos[i].pasajeros < 50){
      bajaOcupacion[j] = vuelos[i];
      j++;
    }

  }

}
void imprimirBajaOcupacion( vuelo_t * bajaOcupacion, int cantidad ){

  for( int i = 0; i < cantidad ; i+=1){
    printf("Destino: %s\n", bajaOcupacion[i].destino);
    printf("Código: %u\n", bajaOcupacion[i].codigo);
    printf("Pasajeros: %u\n", bajaOcupacion[i].pasajeros);
    printf("Precio: %f\n", bajaOcupacion[i].precio);
    printf("\n");
  }

}


int main ( void )
{
  int tam ;
  int cantidad ;
  int i ;
  vuelo_t * vuelos ;
  vuelo_t * bajaOcupacion ;
  // Requisito 1
  ingresarTam(&tam);

  // Requisito 2
  vuelos = reservarVuelos(tam);
  if(vuelos == NULL){
    printf("ERROR\n");
    return -1;
  }

  // Completar
  // Requisito 3
  cargarVuelos( vuelos, tam);

  // Requisito 4
  // Completar
  cantidad = contarBajaOcupacion(vuelos, tam);
  printf("\n Cantidad de vuelos con menos de 50 pasajeros : %d\n",cantidad);
  // Requisito 5
  // Completar
  bajaOcupacion = malloc(cantidad * sizeof(vuelo_t));
  if(bajaOcupacion == NULL){
    printf("ERROR\n");
    return -1;
  }

  // Requisito 6
  copiarVuelosBajaOcupacion(vuelos, tam, bajaOcupacion);

  // Requisito 7
  imprimirBajaOcupacion(bajaOcupacion, cantidad);
  return 0;
}
