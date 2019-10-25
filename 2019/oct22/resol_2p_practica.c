#include <stdio.h>
#define N 5

typedef struct nadador {
  int edad;
  int num;
  int min;
  int seg;
  int seg_totales;
}nadador_t;

void  cargar_nadadores(struct  nadador *p, int n);
int  validar_numero(void);
void  ordenar_tiempo_mayor_menor(struct  nadador *p, int n);

int main(void)
{

  nadador_t nadadores[N];
  int n, i;

  /** Ingresar cantidad */
  do {
    printf("Ingrese la cantidad de nadadores (entre 0 y %d): ", N);
    scanf("%d", &n);
  } while (n > N || n <= 0);

  cargar_nadadores(nadadores, n);

  ordenar_tiempo_mayor_menor(nadadores, n);

  printf("Todos los corredores ordenados:\n");
  printf("Número\t\tTiempo\t\tedad\n");

  for (i = 0; i < n; i++)
    printf("%d\t\t%d:%d\t\t%d\n", nadadores[i].num, nadadores[i].min, nadadores[i].seg, nadadores[i].edad);

  printf("Los tres primeros:\n");

  for (i = 0; i < 3; i++)
    printf("%d\t\t%d:%d\t\t%d\n", nadadores[i].num, nadadores[i].min, nadadores[i].seg, nadadores[i].edad);

  return 0;
}

void  cargar_nadadores(struct  nadador *p, int n){

  int i;

  for (i = 0; i < n; i++)
  {
    printf("Cargando el nadador [%d]\n", i+1);
    printf("Ingrese la edad: ");
    scanf("%d", &(p+i)->edad);
    printf("Ingrese minutos: ");
    scanf("%d", &(p+i)->min);
    printf("Ingrese segundos: ");
    scanf("%d", &(p+i)->seg);

    (p+i)->seg_totales = (p+i)->seg + (p+i)->min * 60;

    (p+i)->num = validar_numero();
  }
}

int  validar_numero(void){
  int num;

  do {
    printf("Ingrese el número del corredor: ");
    scanf("%d", &num);
  } while (num > 2000 || num < 1001);

  return num;
}

void  ordenar_tiempo_mayor_menor(struct  nadador *p, int n){

  nadador_t temp;
  int i, j;

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n-1; j++)
    {
      if ((p+j)->seg_totales > (p+j+1)->seg_totales) 
      {
        temp = *(p+j);
        *(p+j) = *(p+j+1);
        *(p+j+1) = temp;
      }
    }
  }

}
