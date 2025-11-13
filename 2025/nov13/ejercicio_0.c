#include <stdio.h>

struct alumno {
  char nombre[20];
  char apellido[20];
  int id;
  int nota[3];
  float promedio;
};

unsigned int ingresar_op(void);
void textFile(FILE *readPtr);
void actualizar_usuario(FILE *fPtr);
void agregar_usuario(FILE *fPtr);
void borrar_ususario(FILE *fPtr);
void imprimir_usuarios(FILE *fPtr);

int main(void) {
  FILE *cfPtr;
  FILE *cfPtr_agregar;

  if (( cfPtr = fopen("baseDeDatos.dat", "rb+") ) == NULL) {
    puts("File could not be opened.");
  } else {
    unsigned int op;

    cfPtr_agregar = cfPtr;

    while ((op = ingresar_op()) != 5) {
      switch (op) {

        case 1:
          /** actualizar_usuario(cfPtr); */
          printf("\nOpción no implementada\n\n");
          break;

        case 2:
          agregar_usuario(cfPtr_agregar);
          break;

        case 3:
          /** borrar_ususario(cfPtr); */
          printf("\nOpción no implementada\n\n");
          break;

        case 4:
          imprimir_usuarios(cfPtr);
          break;

        default:
          printf("Opción incorrecta\n");
          break;
      }
    }
    fclose(cfPtr); // Cerrar el archivo
  }
}

//void actualizar_usuario(FILE *fPtr)
//}

//void borrar_usuario(FILE *fPtr)
//}

void imprimir_usuarios(FILE *fPtr){

  fseek(fPtr, 0, SEEK_SET);
  struct alumno usuario = { "", "", 0, 0, 0, 0, 0.0 };

  printf("-----------------------Imprimir--------------------------------\n");
  printf("---------------------------------------------------------------\n");

  fread(&usuario, sizeof(struct alumno), 1, fPtr);
  while (!feof(fPtr)) {

    if(usuario.id != 0){
      printf("ID: %d\n", usuario.id);
      printf("nombre:%s\nApellido:%s\nNotas:%d %d %d\nPromedio: %f\n",
          usuario.nombre,
          usuario.apellido,
          usuario.nota[0],
          usuario.nota[1],
          usuario.nota[2],
          usuario.promedio);
      printf("---------------------------------------------------------------\n");
    }
    fread(&usuario, sizeof(struct alumno), 1, fPtr);
  }
  printf("---------------------------------------------------------------\n");
  printf("---------------------------------------------------------------\n");
}

void agregar_usuario(FILE *fPtr) {

  unsigned int id_consulta;
  printf("%s", "Ingrese el id (1-100)");

  do {
    scanf("%u", &id_consulta);
  } while (id_consulta < 0 || id_consulta > 100);

  fseek(fPtr, (id_consulta - 1) * sizeof(struct alumno), SEEK_SET);

  struct alumno usuario = { " ", " ", 0, 0, 0, 0, 0.0 };

  fread(&usuario, sizeof(struct alumno), 1, fPtr);

  if (usuario.id != 0) {
    printf("La cuenta #%d ya contiene información.\n", usuario.id);
  } else {

    printf("%s", "Ingrese nombre, apellido y 3 notas\n? ");
    scanf("%20s%20s%d%d%d",
        usuario.nombre,
        usuario.apellido,
        &usuario.nota[0],
        &usuario.nota[1],
        &usuario.nota[2]);
    usuario.promedio = (usuario.nota[0]+usuario.nota[1]+usuario.nota[2])/3.0;
    usuario.id = id_consulta;

    fseek(fPtr, (usuario.id - 1) * sizeof(struct alumno), SEEK_SET);
    fwrite(&usuario, sizeof(struct alumno), 1, fPtr);
  }
}

unsigned int ingresar_op(void) {
  printf("1) Actualizar usuario\n");
  printf("2) Agregar usuario\n");
  printf("3) Borrar usuario\n");
  printf("4) Imprimir\n");
  printf("5) salir\n");
  printf("Ingrese una opción:");

  unsigned int op;
  scanf("%u", &op);
  return op;
}

