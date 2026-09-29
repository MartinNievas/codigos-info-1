
/*8.24 enzo */ no me lo copien #robado
#include <stdio.h>

#define N 5

void mostrar_inverso(int *vec,int n){
  int i;
  for(i=n-1;i>=0;i--)
  {

    printf("%d",*(vec+i));
  }
}

int main(){
  int vec[N];
  int i;

  printf("Ingrese %d numeros enteros :\n", N);

  for(i=0;i<N;i++){
    scanf("%D", &vec[i]);
  }

  printf("elmentos en orden inverso :\n");
  mostrar_inverso(vec,N);

  return 0;
}

//8.23 Zair//
#include <stdio.h>
#define PI 3.1415

void calcular_area_perimetro(float *radio, float *area, float *perimetro){
  *area = PI * (*radio) * (*radio);
  *perimetro = 2 * PI *(*radio);
}

int main() {
  float radio, area, perimetro;

  printf("INgrese el radio del circulo: ");
  scanf("%f", &radio );

  calcular_area_perimetro(&radio, &area, &perimetro);

  printf("Radio Ingresado: %.2f\n", radio);
  printf("Area del circulo: %.2f\n", area);
  printf("Perimetro del circulo: %.2f\n", perimetro);

  return 0;
}

// 8.23 enzo//
#include <stdio.h>
#define PI 3.14

void calcular_area_perimetro(float *radio, float *area, float *perimetro){
  *perimetro = *radio *PI *  2 ;
  *area= (*radio) * *radio * PI;
}

int main(void){
  float radio;
  float perimetro;
  float area;

  printf("ingrese el valor del radio");
  scanf("%f", &radio);
  calcular_area_perimetro(&radio,&area,&perimetro);
  printf("el area es %.2f\n", perimetro);
  return 0;
}

//8.24 Agus//
#include <stdio.h>

#define N 5

void mostrar_inverso(int *vec,int n){
  int i;
  for(i=n-1;i>=0;i--)
  {

    printf("%d",*(vec+i));
  }
}

int main(){
  int vec[N];
  int i;

  printf("Ingrese %d numeros enteros :\n", N);

  for(i=0;i<N;i++){
    scanf("%D", &vec[i]);
  }

  printf("elmentos en orden inverso :\n");
  mostrar_inverso(vec,N);

  return 0;
}



