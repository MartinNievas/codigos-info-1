
//Ejercicio_2_seba

#include <stdio.h>

int cuadrado(int n)
{
  return n*n;
}

int doble(int n)
{
  return n*2;
}

void procesarVector( int vector[], int cantidad, int (*operacion)(int)){

  for (int i = 0; i < cantidad; i++)
  {
    printf("%d \n",operacion(vector[i]));
  }

  printf("\n");
}

int main(void)
{
  int vector[] = {2, 4, 6, 8, 10};
  int cantidad = 5;

  printf("Cuadrados:\n");
  procesarVector( vector,cantidad,cuadrado);

  printf("Dobles:\n");
  procesarVector( vector,cantidad,doble);

  return 0;
}



//Ejercicio 3 Maxi
#include <stdio.h>
#define MAX 100


float calcularPromedio(float *vector, int cantidad){
  int suma = 0;
  for(int i = 0; i<cantidad;i++){
    suma =+ *(vector+i);
  }
  return (float)suma/cantidad;
}
float calcularMaximo(float *vector, int cantidad){
  float max = *vector;
  for(int i = 0; i<cantidad ;i++){
    if(*(vector+i)>max){
      max = *(vector+i);
    }	
  }
  return max;
}
float calcularMinimo(float *vector, int cantidad){
  float minim = *vector;
  for(int i = 0; i<cantidad ;i++){
    if(*(vector+i)<minim){
      minim = *(vector+i);
    }	
  }
  return minim;
}

void mostrarResultado(float vector[],int cantidad, float (*operacion)(float*, int), const char *descripcion){
  float resultado;


  resultado = operacion(vector, cantidad);



  printf("%s: %f\n", descripcion, resultado);

}

int main(void)
{
  float vector[MAX];
  int cantidad;

  do{
    printf("Ingrese la cantidad de elementos:");
    scanf(" %d", &cantidad);
    if(cantidad>MAX)
      printf("Intente nuevamente\n");
  } while(cantidad>MAX);
  for(int i =0; i<cantidad; i++){
    printf("Ingrese el elemento n%d: ", i+1);
    scanf(" %f", &vector[i]);
  }


  mostrarResultado(
      vector,
      cantidad,
      calcularPromedio,
      "Promedio"
      );

  mostrarResultado(
      vector,
      cantidad,
      calcularMaximo,
      "Maximo"
      );

  mostrarResultado(
      vector,
      cantidad,
      calcularMinimo,
      "Minimo"
      );

  return 0;


