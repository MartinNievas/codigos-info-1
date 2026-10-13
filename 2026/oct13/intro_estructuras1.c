#include <stdio.h>

struct Producto {
    int codigo;
    char nombre[30];
    float precio;
};

int main() {

    // 1. Inicializacion de una estructura
    struct Producto p1 = {101, "Teclado", 25000.0};

    printf("PRODUCTO INICIAL\n");
    printf("Codigo: %d\n", p1.codigo);
    printf("Nombre: %s\n", p1.nombre);
    printf("Precio: %.2f\n\n", p1.precio);

    // 2. Declaracion de un arreglo de estructuras
    struct Producto productos[3];

    // 3. Carga de datos
    for (int i = 0; i < 3; i++) {

        printf("Ingrese codigo: ");
        scanf("%d", &productos[i].codigo);

        printf("Ingrese nombre: ");
        scanf("%29s", productos[i].nombre);

        printf("Ingrese precio: ");
        scanf("%f", &productos[i].precio);
    }

    // 4. Mostrar todos los productos
    printf("\nLISTADO DE PRODUCTOS\n");

    for (int i = 0; i < 3; i++) {

        printf("\nProducto %d\n", i + 1);
        printf("Codigo: %d\n", productos[i].codigo);
        printf("Nombre: %s\n", productos[i].nombre);
        printf("Precio: %.2f\n", productos[i].precio);
    }

    return 0;
}
