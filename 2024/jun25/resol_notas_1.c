
#include <stdio.h>
//Cipolla Teo
//Notas 
int main(int argc, char *argv[]) {

  int nota;
  int cont = 0;
  float sumatoria = 0;
  float promedio;
  do{
    printf("Ingrese la nota %d: ", cont);
    scanf ("%d", &nota);
    do{
      if (nota < 0 || nota > 10){
        printf("Ingrese la nota %d dentro del rango: ",cont);
        scanf ("%d",&nota);
      }
    }while(nota < 0 || nota > 10 );

    cont += 1;
    sumatoria = sumatoria + nota;
    promedio = sumatoria / cont;
  } while(cont <=9);

  printf("El promedio es: %f", promedio);

  return 0;
}
