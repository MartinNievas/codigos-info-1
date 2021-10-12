#include <stdio.h>
// Para resolver en clase
//
// El archivo contiene las cantidad de transacciones realizadas en la red
// Binance Smart Chain.
// Datos de: https://bscscan.com/chart/tx
//
// Buscar el máximo en transacciones diarias
// Buscar el máximo del 2020
// Imprimir la fecha y la cantidad de operaciones para ambos casos

int main(void) {

  FILE *cfPtr;

  cfPtr = fopen("BSC_daily_transactions.csv", "r");

  char date_UTC[20];
  unsigned int date_unix;
  unsigned int id;

  // date_UTC[7] == '1';

  if ( cfPtr  == NULL) {
    puts("El archivo no puede ser abierto\n");
  } else {
    printf("Archivo abierto\n");

    fscanf(cfPtr, "%8s\t%u\t%d\n", date_UTC, &date_unix, &id);

    while ( !feof(cfPtr) ) {
      printf("%8s\t%u\t%d\n", date_UTC, date_unix, id);
      fscanf(cfPtr, "%s\t%u\t%d\n", date_UTC, &date_unix, &id);
      // completar
    }

    fclose(cfPtr);
  }
}
