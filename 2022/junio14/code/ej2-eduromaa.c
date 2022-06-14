#include <stdio.h>
// Tengo dos pulsadores y quiero controlar 2 motores
// Cuanto presione el pulsador izquierdo, quiero que frene, vuelva atrás una distancia
// gire un ángulo hacia la derecha (cualquiera) y continúe hacia adelante

int main(void) {
  int p1, p2;
  int motor1 = 0, motor2 = 0;

  scanf("%d", &p1);
  scanf("%d", &p2);


  printf("MOTOR1 (0)\n"); // control motor1 con cierta velocidad (-100,100)
  printf("MOTOR2 (0)\n"); // control motor2 con cierta velocidad (-100,100)

  return 0;
}
