// MAKU Y ANA SUPER PROS
#include <stdio.h>

typedef enum{
  DESAPROBADO,
  APROBADO,
  PROMOCIONADO,
}resultado_t;

resultado_t calcularResultado(int nota);

void mostrarResultado(resultado_t resultado);

int main() {
  int nota;

  do{
    printf("ingresa nota: ");
    scanf("%d", &nota);
  } while(nota < 0 || nota > 10);

  mostrarResultado(calcularResultado(nota));

  return 0;
}


resultado_t calcularResultado(int nota) {
  if(nota < 6){
    return DESAPROBADO;
  }else if (nota < 8){
    return APROBADO;
  }else 
    return PROMOCIONADO;
}

void mostrarResultado(resultado_t resultado){
  switch(resultado){
    case 0:
      printf("Estas DESAPROBADO");
      break;
    case 1:
      printf("Estas APROBADO");
      break;
    case 2:
      printf("Estas PROMOCIONADO");
      break;
  }

  //de Luca :D 
#include <stdio.h>



  typedef enum resultado{
    PROMOCIONADO,
    APROBADO,
    DESAPROBADO
  } resultado_t;


  resultado_t calcularResultado(int nota);

  void mostrarResultado(resultado_t resultado);


  int main() {
    int nota;


    do{
      printf("\ningrese una nota: ");
      scanf("%d",&nota);
      if (nota>10||nota<0)
        printf("\nnota no valida\n");
    } while (nota>10 || nota<0);



    resultado_t res = calcularResultado(nota);
    mostrarResultado(res);


    return 0;
  }



  resultado_t calcularResultado(int nota) {
    if (nota >= 8)
      return PROMOCIONADO;
    else if (nota >= 6)
      return APROBADO;
    else 
      return DESAPROBADO;


  }


  void mostrarResultado(resultado_t resultado) {
    switch (resultado){
      case PROMOCIONADO:
        printf("La nota es de promoción");
        break;
      case APROBADO:
        printf("La nota es aprobatoria");
        break;
      case DESAPROBADO:
        printf("La nota no es aprobatoria");
        break;
    }

  }


#include <stdio.h>

  // Definir la enumeracion resultado_t
  typedef enum {
    DESAPROBADO,
    APROBADO,
    PROMOCIONADO
  } resultado_t;

  // Prototipos de funciones
  resultado_t calcularResultado(int nota);
  void mostrarResultado(resultado_t resultado);

  resultado_t calcularResultado(int nota) {
    if (nota < 6) {
      return DESAPROBADO;
    }
    else if (nota >= 6 && nota <= 7) {
      return APROBADO;
    }
    else {
      return PROMOCIONADO;
    }
  }

  void mostrarResultado(resultado_t resultado) {
    if (resultado == DESAPROBADO) {
      printf("DESAPROBADO\n");
    }
    else if (resultado == APROBADO) {
      printf("APROBADO\n");
    }
    else {
      printf("PROMOCIONADO\n");
    }
  }

  int main() {
    int nota;
    resultado_t resultado;

    // Solicitar la nota al usuario
    printf("Ingrese la nota: ");
    scanf("%d", &nota);

    // Validar que la nota este entre 0 y 10
    while (nota < 0 || nota > 10) {
      printf("Valor invalido. Ingrese un valor entre 0 y 10: ");
      scanf("%d", &nota);
    }

    // Calcular el resultado
    resultado = calcularResultado(nota);

    // Mostrar el resultado
    mostrarResultado(resultado);

    return 0;
  }

}

