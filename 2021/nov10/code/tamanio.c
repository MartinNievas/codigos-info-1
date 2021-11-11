#include <stdio.h>
// ¿Qué tamaño tiene la unión?

union mi_union{
  char letra;
  struct{
    float A;
    char g;
  }mi_estruct;
  char frase[2];
};

int main(void) {


  return 0;
}
