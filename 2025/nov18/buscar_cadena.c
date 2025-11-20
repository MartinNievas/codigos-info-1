#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void) {

  // Buscar update_id más alto
  char *p = "{\"ok\":true,\"result\":[{\"update_id\":492977113,"
    "\"message\":{\"message_id\":38,\"from\":{\"id\":11223344,\"is_bot\":false,"
    "\"first_name\":\"Martin\",\"last_name\":\"Nievas\",\"username\":\"Martin_Nievas\","
    "\"language_code\":\"en\"},\"chat\":{\"id\":11223344,\"first_name\":\"Martin\","
    "\"last_name\":\"Nievas\",\"username\":\"Martin_Nievas\",\"type\":\"private\"},"
    "\"date\":1763487860,\"text\":\"Hola\"}}]}";

  unsigned long long int update_id;
  printf("Respuesta:\n%s\n", p);

  while ((p = strstr(p, "\"update_id\":")) != NULL)
  {
    p += strlen("\"update_id\":");
    long long uid = atoll(p);
    if (uid > update_id)
      update_id = uid;
  }

  printf("\nupdate id: %lld\n", update_id);

  return 0;
}
