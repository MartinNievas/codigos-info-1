// Cordoba Axel 411193

#include <stdio.h>

int ingreso_y_validacion(void);

int main(void) {

  int numero_positivo;

  numero_positivo = ingreso_y_validacion();

  printf("El nùmero es: %d\n",numero_positivo);

  return 0;
}

int ingreso_y_validacion(void){

  int numero;

  do{
    printf("Ingrese un nùmero entre 10 y 100: ");
    scanf("%d",&numero);

    if(numero<10||numero>100)
    {
      printf("Nùmero no valido\n");
    }
  }while(numero<10||numero>100);

  return numero;
}


