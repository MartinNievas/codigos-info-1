#include <stdio.h>
// !Operadores
// Realizar un programa que solicite ingresar las notas de dos parciales.
// Si desaprobó un parcialel programa debe solicitar ingresar la nota del recuperatorio.
// En base a las notas obtenidas calcularel promedio y determinar la condición académica (Promoción mayor 8, desaprobado menor a 6, lo demás aprobado). Solo se permite recuperar un solo parcial. La nota del recuperatorio se promediacon las notas del parcial y est ́a permitido promocionar si recuper ́o.

int main(void) {

  int nota1, nota2, recu = 0;
  float promedio = 0.;


  printf("Ingrese la nota del primer parcial: ");
  scanf("%d", &nota1);

  printf("Ingrese la nota del segundo parcial: ");
  scanf("%d", &nota2);

  if (nota1 < 6){
    printf("Ingrese la nota del recuperatorio: ");
    scanf("%d", &recu);
  } else if (nota2 < 6){
    printf("Ingrese la nota del recuperatorio: ");
    scanf("%d", &recu);
  }

  if (recu != 0){
    promedio = (nota1 + nota2 + recu) / 3.;
  } else {
    promedio = (nota1 + nota2 ) / 2.;
  }

  if (promedio > 8){
    printf("Pomociona\n");
  } else if (promedio > 6){
    printf("Aprueba\n");
  } else {
    printf("Desaprobado\n");
  }
  return 0;
}
