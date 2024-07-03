//Castro vico
#include <stdio.h>

// Prototipo de función
// Declaración
int ingresar_opcion(void);

int main(void)
{
  int opcion;
  int ingresar_opcion(void);
  opcion = ingresar_opcion();
  printf("Usted ingresó la opción: %d\n", opcion);
  return 0;
}

int ingresar_opcion(void)
{
  int op;
  printf("1) Suma\n2) Resta\n3) Salir\n");
  printf("Ingrese una opción: ");
  scanf("%d", &op);
  while(op < 1 || 3 < op  ){
    printf("esta fuera del rango entre 1 y 3 ingrese nuevamente\n");
    scanf("%d", &op);
  }
  return op;
}
