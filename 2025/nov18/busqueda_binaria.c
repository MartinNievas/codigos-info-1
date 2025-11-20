#include <stdio.h>

int busqueda_binaria(int *arr, int n, int x) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            return mid;  // encontrado
        }
        else if (arr[mid] < x) {
            low = mid + 1;  // buscar en derecha
        }
        else {
            high = mid - 1; // buscar en izquierda
        }
    }

    return -1; // no encontrado
}

int main() {
    // Arreglo ordenado de menor a mayor
    int arr[] = {3, 8, 12, 21, 34, 55, 89};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Número a buscar
    int x = 34;

    int result = busqueda_binaria(arr, n, x);

    if (result != -1)
        printf("Elemento %d encontrado en índice %d\n", x, result);
    else
        printf("Elemento %d NO encontrado\n", x);

    return 0;
}

