#include <stdio.h>

int busqueda_binaria_recursiva(int arr[], int low, int high, int x) {
    if (low > high)
        return -1;  // no encontrado

    int mid = low + (high - low) / 2;

    if (arr[mid] == x)
        return mid;

    if (arr[mid] < x)
        return busqueda_binaria_recursiva(arr, mid + 1, high, x); // derecha
    else
        return busqueda_binaria_recursiva(arr, low, mid - 1, x);  // izquierda
}

int main() {
    // Arreglo ordenado de menor a mayor
    int arr[] = {3, 8, 12, 21, 34, 55, 89};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Elemento a buscar
    int x = 55;

    int result = busqueda_binaria_recursiva(arr, 0, n - 1, x);

    if (result != -1)
        printf("Elemento %d encontrado en índice %d\n", x, result);
    else
        printf("Elemento %d NO encontrado\n", x);

    return 0;
}

