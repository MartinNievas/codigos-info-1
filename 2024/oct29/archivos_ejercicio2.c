#include <stdio.h>
// Para resolver en clase
//
// El archivo contiene las cantidad de transacciones realizadas en la red
// de Ethereum
// Datos de: https://etherscan.io/chart/etherprice
//
// Cantidad de operaciones máximo mínimo del 2022
// Guardar en un archivo la fecha y la cantidad de
// operaciones para ambos casos (salida.txt)

int main(void) {

  FILE *cfPtr;

  cfPtr = fopen("ETH_price_daily.csv", "r");

  char date_UTC[20];
  unsigned int date_unix;
  unsigned int id;

  if ( cfPtr  == NULL) {
    puts("El archivo no puede ser abierto\n");
  } else {
    printf("Archivo abierto\n");

    fscanf(cfPtr, "%8s\t%u\t%d\n", date_UTC, &date_unix, &id);

    while ( !feof(cfPtr) ) {
      printf("%8s\t%u\t%d\n", date_UTC, date_unix, id);
      fscanf(cfPtr, "%s\t%u\t%d\n", date_UTC, &date_unix, &id);
    }

    fclose(cfPtr);
  }
}
