#include <stdio.h>
typedef enum {
  DESAPROBADO,
  APROBADO,
  PROMOCIONADO,
}resultado_t;

resultado_t calcularResultado(int nota);

void mostrarResultado(resultado_t resultado);

int main() {
  int nota;
  int estado;
  do{
    printf("Ingrese la nota del alumno: ");
    scanf(" %d", &nota);
    if(nota>10 || nota<0)
      printf("\nError\n");
  }while(nota>10 || nota<0);

  nota = calcularResultado(nota);

  mostrarResultado(nota);


  return 0;
}

resultado_t calcularResultado(int nota) {

  resultado_t res;

  if(nota>=8){
    res = PROMOCIONADO;
  }
  if(nota>=6 && nota <= 7){
    res =  APROBADO;
  }
  else{
    res = DESAPROBADO;
  }

  return res;
}

void mostrarResultado(resultado_t resultado) {

  switch(resultado){

    case PROMOCIONADO:
      printf("	- PROMOCIONADO -	");
      break;
    case APROBADO:
      printf("	- APROBADO -	");
      break;
    case DESAPROBADO:
      printf("	- DESAPROBADO -	");
      break;
  }

  //Ejercicio 0 samu
#include <stdio.h>

  typedef enum{
    DESAPROBADO,
    APROBADO,
    PROMOCIONADO
  } resultado_t;

  resultado_t calcularResultado(int nota);

  void mostrarResultado(resultado_t resultado);


  int main() {
    int nota;

    do{
      printf("ingrese una nota entre 0 y 10: ");
      scanf("%d", &nota);
      if(nota < 0 || nota > 10) printf("Error: ingrese una nota valida\n");
    } while(nota < 0 || nota > 10);

    resultado_t resultado;
    resultado = calcularResultado(nota);
    mostrarResultado(resultado);
    return 0;
  }

  resultado_t calcularResultado(int nota) {
    if (nota < 6) return DESAPROBADO;
    if (nota >= 6 && nota <= 7) return APROBADO;
    else return PROMOCIONADO;
  }

  void mostrarResultado(resultado_t resultado) {
    switch(resultado){
      case DESAPROBADO:
        printf("El alumno esta desaprobado");
        break;
      case APROBADO:
        printf("El alumno esta aprobado");
        break;
      case PROMOCIONADO:
        printf(		"El alumno esta promocionado");
        break;
    }
  }

  //Ejercicio 1 Maxi


#include <stdio.h>
  typedef enum{
    APAGADO = 1,
    ENCENDIDO,
    ESPERA,
  }estadoDispositivo_t;

  void mostrarEstado(estadoDispositivo_t estado);

  int consumeEnergia(estadoDispositivo_t estado);


  int main() {
    int opcion;
    estadoDispositivo_t estado;

    do{
      printf("- Seleccione el estado del dispositivo -\n");
      printf("1. Apagado\n2. Encendido\n3. En espera\n");
      scanf(" %d", &opcion);

      if(opcion>3 || opcion <1)
        printf("\nError\n");
    }while(opcion>3 || opcion <1);

    estado = opcion;
    mostrarEstado(estado);

    opcion = consumeEnergia(estado);
    if(opcion != 0)
      printf("El dispositivo consume energia\n");
    else

      printf("El dispositivo no consume energia\n");
    return 0;
  }

  void mostrarEstado(estadoDispositivo_t estado) {

    switch(estado){

      case APAGADO:
        printf("\nEl dispositivo esta apagado\n");
        break;
      case ENCENDIDO:
        printf("\nEl dispositivo esta encendido\n");
        break;
      case ESPERA:
        printf("\nEl dispositivo esta en espera\n");
        break;
    }

  }

  int consumeEnergia(estadoDispositivo_t estado) {

    switch(estado){

      case APAGADO:
        return 0;
        break;
      default:
        return 1;
        break;
    }
  }


}
