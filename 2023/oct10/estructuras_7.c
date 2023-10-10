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

  struct perrro bobi1 = {20, "Luke"};
  struct perrro bobi2 = {20, "Brownie"};

  printf("bobi1: %d\n", bobi1.edad);
  printf("bobi1: %s\n", bobi1.nombre);
  printf("%s\n", bobi2.nombre);


  return 0;
}
