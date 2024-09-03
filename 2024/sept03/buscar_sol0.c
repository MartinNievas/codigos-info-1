
//Satiago Cañas ingresar y buscar
#include <stdio.h>
#define TAM 4

#define RANGOMINIMO -100
#define RANGOMAXIMO 100
/* Resolver: */
/* 1. Ingresar TAM elementos en un arreglo de enteros */
/* - Solo se permiten número entre: (-100,100) */
/* 2. Solicitar al usuario un número para buscar*/
/* 3. Buscar ese número dentro del arreglo. Si existe, indicar su posición (índice) */
/*   sino, indicar que no existe */

void cargar_y_validar_elementos(int arreglo[], int cantidad);
int buscar(int numero, int arreglo[], int cantidad);
int validar_ingreso(int ingreso, int rango1, int rango2);

int main(void) {

  int arreglo[TAM], numero;

  // Ingresar los TAM elementos
  cargar_y_validar_elementos(arreglo, TAM);

  // Solicitar al usuario el número a buscar
  printf("Ingrese el número a buscar: ");
  scanf("%d", &numero);

  // Buscar el número
  int res = buscar(numero, arreglo, TAM);
  // Si existe: imprimir el índice, no existe: imprimir un -1

  if(res == -1){
    printf("El numero que ingreso no se encuentra en el arreglo: %d",res);
  }else{
    printf("El numero %d se Encontro en la direccion [%d].",numero ,res);
  }

  return 0;
}


void cargar_y_validar_elementos(int arreglo[], int cantidad){
  int addres_arrglo = 0;

  printf("Ingrese %d Elmentos\n",cantidad);

  do{
    do{

      printf("[%d]: ",addres_arrglo);

      scanf("%d",&arreglo[addres_arrglo]);

      if(validar_ingreso(arreglo[addres_arrglo], RANGOMINIMO, RANGOMAXIMO)){
        break;

      }else{
        printf("valor fuera del rango, volver a ingresar.\n");
      }

    } while(1);


    addres_arrglo++;
  } while(addres_arrglo < cantidad);
}
int validar_ingreso(int ingreso, int rango1, int rango2){
  if(ingreso >= rango1 && ingreso <= rango2){
    return 1;
  }else
    return 0;
}

int buscar(int numero, int arreglo[], int cantidad){
  for(int i = 0; i < cantidad ;i++ ){

    if(numero == arreglo[i]){
      return i;
    }
  }
  return -1;
}

