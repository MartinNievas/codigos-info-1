#include <stdio.h>

void saludo_curso(void){
  int curso;
  printf("Ingrese su curso: ");
  scanf("%d", &curso);
  printf("Hola 1R%d\n", curso);
}

int main(void) {

  int cont = 0;
  while(cont < 4){
    saludo_curso();
    cont+=1;
  }

  return 0;
}
