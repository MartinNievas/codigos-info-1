#include <stdio.h>

struct dato1 {
  float f;
  char c;
};
00000000 char
00000000 float
00000000 float
00000000 float
00000000 float

union dato1 {
  float f;
  char c;
};
00000000 float 00000000 char
00000000 float
00000000 float
00000000 float

int main(void) {

  

  return 0;
}
