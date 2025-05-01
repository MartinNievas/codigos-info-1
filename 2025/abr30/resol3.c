#include <stdio.h>

int main()
{
  int cond1=1000;
  float compra;

  printf("Ingrese el monto de su compra: ");
  scanf("%f", &compra);
  if (compra>cond1){
    printf("Usted paga $%.2f con %%20 de descuento",(compra*0.8));
  }
  if(compra<=cond1){
    printf("Usted paga $%.2f\n",compra);
  }

  return 0;
}
