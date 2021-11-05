#include <stdio.h>

//Si se cuenta con las siguientes estructuras
struct notas {
  int parcial1;
  int parcial2;
  int final
};

struct estudiante {
  int legajo;
  char nombre[80];
  struct notas info1;
};

struct estudiante_2{
  int legajo;
  char nombre[80];

  struct {
    int parcial1;
    int parcial2;
    int final
  }info1;
};

//y un arreglo de tipo struct estudiante definido en main, complete la función que imprime las notas finales de todo el arreglo
void imprimir_finales(struct estudiante *p, int n)
{

  for (int i = 0; i < n; i++){
    printf("%d\n", (p+i)->info1.final);
    // Orden de precedencia
    printf("%d\n", (*(p+i)).info1.final);
  }
}

void imprimir_final(struct estudiante p)
{
  printf("%d\n", p.info1.final);
}

int main(void) {

  struct estudiante arreglo[10];
  struct estudiante *pest;
  // &arreglo[0] <==> arreglo
  pest = &arreglo[0];
  imprimir_finales(pest,n);
  imprimir_final(arreglo[3]);

  return 0;
}
