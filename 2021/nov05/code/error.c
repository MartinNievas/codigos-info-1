#include <stdio.h>

int suma_acumulada(int vect[N])
{
  int sum[N];

  sum[0] = vect[0];
  for (int i = 0; i < N; i++){
    sum[i] = vect[i] + sum[i-1];
  }

  return sum;
}

//la función devuelve la suma acumulada en el arreglo sum
//int a[N], b[N];
//suma_acumulada(a,b);
void suma_acumulada(int vect[N], int *sum)
{
  sum[0] = vect[0];
  for (int i = 0; i < N; i++){
    sum[i] = vect[i] + sum[i-1];
  }

}

la función devuelve la suma acumulada en el último elemento del arreglo sum
la función devuelve la suma acumulada en el arreglo original
la función devuelve la suma acumulada en el primer elemento del arreglo sum
