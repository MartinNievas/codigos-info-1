#include <stdio.h>

typedef union{
  float f;
  unsigned int uint;
}float_and_uint_u;


typedef union{
  float f;
  struct{
    unsigned int mantissa:23;
    unsigned int exp:8;
    unsigned int signo:1;
  }uint_t;
}float_and_struct;

// 0-01000000-01000000000000000000000
// 0-01000000-01000000000000000000000>>23
// 0-00000000-00000000000000010000000
void imprimir_binario_nbits(unsigned int num, int nbits)
{
  for (int i = 0; i < nbits; i++)
    printf("%c", (num & 1<<i) ? '1' : '0');
}

void imprimir_binario(unsigned int num)
{
  for (int i = 31; i >= 0; i--){
    printf("%c", (num & 1<<i) ? '1' : '0');
    if (i % 8 == 0)
      printf(" ");
  }
}
unsigned int get_last_10_bits(float f){
  float_and_uint_u conversor;
  conversor.f = f;

  return conversor.uint & ((1<<23)-1);

}

unsigned int get_middle_8_bits(float f){
  float_and_uint_u conversor;
  conversor.f = f;

  return conversor.uint & (((1<<8)-1)<<23);

}

// 01111111100000000000000000000000
// $--------#######################

//bit de signo: 0 (0)
//bits del exponente: 10000000 (128)
//bits de la mantisa: 01000000000000000000000 (2097152)


int main(void) {

  float num_f = 2.5;
  unsigned int num_uint;

  // Los últimos 10 bits
  num_uint = get_last_10_bits(num_f);
  imprimir_binario(num_uint);
  printf("(%u)\n", num_uint);

  num_uint = get_middle_8_bits(num_f);
  imprimir_binario(num_uint);
  printf("(%u)\n", num_uint>>23);

  float_and_struct conversor;

  // Como campo de bits
  conversor.f = num_f;
  imprimir_binario(conversor.uint_t.mantissa);
  printf("\n");
  imprimir_binario_nbits(conversor.uint_t.exp, 8);

  return 0;
}
