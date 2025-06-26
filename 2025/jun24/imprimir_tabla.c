#include <stdio.h>

void ingresar_num_determinar_par(void);
void ingresar_dos_num_y_sumar(void);

int main(void) {

  for (int i = 0; i < 10; i++)
    ingresar_num_determinar_par();

  return 0;
}

void ingresar_num_determinar_par(void){

  int valor;
  printf("Ingrese un número: ");
  scanf("%d", &valor);

  if (valor % 2 == 0){
    printf("Es par!\n");
  } else {
    printf("Es impar!\n");
  }
}
