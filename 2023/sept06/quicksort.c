#include <stdio.h>
// Link al video: https://www.youtube.com/watch?v=Hoixgm4-P4M

/* La lógica es: comenzamos desde el elemento más a la izquierda
 * y realizamos un seguimiento del índice de elementos más pequeños (o iguales) que i.
 *
 * Mientras recorremos, si encontramos un elemento más pequeño,
 * intercambiamos el elemento actual con arr[i].
 *
 * De lo contrario, ignoramos el elemento actual.
 */
int particion(int arr[], int low, int high)
{
  // Último elemento como pivote
  int pivot = arr[high];

  int i = (low - 1);

  for (int j = low; j <= high - 1; j++) {

    // Si el elemento actual es menor que el pivote
    if (arr[j] < pivot) {

      // Incremento el índice del menor
      i++;
      // Intercambio elementos
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }

  // Intercambio elementos
  int temp = arr[i + 1];
  arr[i + 1] = arr[high];
  arr[high] = temp;

  return (i + 1);
}

// arr[] --> Arreglo a ordenar
// low --> Inicio
// high --> Fin
void quickSort(int arr[], int low, int high)
{
  if (low < high) {

    int pi = particion(arr, low, high);

    // Ordeno antes y después de la partición
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}

int main()
{
  int arr[] = { 10, 7, 8, 9, 1, 5, 4, 2, 13, 30 };
  int N = sizeof(arr) / sizeof(arr[0]);

  quickSort(arr, 0, N - 1);

  printf("Arreglo ordenado: \n");

  for (int i = 0; i < N; i++)
    printf("%d ", arr[i]);

  return 0;
}
