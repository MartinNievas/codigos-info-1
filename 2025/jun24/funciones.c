#include <stdio.h>

void ingresar_dos_num_y_sumar(void);
void ingresar_dos_num_y_restar(void);
void ingresar_dos_num_y_multiplicar(void);
void ingresar_dos_num_y_dividir(void);

int main(void) {

  int op;

  do{
    printf("\n---------------------\n1)Suma\n2)Resta\n3)Producto\n4)División\n5)Salir\n");
    printf("Ingrese una operación:");
    scanf("%d", &op);

    switch(op){
      case 1:
        ingresar_dos_num_y_sumar();
        break;
      case 2:
        ingresar_dos_num_y_restar();
        break;
      case 3:
        ingresar_dos_num_y_multiplicar();
        break;
      case 4:
        ingresar_dos_num_y_dividir();
        break;
      case 5:
        printf("Chau\n");
        break;
      default:
        printf("No hace nada capo");
        break;
    }
  }while(op!=5);

  return 0;
}

void ingresar_dos_num_y_sumar(void){
  int a, b;
  int suma = 0;

  printf("Ingrese un número: ");
  scanf("%d", & a);
  printf("Ingrese otro número: ");
  scanf("%d", & b);

  suma = a + b;
  printf("El resultado es: %d", suma);
}
void ingresar_dos_num_y_restar(void){
  int a, b;
  int resta = 0;

  printf("Ingrese un número: ");
  scanf("%d", & a);
  printf("Ingrese otro número: ");
  scanf("%d", & b);

  resta = a - b;
  printf("El resultado es: %d", resta);
}
void ingresar_dos_num_y_multiplicar(void){
  int a, b;
  int producto;

  printf("Ingrese un número: ");
  scanf("%d", & a);
  printf("Ingrese otro número: ");
  scanf("%d", & b);

  producto = a * b;
  printf("El resultado es: %d", producto);
}

void ingresar_dos_num_y_dividir(void){
  int a, b;
  float cociente;

  printf("Ingrese un número: ");
  scanf("%d", & a);
  printf("Ingrese otro número: ");
  scanf("%d", & b);

  cociente = a / (float)b;
  printf("El resultado es: %f", cociente);
}
