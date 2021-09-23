#include <stdio.h>
// Ejemplo del tp8

int main(void) {

  char *frases[] = {
  "primera frase",
  "segunda frase",
  "tercera frase",
  "cuarta frase",
  "quinta frase",
  };

  int relevancia;
  int contador[5][11] = {0};
  int repetir = 0;

  do{
    // imprime el cuestionario
    for (int i = 0; i < 5; i++){
      printf("Ingrese que tan impor...:");
      printf("%s\n", frases[i]);
      // validar
      scanf("%d", &relevancia);

      contador[i][relevancia]++;
    }
    printf("Para repetir Ingre...\n");
    scanf("%d", &repetir);
  }while(repetir == 1);

  // buscar el mayor
  // buscar el menor
  // imprimir la matriz
  for (int i = 0; i < 5; i++){
    for (int j = 1; j < 11; j++){
      printf("%3d  |", contador[i][j]);
    }
    printf("\n");
  }

  return 0;
}
