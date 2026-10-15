#include <stdio.h>
#define CANT_PROD 3
// Una tienda necesita almacenar información sobre cinco productos.
// Definir una estructura denominada Producto que contenga:
// - codigo: número entero.
// - nombre: arreglo de caracteres de hasta 29 caracteres.
// - precio: número real.
// - stock: número entero.
// Desarrollar un programa que permita:
// 1. Declarar un arreglo de cinco estructuras Producto.
// 2. Solicitar al usuario los datos de los cinco productos.
// 3. Mostrar un listado completo de los productos.
// 4. Calcular y mostrar el valor total del inventario, sumando el precio multiplicado por el stock de cada producto.
// 5. Identificar y mostrar el producto que tiene el mayor stock.
// Requisitos
// - Utilizar un arreglo de estructuras.
// - Recorrer el arreglo mediante ciclos.
// - Acceder a los miembros utilizando el operador punto.
// - No utilizar punteros a estructuras.
// -----------------------------------------------------
// Ejemplo de resultado
// Suponiendo que se ingresan los siguientes productos:
// | Código | Nombre | Precio | Stock |
// |-----|---------|--------|---|
// | 101 | Teclado | 20000  | 5 |
// | 102 | Mouse   | 10000  | 8 |
// | 103 | Monitor | 150000 | 2 |
// El valor total del inventario de estos tres productos sería:
// 20000 × 5 + 10000 × 8 + 150000 × 2 = 480000
// El programa deberá realizar el cálculo para los cinco productos ingresados.
struct producto{
  // Completar
};


int main(void) {

  struct producto productos[CANT_PROD];
  //Completar

  return 0;
}
