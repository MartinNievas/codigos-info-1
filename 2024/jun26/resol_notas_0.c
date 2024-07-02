/** jose contrera 403145 */
#include <stdio.h>
int main()
{
  float nota,suma,prom;
  int i=1;
  suma=0;
  while (i<=10){
    printf("estimado usuario ingrese una nota:");
    scanf("%f",&nota);
    i++;
    while(nota<0 || nota>10){
      printf("la nota es entre 0 y 10\n");
      scanf("%f",&nota);
    }

    suma=suma+nota;

  }
  prom=suma/10 ;

  printf("el promedio final es de:%f",prom);
  return 0;
}
