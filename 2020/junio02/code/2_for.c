#include <stdio.h>

int main(void) {
  int i = 0;

  for (printf("->Esto una vez<-\n"); i < 10; printf("Esto siempre\n")) {
    i++;
  }

  return 0;
}
