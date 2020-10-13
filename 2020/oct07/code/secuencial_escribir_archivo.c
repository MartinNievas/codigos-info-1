#include <stdio.h>
struct ejemplo {
  char nombre[10];
  char apellido[10];
  int id;
} ;

int main(void) {

  FILE *cfPtr;

  struct ejemplo persona;

  cfPtr = fopen("base_datos.txt", "r");
  fscanf(cfPtr, "%s\t%s\t%d", persona.nombre, persona.apellido, &persona.id);
  printf("%s\t%s\t%d\n", persona.nombre, persona.apellido, persona.id);

  cfPtr = fopen("base_datos.txt", "w");

  if ( cfPtr  == NULL) {
    puts("El archivo no puede ser abierto\n");
  } else {
    printf("Archivo abierto\n");

    printf("Ingrese el nombre apellido e id: ");
    scanf("%10s%10s%d", persona.nombre, persona.apellido, &persona.id);

    // stdin FEOF
    // Linux Ctrl-D
    // Win   Ctrl-Z
    while ( !feof(stdin) ) {

      fprintf(cfPtr, "%s_%s_%d\n", persona.nombre, persona.apellido, persona.id);
      printf("Ingrese el nombre apellido e id: ");
      scanf("%10s%10s%d", persona.nombre, persona.apellido, &persona.id);

    }
    fclose(cfPtr);
  }
}



