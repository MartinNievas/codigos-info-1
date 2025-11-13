#include <stdio.h>
#include <string.h>
#include <limits.h>

#define MAX_REGISTROS 100

struct producto {
    int id;
    char nombre[40];
    float precio;
    int stock;
};

// --- Prototipos de Funciones ---
unsigned int mostrar_menu(void);
void inicializar_archivo(FILE *ptr);
void actualizar_producto(FILE *ptr);
void eliminar_producto(FILE *ptr);
void consultar_producto(FILE *ptr);
void listar_productos(FILE *ptr);
void encontrar_producto_min_stock(FILE *ptr); // <<-- Implementar

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
            inicializar_archivo(cfPtr);
        }
    }

    // --- Bucle principal del menú ---
    // ¡Ahora la opción de salir es la 6!
    while ((opcion = mostrar_menu()) != 6) { 
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
            case 5:
                encontrar_producto_min_stock(cfPtr); // ¡NUEVO!
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
    printf("5. Encontrar producto con menor stock\n"); // ¡NUEVO!
    printf("6. Salir\n");                            // ¡Actualizado!
    printf("Ingrese su opción (1-6): ");
    scanf("%u", &op);
    return op;
}

/**
 * @brief Escribe MAX_REGISTROS structs vacíos en el archivo.
 */
void inicializar_archivo(FILE *ptr) {
    struct producto prod_vacio = {0, "", 0.0, 0}; 
    fseek(ptr, 0, SEEK_SET);
    for (int i = 0; i < MAX_REGISTROS; i++) {
        fwrite(&prod_vacio, sizeof(struct producto), 1, ptr);
    }
    printf("Archivo 'inventario.dat' inicializado con %d registros.\n", MAX_REGISTROS);
}

void actualizar_producto(FILE *ptr) {
    printf("\n[Función ACTUALIZAR no implementada]\n");
}

void eliminar_producto(FILE *ptr) {
    printf("\n[Función ELIMINAR no implementada]\n");
}

void consultar_producto(FILE *ptr) {
    printf("\n[Función CONSULTAR no implementada]\n");
}

void listar_productos(FILE *ptr) {
    printf("\n[Función LISTAR no implementada]\n");
}

/**
 * @brief Recorre secuencialmente todo el archivo, busca el producto
 * con la menor cantidad de stock (que no sea 0), e imprime sus datos.
 */
void encontrar_producto_min_stock(FILE *ptr) {
    // Imprimir el producto por pantalla

    printf("\n[Función ENCONTRAR MENOR STOCK no implementada]\n");
}
