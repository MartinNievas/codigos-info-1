#include <stdio.h>
// Los archivos .txt son secuenciales
// Los archivos .dat son aleatorios

int main(void) {

  FILE *fPtr;
  //------------------------------------------------------------
  // Abrir el archivo "no_me_borres.txt" en modo lectura
  fPtr = fopen("no_me_borres.txt", "r");

  // Abrir el archivo "no_me_borres.txt" en modo escritura

  // Abrir el archivo "no_me_borres.txt" en modo lectura y escritura
  // sin borrar el contenido original

  // Crear un archivo "no_me_borres.txt" en modo lectura y escritura
  // Si el archivo existe, descartar su contenido

  // Abrir el archivo "no_me_borres.txt" en modo lectura y escritura
  // donde las escrituras son realizadas al final del archivo

  //------------------------------------------------------------
  // Abrir el archivo "no_me_borres.dat" en modo lectura

  // Abrir el archivo "no_me_borres.dat" en modo escritura

  // Abrir el archivo "no_me_borres.dat" en modo lectura y escritura
  // sin borrar el contenido original

  // Crear un archivo "no_me_borres.dat" en modo lectura y escritura
  // Si el archivo existe, descartar su contenido

  // Abrir el archivo "no_me_borres.dat" en modo lectura y escritura
  // donde las escrituras son realizadas al final del archivo

  return 0;
}
