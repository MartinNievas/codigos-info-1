#include <stdio.h>

int contar_vocales(char *palabra){
  int cont = 0;

  for (int i = 0; palabra[i] != 0 ; i++){
    if(
        palabra[i] == 'a' ||
        palabra[i] == 'e' ||
        palabra[i] == 'i' ||
        palabra[i] == 'o' ||
        palabra[i] == 'u' ||
        palabra[i] == 'A' ||
        palabra[i] == 'E' ||
        palabra[i] == 'I' ||
        palabra[i] == 'O' ||
        palabra[i] == 'U' ){
      cont++;
    }
  }
  return cont;
}

int main(void) {

  char palabra[100] = {0};

  printf("Ingrese texto: ");
  scanf("%[^\n]s", palabra);

  int vocales = contar_vocales(palabra);

  printf("Cantidad vocales: %d\n", vocales);

  return 0;
}
