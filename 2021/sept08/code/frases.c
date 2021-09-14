#include <stdio.h>
#include <time.h>
#include <stdlib.h>
// Chat bot?

int main(void)
{
  int arreglo[10][2];
  srand(time(NULL));

  // Frases extraídas de los subtítulos de la película Coco (2017)
  // Subido por: TaMaBin en subdivx
  char *frases[10] = {
    "Él y su familia cantaban y bailaban...",
    "Podría haber hecho dulces.",
    "La música había destrozad a su familia.",
    "Eres músico, ¿no?",
    "Me vas a meter en problemas, chico.",
    "Hora del espectáculo, chamaco.",
  };


  printf("%s\n", frases[rand()%6]);

  // Cómo elegir aleatoriamente?

  return 0;
}

