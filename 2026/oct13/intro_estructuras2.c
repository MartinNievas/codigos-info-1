#include <stdio.h>

// 1. Declaracion de la estructura
struct Producto {
    int codigo;
    char nombre[30];
    float precio;
    float descuento;
};

// 2. Declaracion de una funcion que recibe una estructura
float calcularPrecioFinal(struct Producto p) {

    float descuentoAplicado;

    descuentoAplicado = p.precio * p.descuento / 100.0;

    return p.precio - descuentoAplicado;
}

int main() {

    // 3. Declaracion e inicializacion de la estructura
    struct Producto producto1 = {
        101,
        "Teclado",
        30000.0,
        10.0
    };

    float precioFinal;

    // 4. Llamada a la funcion pasando la estructura
    precioFinal = calcularPrecioFinal(producto1);

    // 5. Mostrar los resultados
    printf("Producto: %s\n", producto1.nombre);
    printf("Precio original: %.2f\n", producto1.precio);
    printf("Descuento: %.2f%%\n", producto1.descuento);
    printf("Precio final: %.2f\n", precioFinal);

    return 0;
}
