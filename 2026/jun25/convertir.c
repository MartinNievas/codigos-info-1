#include <stdio.h>

int main(void) {
  int num;
  int convertir;
  float far;
  float cel;

  do{
    printf("\nIngrese 1 para conversion de Celcius a Fahrenheit");
    printf("\nIngrese 2 para conversion de Fahrenheit a Celcius");
    printf("\nIngrese 3 para salir\n");
    scanf("%d" , &num);

    switch(num){
      case 1:
        printf("Ingrese la temperatura que desea convertir: ");
        scanf("%d" , &convertir);
        far = (convertir * (9./5) + 32);
        printf("La temperatura de celcius a fahrenheit es: %f\n" , far);
        break;
      case 2:
        printf("Ingrese la temperatura que desea convertir: ");
        scanf("%d" , &convertir);
        cel = (convertir-32)*(5./9);
        printf("La temperatura de fahrenheit a celcius es: %f\n" , cel);
        break;
      case 3:
        printf("Chau\n");
      break;
      default:
        printf("Numero no valido, intente de nuevo.\n\n");
        break;
    }

  } while(num !=3);
  return 0;
}
