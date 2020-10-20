#include <stdio.h>
#define TAM 5

struct temp {
  int id;
  float value;
};

// 1. Solicitar al usuario que ingrese la cantidad de elementos que desea cargar (tam)
// 2. Validar "tam" para que no supere el tamaño máximo del arreglo, mediante una función
// La función debe retornar un valor entero válido (dentro del rango indicado anteriormente)
int validar_ingreso(void);

// 3. Solicitar al usuario que ingrese cada elemento del arreglo, mediante una función
// La función recibe un puntero al arreglo, y todos los elementos deben ser ingresados dentro de la función
// utilizando aritmética de punteros (->)
// Validar el id que sea positivo, y que las temperaturas estén entre (0-100]
void ingresar_elementos(struct temp*, int);

// 4. Imprimir solo las temperaturas mayores a 80 grados
void imprimir_elementos(struct temp*, int);

int main(void) {

  struct temp temperaturas[TAM];
  int tam;

  tam = validar_ingreso();

  ingresar_elementos(temperaturas, tam);

  imprimir_elementos(temperaturas, tam);

  return 0;
}


int validar_ingreso(void){
    int n;

    do {
      printf("Ingrese n: ");
      scanf("%d", &n);
    } while (n < 0 || n > TAM);

    return n;
}


// Validar el id que sea positivo, y que las temperaturas estén entre (0-100]
void ingresar_elementos(struct temp *temperaturas, int n){

  int id_temp;
  float value_temp;
  for (int i = 0; i < n; i++){

    do {
      printf("Ingrese el id: ");
      scanf("%d", &id_temp);
    } while ( id_temp < 0);
    (temperaturas+i)->id = id_temp;
    // (*(temperaturas+i)).x
    // temperaturas[i].id =

    do {
      printf("Ingrese la temperatura: ");
      scanf("%f", &value_temp);
    } while ( value_temp <= 0 || value_temp > 100);
    (temperaturas+i)->value = value_temp;
  }

}

void imprimir_elementos(struct temp *temperaturas, int n){

  for (int i = 0; i < n; i++){
    if ( temperatura[i].value > 80.0 ){
      printf("%f\n", (temperaturas+i)->value);
    }
  }

}
