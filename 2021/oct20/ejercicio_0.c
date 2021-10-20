#include <stdio.h>
#include <string.h>
// Para resolver en clase
//
// El archivo contiene las cantidad de transacciones realizadas en la red
// Binance Smart Chain.
// Datos de: https://bscscan.com/chart/tx
//
// Buscar el máximo en transacciones diarias
// Buscar el máximo del 2020
// Imprimir la fecha y la cantidad de operaciones para ambos casos


// Esta código es solo una base, pueden modificar todo lo que desee
int main(void) {

  FILE *cfPtr;

  cfPtr = fopen("../oct13/code/BSC_daily_transactions.csv", "r");

  char date_UTC[20];
  unsigned int date_unix;
  unsigned int id;


  if ( cfPtr  == NULL) {
    puts("El archivo no puede ser abierto\n");
  } else {
    printf("Archivo abierto\n");

    fscanf(cfPtr, "%8s\t%u\t%d\n", date_UTC, &date_unix, &id);

    unsigned int max_2020 = id;
    unsigned int max_total = id;
    char fecha_max_2020[20];
    char fecha_max_total[20];

    // Inicializo los máximos
    strcpy(fecha_max_total, date_UTC);
    strcpy(fecha_max_total, date_UTC);

    while ( !feof(cfPtr) ) {

      if (id > max_total){
        max_total = id;
        strcpy(fecha_max_total, date_UTC);
      }

      if (id > max_2020 && date_UTC[7] == '0'){
        max_2020 = id;
        strcpy(fecha_max_2020, date_UTC);
      }

      fscanf(cfPtr, "%s\t%u\t%d\n", date_UTC, &date_unix, &id);
    }

    printf("El máximo global es: %d en  %s\n", max_total, fecha_max_total);
    printf("El máximo de 2020 es: %d en  %s\n", max_2020, fecha_max_2020);

    fclose(cfPtr);
  }
}
