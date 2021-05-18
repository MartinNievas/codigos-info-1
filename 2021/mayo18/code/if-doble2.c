#include <stdio.h>

int main(void) {

  unsigned char contador;

  printf("Ingrese el valor de contador: ");
  scanf("%hhu", &contador);

  if (contador < 200){
    printf("contador es menor!\n");
  } else {
    printf("contador es mayor!\n");
  }

  printf("Contador vale %d\n", contador);


  return 0;
}
