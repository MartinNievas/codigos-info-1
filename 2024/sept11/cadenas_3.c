#include <stdio.h>
#include <stdlib.h>

int main(void) {

  // Frases extraídas de los subtítulos de la película Coco (2017)
  // Subido por: TaMaBin en subdivx
  char* frases[10] = {
    "holaaa",
    "Él y su familia cantaban y bailaban...",
    "La música había destrozado a su familia.",
    "Eres músico, ¿no?",
    "Me vas a meter en problemas, chico.",
    "Hora del espectáculo, chamaco.",
  };
  int i = 10;
  while(i-- > 0){
    int num_aleatorio = rand() % 6;
    printf("%s\n", frases[num_aleatorio]);
  }

  return 0;
}

