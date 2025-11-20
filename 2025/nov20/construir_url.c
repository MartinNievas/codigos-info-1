#include <stdio.h>

int main(void) {


  char url[1024];
  char token[100] = "un-token-secreto-desde-el-archivo";
  unsigned long long int offset = 0;
  if (offset > 0)
  {
    snprintf(url, sizeof(url), 
        "https://api.telegram.org/bot%s/getUpdates?offset=%lld",
        token, offset);
  }
  else
  {
    snprintf(url, sizeof(url), 
        "https://api.telegram.org/bot%s/getUpdates", token);
  }

  printf("La url es:\n%s\n", url);


  return 0;
}

