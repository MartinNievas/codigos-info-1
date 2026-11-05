
// Ismael barrera Romero 
#include <stdio.h>
#include <stdlib.h>

#define TAM 10

/*
Enunciado:

Desarrollar un programa que permita registrar vehículos de un
estacionamiento y calcular el importe que debe abonar cada uno.

Cada vehículo está representado mediante una estructura que contiene:
- Patente (representada mediante un número entero).
- Horas estacionado.
- Tipo de vehículo.
- Importe a pagar.
- Estado de pago.

El programa debe:

1. Solicitar al usuario la cantidad de vehículos a registrar,
   validando que se encuentre entre 0 y TAM.

2. Reservar dinámicamente la memoria necesaria para almacenar
   los vehículos.

3. Cargar los datos de cada vehículo mediante una función:
   - Patente numérica: entre 1000 y 9999.
   - Horas estacionado: entre 1 y 24.
   - Tipo de vehículo:
       A: Automóvil.
       M: Motocicleta.
       C: Camioneta.

4. Calcular el importe a pagar y determinar el estado de pago
   mediante una función.

   El costo por hora depende del tipo de vehículo:
       A: $2000 por hora.
       M: $1000 por hora.
       C: $3000 por hora.

   El estado de pago se determina según el importe:
       P: Pago alto, importe >= 30000.
       N: Pago normal, importe >= 10000 y < 30000.
       B: Pago bajo, importe < 10000.

5. Implementar una función imprimirPagosAltos() que muestre
   únicamente los vehículos cuyo estado de pago sea P.

Utilizar:
- Un arreglo dinámico de estructuras.
- Funciones que reciban un arreglo de estructuras.
- malloc() para reservar memoria dinámicamente.
- free() para liberar la memoria reservada.

No utilizar punteros a estructuras.
*/

typedef struct {
  int patente;
  int horas;
  char tipo;
  float importe;
  char estado;
} vehiculo_t;

/*
 * Solicita la cantidad de vehículos y valida que se encuentre
 * dentro del intervalo [min, max].
 *
 * Retorna la cantidad validada.
 */
int ingresarTamValidado(int min, int max) {
    int n=0;
    do {
        // Solicitar la cantidad de vehículos
      printf("Digite la cantidad de vehiculos: ");
        scanf("%d",&n);
    // Validar que se encuentre entre min y max
   if(n<min || n>max)
    printf("ERROR:Digite un termino mayor a 0.\n");
    }while(n<min || n>max);

  // Retornar la cantidad validada  
    return n;
}

/*
 * Carga los datos de los vehículos.
 *
 * Parámetros:
 *   arr  -> arreglo de estructuras vehiculo_t
 *   cant -> cantidad de vehículos
 *
 * Validar:
 *   - Patente entre 1000 y 9999.
 *   - Horas estacionado entre 1 y 24.
 *   - Tipo de vehículo: A, M o C.
 *
 * Utilizar:
 *   (base + indice)->miembro
 */
void cargarVehiculos(vehiculo_t *arr, int cant) {

  // Recorrer el arreglo
    for(int i=0;i<cant;i++)
    {
        // Solicitar y validar la patente
        do {
        printf("Digite la patente del vehículo nro [%d]: ",(i+1));
        scanf("%d",&(arr+i)->patente);
        
        if( (arr+i)->patente < 1000 || (arr+i)->patente > 9999)
         printf("ERROR:valor fuera de termino\n");       
        }while( (arr+i)->patente < 1000 || (arr+i)->patente > 9999);
      
          do {
      printf("Digite las horas del vehículo numero [%d] estacionado: ",(i+1));
      scanf("%d",&(arr+i)->horas);
    if ( ((arr+i)->horas) < 1 || ((arr+i)->horas) > 24 )
      printf("ERROR: Valor fuera de termino, digitar de nuevo\n");
      }while(((arr+i)->horas) < 1 || ((arr+i)->horas) > 24);
      
        do{
        printf("Digite el tipo de vehiculo nro [%d] (A:Auto_M:moto_C:camioneta): ",(i+1));
        scanf(" %c",&(arr+i)->tipo);
        
        if ( (arr+i)->tipo != 'A' && (arr+i)->tipo != 'M' && (arr+i)->tipo != 'C'
        &&  (arr+i)->tipo != 'a' && (arr+i)->tipo != 'm' && (arr+i)->tipo != 'c')
            printf("ERROR: Caracter no permitido,intentar de vuelta\n");
        }while( (arr+i)->tipo != 'A' &&  (arr+i)->tipo != 'M' && (arr+i)->tipo != 'C'
        && (arr+i)->tipo != 'a' && (arr+i)->tipo != 'm' && (arr+i)->tipo != 'c');
    }
    }
    
    // Solicitar y validar las horas estacionado
// Solicitar y validar el tipo de vehículo


/*
 * Calcula el importe y determina el estado de pago.
 *
 * Costo por hora:
 *   A: $2000
 *   M: $1000
 *   C: $3000
 *
 * Estado:
 *   P: importe >= 30000
 *   N: importe >= 10000 y menor que 30000
 *   B: importe < 10000
 *
 * Utilizar:
 *   (base + indice)->miembro
 */
void calcularImportes(vehiculo_t *arr, int cant) {
    int importe=0;
  // Recorrer el arreglo de vehículos
    for (int i=0;i<cant;i++)
    {
        if( (arr+i)-> tipo == 'a' || (arr+i)-> tipo == 'A')
        {
            (arr+i)->importe = 2000*(arr+i)->horas;
        }
        if( (arr+i)-> tipo == 'm' || (arr+i)-> tipo == 'M')
        {
            (arr+i)->importe = 1000*(arr+i)->horas;
        }
        if( (arr+i)-> tipo == 'c' || (arr+i)-> tipo == 'C')
        {
            (arr+i)->importe = 3000*(arr+i)->horas;
        }
    }
  // Determinar el costo por hora según el tipo
   for (int i=0;i<cant;i++)
   {
       if ( (arr+i)->importe >= 3000 )
        (arr+i)->estado='P';
        
           if ( (arr+i)->importe < 3000 && (arr+i)->importe >= 1000) 
        (arr+i)->estado='N';
        
        if ( (arr+i)->importe < 1000) 
        (arr+i)->estado='B';
   }
 

  // Determinar el estado de pago

  // Almacenar el importe y el estado

}

/*
 * Imprime únicamente los vehículos cuyo estado de pago sea P.
 *
 * Mostrar:
 *   - Patente.
 *   - Horas estacionado.
 *   - Tipo de vehículo.
 *   - Importe a pagar.
 *   - Estado de pago.
 *
 * Utilizar:
 *   (base + indice)->miembro
 */
void imprimirPagosAltos(vehiculo_t *arr, int cant) {

  // Recorrer el arreglo
    for (int i=0;i<cant;i++)
    {
        // Verificar si el estado de pago es P
        if( (arr+i)->estado == 'P')
        printf("\nDatos del vehiculo del estado P\nPatente: [%d]\tHoras: [%d]\tTipo: [%c]",
        (arr+i)->patente,(arr+i)->horas,(arr+i)->tipo); // Mostrar los datos del vehículo
    }
  

  

}

int main(void) {

  vehiculo_t *vehiculos;
  int tam;

  // Solicitar la cantidad de vehículos
  tam = ingresarTamValidado(0, TAM);

  // Reservar memoria dinámica
  vehiculos = malloc(TAM*sizeof(vehiculo_t));

  // Verificar si malloc() fue exitoso
  if(vehiculos == NULL)
  {
      return -1;
  }
  // Cargar los vehículos
  cargarVehiculos(vehiculos, tam);

  // Calcular los importes y estados de pago
  calcularImportes(vehiculos, tam);

  // Mostrar los vehículos con pagos altos
  imprimirPagosAltos(vehiculos, tam);

  // Liberar la memoria dinámica
  
  free(vehiculos);
    
  return 0;
}------------------------------------------------------------------------------------------------------
  //Ej1

#include <stdio.h>
#include <stdlib.h>

#define TAM 10

/*
Enunciado:

Desarrollar un programa que permita registrar vehículos de un
estacionamiento y calcular el importe que debe abonar cada uno.

Cada vehículo está representado mediante una estructura que contiene:
- Patente (representada mediante un número entero).
- Horas estacionado.
- Tipo de vehículo.
- Importe a pagar.
- Estado de pago.

El programa debe:

1. Solicitar al usuario la cantidad de vehículos a registrar,
   validando que se encuentre entre 0 y TAM.

2. Reservar dinámicamente la memoria necesaria para almacenar
   los vehículos.

3. Cargar los datos de cada vehículo mediante una función:
   - Patente numérica: entre 1000 y 9999.
   - Horas estacionado: entre 1 y 24.
   - Tipo de vehículo:
       A: Automóvil.
       M: Motocicleta.
       C: Camioneta.

4. Calcular el importe a pagar y determinar el estado de pago
   mediante una función.

   El costo por hora depende del tipo de vehículo:
       A: $2000 por hora.
       M: $1000 por hora.
       C: $3000 por hora.

   El estado de pago se determina según el importe:
       P: Pago alto, importe >= 30000.
       N: Pago normal, importe >= 10000 y < 30000.
       B: Pago bajo, importe < 10000.

5. Implementar una función imprimirPagosAltos() que muestre
   únicamente los vehículos cuyo estado de pago sea P.

Utilizar:
- Un arreglo dinámico de estructuras.
- Funciones que reciban un arreglo de estructuras.
- malloc() para reservar memoria dinámicamente.
- free() para liberar la memoria reservada.

No utilizar punteros a estructuras.
*/

typedef struct {
  int patente;
  int horas;
  char tipo;
  float importe;
  char estado;
} vehiculo_t;

/*
 * Solicita la cantidad de vehículos y valida que se encuentre
 * dentro del intervalo [min, max].
 *
 * Retorna la cantidad validada.
 */
int ingresarTamValidado(int min, int max) {
    int tam;
    do{
        printf("Ingrese la cantidad de vehículos(%d-%d): ",min,max);
        scanf("%d",&tam);
        if(tam<min||tam>max)
            printf("Error. ");
    }while(tam<min||tam>max);
    
    return tam;
}

/*
 * Carga los datos de los vehículos.
 *
 * Parámetros:
 *   arr  -> arreglo de estructuras vehiculo_t
 *   cant -> cantidad de vehículos
 *
 * Validar:
 *   - Patente entre 1000 y 9999.
 *   - Horas estacionado entre 1 y 24.
 *   - Tipo de vehículo: A, M o C.
 *
 * Utilizar:
 *   (base + indice)->miembro
 */
void cargarVehiculos(vehiculo_t *arr, int cant) {
    for(int i=0;i<cant;i++){
        printf("Vehículo[%d].\n",i);
        
        //Patente
        do{
            printf("Patente: ");
            scanf("%d",&(arr+i)->patente);
            if((arr+i)->patente < 1000 || (arr+i)->patente > 9999)
                printf("Error. ");
        }while((arr+i)->patente < 1000 || (arr+i)->patente > 9999);
        
        //Horas
        do{
            printf("Horas estacionado(1hs-24hs): ");
            scanf("%d",&(arr+i)->horas);
            if((arr+i)->horas < 1 || (arr+i)->horas > 24)
                printf("Error. ");
        }while((arr+i)->horas < 1 || (arr+i)->horas > 24);
        
        //Vehículo
        do{
            
            printf("Tipo de vehículo(A-M-C): ");
            scanf(" %c",&(arr+i)->tipo);
            if((arr+i)->tipo != 'A' && (arr+i)->tipo != 'M' && (arr+i)->tipo != 'C')
                printf("Error. ");
        }while((arr+i)->tipo != 'A' && (arr+i)->tipo != 'M' && (arr+i)->tipo != 'C');
        printf("\n");
    }
}

/*
 * Calcula el importe y determina el estado de pago.
 *
 * Costo por hora:
 *   A: $2000
 *   M: $1000
 *   C: $3000
 *
 * Estado:
 *   P: importe >= 30000
 *   N: importe >= 10000 y menor que 30000
 *   B: importe < 10000
 *
 * Utilizar:
 *   (base + indice)->miembro
 */
void calcularImportes(vehiculo_t *arr, int cant) {
    for(int i=0;i<cant;i++){
        switch((arr+i)->tipo){
            case 'A': (arr+i)->importe = (arr+i)->horas * 2000.;
            break;
            case 'M': (arr+i)->importe = (arr+i)->horas * 1000.;
            break;
            case 'C': (arr+i)->importe = (arr+i)->horas * 3000.;
        }
        if((arr+i)->importe >= 30000)      (arr+i)->estado = 'P';
        else if((arr+i)->importe >= 10000) (arr+i)->estado = 'N';
        else if((arr+i)->importe < 10000)  (arr+i)->estado = 'B';
    }
}

/*
 * Imprime únicamente los vehículos cuyo estado de pago sea P.
 *
 * Mostrar:
 *   - Patente.
 *   - Horas estacionado.
 *   - Tipo de vehículo.
 *   - Importe a pagar.
 *   - Estado de pago.
 *
 * Utilizar:
 *   (base + indice)->miembro
 */
void imprimirPagosAltos(vehiculo_t *arr, int cant) {
    printf("---------------------Vehiculos de pago alto---------------------\n");
    for(int i=0;i<cant;i++){
        if((arr+i)->estado == 'P'){
            printf("Vehículo[%d]\n",i);
            printf("Patente: %d\n",(arr+i)->patente);
            printf("Horas: %d\n",(arr+i)->horas);
            printf("Tipo: %c\n",(arr+i)->tipo);
            printf("Importe: %d\n\n",(arr+i)->importe);
        }else{
            printf("Ninguno.\n");
            break;
        }
    }
    printf("\n");
}

int main(void) {

  vehiculo_t *vehiculos;
  int tam;

  // Solicitar la cantidad de vehículos
  tam = ingresarTamValidado(0, TAM);

  // Reservar memoria dinámica
  vehiculos = malloc(tam * sizeof(vehiculo_t));

  // Verificar si malloc() fue exitoso
  if(vehiculos == NULL){
      printf("Error en memoria");
      return 1;
  }

  // Cargar los vehículos
  cargarVehiculos(vehiculos, tam);

  // Calcular los importes y estados de pago
  calcularImportes(vehiculos, tam);

  // Mostrar los vehículos con pagos altos
  imprimirPagosAltos(vehiculos, tam);

  // Liberar la memoria dinámica
  free(vehiculos);
  
  -----------------------------------------------------------------------
  #include <stdio.h>
#include <stdlib.h>

#define TAM 10

/*
Enunciado:

Desarrollar un programa que permita registrar vehículos de un
estacionamiento y calcular el importe que debe abonar cada uno.

Cada vehículo está representado mediante una estructura que contiene:
- Patente (representada mediante un número entero).
- Horas estacionado.
- Tipo de vehículo.
- Importe a pagar.
- Estado de pago.

El programa debe:

1. Solicitar al usuario la cantidad de vehículos a registrar,
   validando que se encuentre entre 0 y TAM.

2. Reservar dinámicamente la memoria necesaria para almacenar
   los vehículos.

3. Cargar los datos de cada vehículo mediante una función:
   - Patente numérica: entre 1000 y 9999.
   - Horas estacionado: entre 1 y 24.
   - Tipo de vehículo:
       A: Automóvil.
       M: Motocicleta.
       C: Camioneta.

4. Calcular el importe a pagar y determinar el estado de pago
   mediante una función.

   El costo por hora depende del tipo de vehículo:
       A: $2000 por hora.
       M: $1000 por hora.
       C: $3000 por hora.

   El estado de pago se determina según el importe:
       P: Pago alto, importe >= 30000.
       N: Pago normal, importe >= 10000 y < 30000.
       B: Pago bajo, importe < 10000.

5. Implementar una función imprimirPagosAltos() que muestre
   únicamente los vehículos cuyo estado de pago sea P.

Utilizar:
- Un arreglo dinámico de estructuras.
- Funciones que reciban un arreglo de estructuras.
- malloc() para reservar memoria dinámicamente.
- free() para liberar la memoria reservada.

No utilizar punteros a estructuras.
*/

typedef struct {
  int patente;
  int horas;
  char tipo;
  float importe;
  char estado;
} vehiculo_t;

/*
 * Solicita la cantidad de vehículos y valida que se encuentre
 * dentro del intervalo [min, max].
 *
 * Retorna la cantidad validada.
 */
int ingresarTamValidado(int min, int max) {
    int tam;
    do{
  // Solicitar la cantidad de vehículos
  printf("ingrese la cantidad de vehiculos: ");
  scanf("%d",&tam);
  if(tam<min || tam>max){
      printf("Debe ingresar una cantidad entre 0-10");
  }
  }while(tam<min || tam>max);
  // Validar que se encuentre entre min y max
  // Retornar la cantidad validada
  return tam;
}

/*
 * Carga los datos de los vehículos.
 *
 * Parámetros:
 *   arr  -> arreglo de estructuras vehiculo_t
 *   cant -> cantidad de vehículos
 *
 * Validar:
 *   - Patente entre 1000 y 9999.
 *   - Horas estacionado entre 1 y 24.
 *   - Tipo de vehículo: A, M o C.
 *
 * Utilizar:
 *   (base + indice)->miembro
 */
void cargarVehiculos(vehiculo_t *arr, int cant) {

  // Recorrer el arreglo
  for(int i = 0;i<cant; i++){
      int pat;
  // Solicitar y validar la patente
  do{
      printf("Ingrese la patente del vehiculo %d: ",i);
      scanf("%d",&pat);
  }while(pat < 1000 || pat > 9999);
  (arr+i)->patente = pat;
  // Solicitar y validar las horas estacionado
  int hor;
  do{
      printf("Ingrese las horas del vehiculo %d: ",i);
      scanf("%d",&hor);
  }while(hor<1 || hor>24);
  (arr+i)->horas = hor;
  // Solicitar y validar el tipo de vehículo
  char tip;
  do{
      printf("Ingrese el tipo del vehiculo %d: ",i);
      scanf("%c",&tip);
  }while(tip !='A' && tip!='M' && tip!='C');
  (arr+i)->tipo=tip;
  
}
}

/*
 * Calcula el importe y determina el estado de pago.
 *
 * Costo por hora:
 *   A: $2000
 *   M: $1000
 *   C: $3000
 *
 * Estado:
 *   P: importe >= 30000
 *   N: importe >= 10000 y menor que 30000
 *   B: importe < 10000
 *
 * Utilizar:
 *   (base + indice)->miembro
 */
void calcularImportes(vehiculo_t *arr, int cant) {

  // Recorrer el arreglo de vehículos
  for(int i=0; i<cant; i++){
      
  // Determinar el costo por hora según el tipo
  if((arr+i)->tipo == 'A'){
      (arr+i)->importe = ((arr+i)->horas * 2000);
  }
  if((arr+i)->tipo == 'M'){
      (arr+i)->importe = ((arr+i)->horas * 1000);
  }
  if((arr+i)->tipo == 'C'){
      (arr+i)->importe = ((arr+i)->horas * 3000);
  }
  // Calcular el importe total

  // Determinar el estado de pago
  if((arr+i)->importe >= 30000){
      (arr+i)->estado = 'P';
  }
  if((arr+i)->importe >= 10000 && (arr+i)->importe < 30000){
      (arr+i)->estado = 'N';
  }
  if((arr+i)->importe < 10000){
      (arr+i)->estado = 'B';
  }
  
  // Almacenar el importe y el estado
  }
}

/*
 * Imprime únicamente los vehículos cuyo estado de pago sea P.
 *
 * Mostrar:
 *   - Patente.
 *   - Horas estacionado.
 *   - Tipo de vehículo.
 *   - Importe a pagar.
 *   - Estado de pago.
 *
 * Utilizar:
 *   (base + indice)->miembro
 */
void imprimirPagosAltos(vehiculo_t *arr, int cant) {

  // Recorrer el arreglo
  for(int i=0; i<cant; i++){
      if((arr+i)->estado == 'P'){
      printf("%d",(arr+i)->patente);
      printf("%d",(arr+i)->horas);
      printf("%c",(arr+i)->tipo);
  }
      
  }

  // Verificar si el estado de pago es P

  // Mostrar los datos del vehículo

}

int main(void) {

  vehiculo_t *vehiculos;
  int tam;

  // Solicitar la cantidad de vehículos
  tam = ingresarTamValidado(0, TAM);

  // Reservar memoria dinámica
  vehiculos = malloc(tam * sizeof(vehiculo_t));
  // Verificar si malloc() fue exitoso
  if(vehiculos == NULL)
      return -1;
  // Cargar los vehículos
  cargarVehiculos(vehiculos, tam);

  // Calcular los importes y estados de pago
  calcularImportes(vehiculos, tam);

  // Mostrar los vehículos con pagos altos
  imprimirPagosAltos(vehiculos, tam);

  // Liberar la memoria dinámica
  free(vehiculos);

  return 0;
}
    
    

  return 0;
}
