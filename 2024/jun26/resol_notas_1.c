#include <stdio.h>

int main(int argc, char *argv[]) {

  int cant, notas, notas2, contador;
  float prom;
  contador = 10;
  notas2 = 0;
  cant = 0;

  do{
    printf("ingrese %d notas\nNota %d: ", contador, cant+1);
    scanf("%d", &notas);
    notas2 += notas;
    cant ++;
    contador --;
  }while(cant < 10);
  prom = notas2 / 10.0;
  printf("su promedio entre las 10 notas es : %.2f", prom);
  return 0;
}
