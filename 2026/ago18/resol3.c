
// quiroga y sol 
#include <stdio.h>

void convertirDias (int totalDias){
  int i = 0, xd= 0;

  while ( totalDias >= 7){
    totalDias = totalDias - 7;
    i++;
  }

  while ( totalDias > 0) {
    totalDias = totalDias - 1;
    xd++;
  }


  printf("Son %d semanas y %d dias\n", i, xd);
}

int main(void) {
  int dias;

  printf("Ingrese una cantidad de dìas: ");
  scanf("%d", &dias);

  convertirDias (dias);

  return 0;
}


