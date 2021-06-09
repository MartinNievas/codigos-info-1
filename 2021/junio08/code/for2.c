#include <stdio.h>

int main(void) {

  for (int i = 0; i < 10; i++){
    printf("%d) Hola\n", i);
  }

// i | i < 10 | printf | i++
// 0 |   si   | 0) Hola| 1
// 1 |   si   | 1) Hola| 2
// ....
// 9 |   si   | 9) Hola| 10
// 10|   no....


  return 0;
}
