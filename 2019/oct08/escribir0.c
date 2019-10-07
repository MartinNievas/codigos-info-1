#include <stdio.h>

int main(void)
{
  FILE *cfPtr; 

  if (( cfPtr = fopen("clientes.txt", "w") ) == NULL) 
  {
    puts("El archivo no puede ser abierto");
  }
  else 
  {
    puts("Ingrese el número de la cuenta, el nombre y el saldo");
    puts("En linux presione <ctrl-d> para terminar");
    puts("En Windows presione <ctrl-z> y luego enter para terminar");
    printf("%s", "? ");

    int cuenta; 
    char nombre[30]; 
    double saldo; 

    scanf("%d%29s%lf", &cuenta, nombre, &saldo);

    while ( !feof(stdin) ) {
      fprintf(cfPtr, "%d %s %.2f\n", cuenta, nombre, saldo);
      printf("%s", "? ");
      scanf("%d%29s%lf", &cuenta, nombre, &saldo);
    }

    fclose(cfPtr);
  }
}
