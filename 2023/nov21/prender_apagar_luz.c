#include <stdio.h>
// Escribir en un archivo

int main(void) {

  FILE *cfPtr;

  // Abrir el archivo
  cfPtr = fopen("/sys/class/backlight/intel_backlight/brightness", "w+");
  //cfPtr = fopen("/sys/class/leds/asus::kbd_backlight/brightness", "w+");

  // Si no se abrió corréctamente, imprime el mensaje y termina
  if ( cfPtr  == NULL) {
    puts("El archivo no puede ser abierto\n");
  } else {
    printf("Archivo abierto\n");

    int valor;

    do {
      printf("Ingrese un número entre 0 y 3: ");
      scanf("%d", &valor);
    } while (valor < 100 || valor > 7500);

    fprintf(cfPtr, "%d", valor);

    fclose(cfPtr);
  }
}



