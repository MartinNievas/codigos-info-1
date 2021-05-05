#include <stdio.h>
// En el libro D&D 8va, unidad 2.6

int main(void) {

  int contrasenia = 1234;
  int user_pass;
  // if (condición)
  // a ==  b -> son iguales
  printf("Ingrese la contraseña: ");
  scanf("%d", &user_pass);

  if (user_pass == contrasenia){
    printf("La contraseña es válida\n");
  }
  // a != b -> sean distintos
  if (user_pass != contrasenia){
    printf("Contraseña no válida\n");
  }

  if (user_pass == contrasenia){
    printf("La contraseña es válida\n");
  } else {
    printf("Contraseña no válida\n");
  }


  return 0;
}
