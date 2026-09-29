#include <stdio.h>

int main(void) {

  int arr[5] = {1, 2, 3, 4, 5};

  printf("Dirección\n");
  printf("%x\n", arr);
  printf("%x\n", &arr[0]);

  printf("Elementos\n");
  for (int i = 0; i < 5; i++){
    printf("%d: %x\n", arr[i], *(arr + i));
  }



  return 0;
}
