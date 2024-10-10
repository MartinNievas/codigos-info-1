#include <stdio.h>

struct location {
  char calle[30];
  int altura;
};

struct persona {
  int edad;
  struct location lugar_donde_vive;
};

struct perrro {
  int edad;
  char nombre[20];
  float altura;
  struct location lugar_donde_vive;
};

int main(void) {

  struct perrro bobi[10];

  for (int i = 0; i < 10; i++){
    printf("Ingrese el nombre: ");
    scanf("%s", bobi[i].nombre);
    printf("Ingrese edad: ");
    scanf("%d", &bobi[i].edad);
  }


  return 0;
}
