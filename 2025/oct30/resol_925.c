//-----------------------------------------------------------------------------
//Fernández Lautaro
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   

typedef enum {
  TIPO_TEMPERATURA, 
  TIPO_PRESION,    
  TIPO_ESTADO      
} TipoLectura;

typedef union {
  float temperatura; 
  int presion_kpa;   
  long codigo_error;  
} ValorLectura;

typedef struct {
  long timestamp;     
  TipoLectura tipo;   
  ValorLectura valor; 
} SensorLectura;

void imprimirLectura(SensorLectura*);

int main(int argc, char *argv[]) {

  SensorLectura lecturaActual;
  SensorLectura *pLectura;

  srand(time(NULL));

  pLectura = &lecturaActual;
  lecturaActual.timestamp = time(NULL);

  lecturaActual.tipo = rand() % 3;

  switch(pLectura->tipo){
    case TIPO_TEMPERATURA:
      printf("Ingrese la temperatura: ");
      scanf("%f", &pLectura->valor.temperatura);
      break;
    case TIPO_PRESION:
      printf("Ingrese la presión: ");
      scanf("%d", &pLectura->valor.presion_kpa);
      break;
    case TIPO_ESTADO:
      printf("Ingrese el codigo de error: ");
      scanf("%ld", &pLectura->valor.codigo_error);
      break;
    default:
      printf("Error en switch\n");
  }

  imprimirLectura(pLectura);

  return 0;
}
void imprimirLectura(SensorLectura *p){

  printf("TimesTamp: %ld\n", p->timestamp);

  switch(p->tipo){
    case 0:
      printf("Temperatura: %fC\n", p->valor.temperatura);
      break;
    case 1:
      printf("Presión: %dkPa\n", p->valor.presion_kpa);
      break;
    case 2:
      printf("Código de Estado: %ld\n", p->valor.codigo_error);
      break;
    default:
      printf("Error en switch\n");
  }
}
//------------------------------------------------------------------------------------
//Manuel Pfaff

# include <stdio.h>
# include <stdlib.h > // Para time () y srand ()
# include <time.h> // Para time ()
                   // a) Enumeración para el tipo de lectura
typedef enum {
  TIPO_TEMPERATURA , // 0
  TIPO_PRESION , // 1
  TIPO_ESTADO // 2
}TipoLectura;
// b) Unión para almacenar el valor
typedef union {
  float temperatura ; // en Celsius
  int presion_kpa ; // en KiloPascales
  long codigo_error ; // Código numérico
}ValorLectura ;
// c) Estructura principal que combina el tipo y el valor
typedef struct {
  long timestamp ; // Marca de tiempo (ej: segundos desde epoch )
  TipoLectura tipo ; // Qué tipo de dato se almacena
  ValorLectura valor ; // El dato en sí
}SensorLectura;

void imprimirLectura(SensorLectura* p);

int main(){

  SensorLectura lecturaActual;
  SensorLectura* pLectura;
  pLectura = &lecturaActual;

  lecturaActual.timestamp = time(NULL);
  srand(lecturaActual.timestamp);
  lecturaActual.tipo = rand() % 3;

  switch(pLectura->tipo){
    case TIPO_TEMPERATURA:
      printf("Ingrese una temperatura (float):");
      scanf("%f", &pLectura->valor.temperatura);
      break;
    case TIPO_PRESION:
      printf("Ingrese una presion (int):");
      scanf("%d", &pLectura->valor.presion_kpa);
      break;
    case TIPO_ESTADO:
      printf("Ingrese un codigo de estado (long):");
      scanf("%d", &pLectura->valor.codigo_error);
      break;
    default:
      printf("INVALIDO");
  }	
  imprimirLectura(pLectura);


  return 0;
}

void imprimirLectura(SensorLectura* p){
  printf("Timestamp: %d\n\n", p->timestamp);
  switch(p->tipo){
    case TIPO_TEMPERATURA:
      printf("Temperatura: %.2fºC\n", p->valor.temperatura);
      break;
    case TIPO_PRESION:
      printf("Presion: %dkPa\n", p->valor.presion_kpa);
      break;
    case TIPO_ESTADO:
      printf("Estado: %d\n", p->valor.codigo_error);
      break;
    default:
      printf("INVALIDO");
  }
}

