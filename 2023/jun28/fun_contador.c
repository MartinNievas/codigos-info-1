#include <stdio.h>
void incrementar(int reset)
{
  static int cont = 0;

  if (reset == 0){
    cont = 0;
  }

  printf("%d\n", cont++);
}

int main(void) {

  for (int i = 0; i < 10; i++){
    incrementar(1);
  }
  incrementar(0);

  return 0;
}
