// Armar una estructura para almacenar con campos de bits
// Numeros del -1,1
// Numeros del -2,2
// Numeros del 0,5
// Con la menor cantidad de bits posible
//
// 0000
//
// 0001
// 1111
//
// 00
// 01 = 1
// 11 = -1
//
//
// 000
// 010 = 2
// 110 = -2
//
//
// 000
// 111 = 7
//
typedef struct{
  int b0: 2;
  int b1: 3;
  unsigned int b2: 3;
} sape;
-------------------------------------------------------------------------------
typedef strut{
  int b0:2;
  int b1:3;
  int b2:3;
}camp_bits;//Kisinger leandro
