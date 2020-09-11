#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define CANTIDAD_FRASES 3

float operacion_matematica(char, int, char**, char**);

int main(void)
{

  char op;
  int dif;
  float total = 0;

  char *frases_bien[CANTIDAD_FRASES] = {
  "Bien",
  "Excelente",
  "de 10",
  };

  char *frases_mal[CANTIDAD_FRASES] = {
  "mal",
  "mal2",
  "mal4",
  };

  do {
    printf("Ingrese la operación [+,-]: ");
    scanf("%c", &op);
  } while (op != '+' && op != '-');

  do {
    printf("Ingrese la dificultad: ");
    scanf("%d", &dif);
  } while (dif < 0 || dif > 3);

  for (int i = 0; i < 10; i++){
    total += operacion_matematica(op, dif, frases_bien, frases_mal);
    printf("Resultado parcial: %f\n", total);
    }

  printf("El total es: %f\n", total);

  return 0;
}


float operacion_matematica(char op, int dif, char **frases_bien, char **frases_mal){

        int div = pow(10,dif);
        int num1 = rand()%div;
        int num2 = rand()%div;
        int resp, resp_correcta;

        int cont_preg_resp = 0;

        switch(op){
        case '+':
          do {
            printf("Cuanto es %d+%d\n", num1 ,num2);
            scanf("%d", &resp);
            resp_correcta = num1+num2;
            cont_preg_resp++;

            if (resp == resp_correcta)
              printf("%s\n", *(frases_bien+rand()%CANTIDAD_FRASES));
            else
              printf("%s\n", *(frases_mal+rand()%CANTIDAD_FRASES));

          } while (resp != resp_correcta);
        break;
        case '-':
          do {
            printf("Cuanto es %d-%d\n", num1 ,num2);
            scanf("%d", &resp);
            resp_correcta = num1-num2;
            cont_preg_resp++;

            if (resp == resp_correcta)
              printf("%s\n", *(frases_bien+rand()%CANTIDAD_FRASES));
            else
              printf("%s\n", *(frases_mal+rand()%CANTIDAD_FRASES));

          } while (resp != resp_correcta);
        break;
        default: break;
        }
        return 1.0/cont_preg_resp;

}
