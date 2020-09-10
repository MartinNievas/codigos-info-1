#include <stdio.h>
#include <stdlib.h>


int main(void)
{

  // Dificultad
  // Operación
  int op = 1;
  int resp, resp_correcta;
  int num1, num2;
  int cont_preg_resp = 0;

  for (int i = 0; i < 10; i++){
    cont_preg_resp = 0;
    switch(op){
      case 1:
        num1 = rand()%10;
        num2 = rand()%10;

        do {
          printf("Cuanto es %d+%d\n", num1 ,num2);
          scanf("%d", &resp);
          resp_correcta = num1+num2;
          cont_preg_resp++;
        } while (resp != resp_correcta);

        printf("Esta respuesta vale %f\n", 1.0/cont_preg_resp);
      break;
    default: break;
    }


  }

  return 0;
}
