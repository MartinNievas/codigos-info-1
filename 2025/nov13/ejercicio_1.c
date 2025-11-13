// Link: codeshare.io/info1R1
#include <stdio.h>
#include <string.h>

#define MAX_REGISTROS 100

struct producto {
  int id;
  char nombre[40];
  float precio;
  int stock;
};

unsigned int mostrar_menu(void);
void inicializar_archivo(FILE *ptr);
void actualizar_producto(FILE *ptr);
void eliminar_producto(FILE *ptr);
void consultar_producto(FILE *ptr);
void listar_productos(FILE *ptr);

int main(void) {
  FILE *cfPtr;
  unsigned int opcion;

  // Intenta abrir el archivo en modo "rb+" (leer/escribir binario, debe existir)
  if ((cfPtr = fopen("inventario.dat", "rb+")) == NULL) {
    printf("El archivo 'inventario.dat' no existe. Creando uno nuevo...\n");

    // Si falla, lo crea en modo "wb+" (escribir/leer binario, crea/trunca)
    if ((cfPtr = fopen("inventario.dat", "wb+")) == NULL) {
      puts("Error: No se pudo crear el archivo.");
      return 1; // Salir con error
    } else {
      // Si se crea con éxito, lo inicializamos con registros vacíos
      inicializar_archivo(cfPtr);
    }
  }

  // --- Bucle principal del menú ---
  while ((opcion = mostrar_menu()) != 5) {
    switch (opcion) {
      case 1:
        actualizar_producto(cfPtr);
        break;
      case 2:
        eliminar_producto(cfPtr);
        break;
      case 3:
        consultar_producto(cfPtr);
        break;
      case 4:
        listar_productos(cfPtr);
        break;
      default:
        puts("Opción incorrecta. Intente de nuevo.");
        break;
    }
  }

  fclose(cfPtr); // Cierra el archivo al salir
  puts("Fin del programa.");
  return 0;
}

/**
 * @brief Muestra el menú y retorna la opción elegida
 */
unsigned int mostrar_menu(void) {
  unsigned int op;
  printf("\n--- GESTIÓN DE INVENTARIO ---\n");
  printf("1. Actualizar/Agregar producto\n");
  printf("2. Eliminar producto\n");
  printf("3. Consultar un producto\n");
  printf("4. Listar todos los productos\n");
  printf("5. Salir\n");
  printf("Ingrese su opción (1-5): ");
  scanf("%u", &op);
  return op;
}

/**
 * @brief Escribe MAX_REGISTROS structs vacíos en el archivo.
 * Esto "formatea" el archivo para acceso aleatorio.
 */
void inicializar_archivo(FILE *ptr) {
  // Crea un registro "vacío" que servirá de plantilla
  struct producto prod_vacio = {0, "", 0.0, 0}; 

  // Se posiciona al inicio del archivo
  fseek(ptr, 0, SEEK_SET);

  // Escribe 100 registros vacíos
  for (int i = 0; i < MAX_REGISTROS; i++) {
    fwrite(&prod_vacio, sizeof(struct producto), 1, ptr);
  }
  printf("Archivo 'inventario.dat' inicializado con %d registros.\n", MAX_REGISTROS);
}

// -----------------------------------------------------------------
// TAREA: Completa las siguientes funciones
// -----------------------------------------------------------------

/**
 * @brief Pide un ID (1-100), busca ese registro, y permite al usuario
 * ingresar nueva información para él (nombre, precio, stock).
 * Si el registro estaba vacío (id==0), se crea. Si tenía datos, se sobrescriben.
 */
void actualizar_producto(FILE *ptr) {
  // 1. Pedir al usuario un ID (1-100).
  int id;
  do{
    printf("Ingrese ID: ");
    scanf("%d", &id);
  }while( id < 0 || id > 100);

  // 2. Calcular la posición: (id - 1) * sizeof(struct producto)
  // 3. Mover el cursor a esa posición con fseek(..., SEEK_SET)
  fseek(ptr, id * sizeof(struct producto), SEEK_SET);

  // 4. Crear un 'struct producto' local.
  struct producto local;
  // 5. Pedir al usuario nombre, precio y stock.
  // 6. Asignar esos valores Y el ID al struct local.
  printf("Ingrese nombre: ");
  scanf("%s", local.nombre);
  printf("Ingrese precio: ");
  scanf("%f", &local.precio);
  printf("Ingrese el stock actual: ");
  scanf("%d", &local.stock);

  local.id = id;
  // 7. Volver a mover el cursor a la misma posición (¡importante! scanf no mueve el cursor del archivo)
  // 8. Escribir el struct local en el archivo con fwrite.
  fwrite(&local, sizeof(struct producto), 1, ptr);

}

/**
 * @brief Pide un ID (1-100) y "borra" ese registro.
 * El borrado es lógico: simplemente se sobrescribe el registro
 * con un 'struct producto' vacío (id=0, nombre="", etc.).
 */
void eliminar_producto(FILE *ptr) {
  // AYUDA:
  // 1. Pedir al usuario un ID (1-100).
  // 2. Crear un 'struct producto prod_vacio = {0, "", 0.0, 0};'
  // 3. Calcular la posición: (id - 1) * sizeof(struct producto)
  // 4. Mover el cursor a esa posición con fseek(..., SEEK_SET)
  // 5. Escribir 'prod_vacio' en el archivo con fwrite.

  printf("\n[Función ELIMINAR no implementada]\n");
}

/**
 * @brief Pide un ID (1-100), lee el registro en esa posición
 * y muestra sus datos. Si el 'id' del registro leído es 0,
 * significa que está vacío e informa "Producto no encontrado".
 */
void consultar_producto(FILE *ptr) {
  // AYUDA:
  // 1. Pedir al usuario un ID (1-100).
  // 2. Crear un 'struct producto' local para almacenar la lectura.
  // 3. Calcular la posición: (id - 1) * sizeof(struct producto)
  // 4. Mover el cursor a esa posición con fseek(..., SEEK_SET)
  // 5. Leer el registro del archivo y guardarlo en el struct local con fread.
  // 6. Comprobar si el 'producto.id' leído es 0.
  // 7. Si es 0, imprimir "Registro vacío".
  // 8. Si no es 0, imprimir todos los campos (id, nombre, precio, stock).

  printf("\n[Función CONSULTAR no implementada]\n");
}

/**
 * @brief Lee el archivo secuencialmente desde el principio hasta el fin (feof)
 * y muestra los datos de todos los registros cuyo 'id' no sea 0.
 * (Similar a tu función 'imprimir_usuarios').
 */
void listar_productos(FILE *ptr) {
  // AYUDA:
  // 1. Mover el cursor al inicio del archivo: fseek(ptr, 0, SEEK_SET)
  // 2. Crear un 'struct producto' local.
  // 3. Iniciar un bucle: while ( !feof(ptr) )
  // 4. Dentro del bucle, leer un registro con 'fread(&producto, ...)'
  // 5. IMPORTANTE: Verificar que fread haya leído 1 elemento.
  // 6. Si leyó bien, comprobar si 'producto.id != 0'.
  // 7. Si id != 0, imprimir los datos del producto.

  printf("\n[Función LISTAR no implementada]\n");
}
