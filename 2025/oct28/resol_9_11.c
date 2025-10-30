#include <stdio.h>
#define TAM 3

struct proveedor{
  char nombre[30];
  unsigned int cuit;
};

struct producto{
  char nombre[30];
  float precio;
  struct proveedor pr;
};

int main(void) {

  struct producto prods[TAM];

  for (int i = 0; i < TAM; i+=1){
    printf("Ingrese el nombre del producto: ");
    scanf("%s", prods[i].nombre);

    do{
      printf("Ingrese el precio del producto: ");
      scanf("%f", &prods[i].precio);
    }while(prods[i].precio < 0);

    printf("Ingrese el nombre del proveedor: ");
    scanf("%s", prods[i].pr.nombre);
    printf("Ingrese el cuit del proveedor: ");
    scanf("%d", &prods[i].pr.cuit);
  }

  struct producto mas_caro = prods[0];

  for (int i = 0; i < TAM; i++){
    if(mas_caro.precio < prods[i].precio)
      mas_caro = prods[i];
  }

  printf("Más caro:\n");
  printf("Nombre: %s\n", mas_caro.nombre);
  printf("Precio: %f\n", mas_caro.precio);
  printf("\tProveedor:\n",);
  printf("\tNombre: %s\n", mas_caro.pr.nombre);
  printf("\tCUIT: %u\n", mas_caro.pr.cuit);

  return 0;
}
