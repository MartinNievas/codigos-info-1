#include <stdio.h>
#define TAM 2

struct cliente{
  char apellido[20];
  char nombre[20];
  int numero;
  int dni;
  char calle[20];
  char ciudad[20];
};

int main(int argc, char *argv[]) {
  struct cliente cl[TAM];
  for(int i =0;i< TAM;i++){
    print("Ingrese los datos del cliente %d:",i+1);
    printf("\ningrese el apellido:");
    scanf("%s",cl[i].apellido);
    printf("\ningrese el nombre:");
    scanf("%s",cl[i].nombre);
    printf("\ningrese el numero:");
    scanf("%d",&cl[i].numero);
    printf("\ningrese el dni:");
    scanf("%d",&cl[i].dni);
    printf("\ningrese la calle:");
    scanf("%s",cl[i].calle);
    printf("\ningrese la ciudad:");
    scanf("%s",cl[i].ciudad);
  }
  for(int i =0;i< TAM;i++){
    printf("\n\nApellido:%s",cl[i].apellido);
    printf("\nNombre:%s",cl[i].nombre);
    printf("\nNumero:%d",cl[i].numero);
    printf("\nDni:%d",cl[i].dni);
    printf("\nCalle:%s[]",cl[i].calle);
    printf("\nCiudad:%s",cl[i].ciudad);
  }

  return 0;
}


