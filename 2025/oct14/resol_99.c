#include <stdio.h>

struct domicilios
{
  char calle[30];
  int numero;
  char ciudad[30];

};

struct alumnos
{
  char nombre[30];
  int legajo;
  struct domicilios domicilio;

};

int main(void){

  struct alumnos alumno;
  printf("\nIngrese el nombre del alumno: ");
  scanf("%s", alumno.nombre);

  do
  {
    printf("\nIngrese el legajo del alumno: ");
    scanf("%d", &alumno.legajo);

  } while (alumno.legajo <=0 );


  printf("\nIngrese la calle del alumno: ");
  scanf("%s", alumno.domicilio.calle);



  do
  {
    printf("\nIngrese el nro de calle del alumno: ");
    scanf("%d", &alumno.domicilio.numero);
  } while (alumno.domicilio.numero <=0);

  struct alumno_t curso[TAM];

  for (int i = 0; i < TAM; i++){
    do
    {
      printf("\nIngrese el nro de calle del alumno: ");
      scanf("%d", &curso[i].domicilio.numero);
    } while (curso[i].domicilio.numero <=0);
  }


  printf("\nIngrese la ciudad del alumno: ");
  scanf("%s", alumno.domicilio.ciudad);
  printf("\nDatos del alumno: ");
  printf("\nNombre: %s", alumno.nombre);
  printf("\nLegajo: %d", alumno.legajo);
  printf("\nDomicilio: %s %d, %s", alumno.domicilio.calle,alumno.domicilio.numero,alumno.domicilio.ciudad );

}
