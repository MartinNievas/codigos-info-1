#include <stdio.h>

typedef struct{
  unsigned char b0:1;
  unsigned char b1:1;
  unsigned char b2:1;
  unsigned char b3:1;
  unsigned char b4:1;
  unsigned char b5:1;
  unsigned char b6:1;
  unsigned char b7:1;
}campo_bits;

union byte_u {
  campo_bits campo;
  char num;
};

void imprimir_union(union byte_u);

int main(void)
{

  union byte_u miByte;

  for (int i = 0; i < 8; i++){
    miByte.num = 1<<i;
    imprimir_union(miByte);
  }

  return 0;
}

void imprimir_union(union byte_u B){
  printf("num: %4d | ", B.num);
  printf("bits:[%d%d%d%d%d%d%d%d]\n",
      B.campo.b7, B.campo.b6, B.campo.b5, B.campo.b4,
      B.campo.b3, B.campo.b2, B.campo.b1, B.campo.b0);

}

