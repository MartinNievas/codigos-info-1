//do-while 1
int nota = 1;

do {
  printf("Ingrese una nota en un rango del 1 al 10: ");
  scanf("%d" , &nota);
} while(nota < 1 || nota > 10);

printf("La nota ingresada es: %d" , nota);

//lisandro y luis

#include <stdio.h>

int main(int argc, char *argv[]) {
  int notas;
  do{
    printf("Ingrese una nota: ");
    scanf("%d", &notas);
  } while(notas<=1 || notas>=10);


  return 0;
}

//2
int num;
int convertir;
int far;
int cel;

do{
  printf("\nIngrese 1 para conversion de Celcius a Fahrenheit");
  printf("\nIngrese 2 para conversion de Fahrenheit a Celcius");
  printf("\nIngrese 3 para salir\n");
  scanf("%d" , &num);

  switch(num){
    case 1:
      printf("Ingrese la temperatura que desea convertir: ");
      scanf("%d" , &convertir);
      far = 273 + convertir;
      printf("La temperatura de celcius a fahrenheit es: %d\n" , far);
      break;
    case 2:
      printf("Ingrese la temperatura que desea convertir: ");
      scanf("%d" , &convertir);
      cel = convertir - 273;
      printf("La temperatura de fahrenheit a celcius es: %d\n" , cel);
      break;
    default:
      printf("Numero no valido, intente de nuevo.\n\n");
      break;
  }

} while(num !=3);

// Santino Ariatello
int main(){
  int op;
  float temperatura, resultado;
  printf("Bienvenido al conversor de temperaturas.");
  printf("\nDadas las siguientes opciones: \n1. Celsius a Fahrenheit. \n2. Fahrenheit a Celsius. \n3. Salir.");
  do{
    printf("\n\nIngrese una opción: ");
    scanf("%d", &op);
    switch(op){
      case 1:
        printf("\nIngrese la temperatura en grados Celsius (se admiten hasta 2 decimales): ");
        scanf("%f", &temperatura);
        resultado = (temperatura * (9./5)) + 32.;
        printf("\n%.2f grados Celsius equivalen a %.2f grados Fahrenheit.", temperatura, resultado);
        break;
      case 2:
        printf("\nIngrese la temperatura en grados Fahrenheit (se admiten hasta 2 decimales): ");
        scanf("%f", &temperatura);
        resultado = (temperatura - 32) * 5/9.;
        printf("\n%.2f grados Fahrenheit equivalen a %.2f grados Celsius.", temperatura, resultado);
      case 3:
        printf("\nSaliendo del programa...");
    }
  } while(op!=3);
  return 0;
}

//lisandro y luis
#include <stdio.h>

int main(int argc, char *argv[]) {
  int opcion;
  float temp;
  printf("1-Celsius a Fahrenheit\n");
  printf("2-Fahrenheit a Celsius\n");	
  printf("3-Salir\n");

  do{
    scanf("%d", &opcion);
    if(opcion==1){
      printf("Ingrese la temperatura en celsiuis: ");
      scanf("%f", &temp);
      printf("La temperatura en fahrenheit es: %.2f \n", temp * (9./5) + 32);}
    if(opcion==2){
      printf("Ingrese la temperatura en fahrenheit: ");
      scanf("%f", &temp);
      printf("La temperatura en celsius es: %.2f \n", (temp - 32) * (5./9));}
    if(opcion<1 || opcion>3)
      printf("Opcion no valida, ingrese una opcion valida\n");
  } while(opcion!=3);



  return 0;
}


