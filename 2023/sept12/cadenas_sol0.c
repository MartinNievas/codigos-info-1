#include <stdio.h>
int main(void){
  char palabras[10][60];
  for(int i = 0; i < 10; i++){
    printf("Ingrese una frase: ");
    scanf("%s", palabras[i]);
  }
  for (int i = 0; i < 10; i++)
  {
    printf("Palabra [%d]: %s\n", i,palabras[i]);
  }

  return 0;
}
