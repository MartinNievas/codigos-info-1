#include <stdio.h>//valentin sanchez 95167

int ingreso_y_validacion(void){
  int numero_positivo;

  do{
    printf("Ingrese el numero:");
    scanf("%d",&numero_positivo);

    if(numero_positivo<=10 || numero_positivo>=100){
      printf("El numero esta afuera del rango, vuelvalo ingresar:\n");
      scanf("%d",& numero_positivo);
    }
  } while(numero_positivo<=10 || numero_positivo>=100);

  return numero_positivo;
}



int main(void) {

  int numero_positivo;

  numero_positivo = ingreso_y_validacion();

  printf("El número es: %d\n", numero_positivo);


  return 0;
}


