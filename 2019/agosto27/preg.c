#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int pregunta(int a, int b)
{
  int res;
  time_t inicio;

  printf("Cuanto es %d x %d? : ", a, b);
  inicio = time(NULL);
  scanf("%d", &res);
  printf("Tiempo: %ld\n", time(NULL)-inicio);
  if (res == a * b) 
    return 1;
  else 
    return 0;

}

int main(void)
{
  int res = 0;
  int cont = 0;
  int num1, num2;
  int i;

  for (i = 0; i < 10; i++)
  {
    num1 = rand() %10;
    num2 = rand() %10;
    while (res == 0) {
      res = pregunta(num1, num2);
      if (res == 0) 
        printf("Incorrecto\n");
      else
        cont++;
    }
    res = 0;
  }

  return 0;
}
