/*
 * Ejercicio 4: Inversión de un arreglo dinámico in-situ
 * Enunciado: Reserva memoria para un arreglo de N enteros. Rellénalo con valores 
 * aleatorios o secuenciales. Implementa una función que invierta los elementos 
 * dentro de la misma memoria asignada usando aritmética de punteros, y libera la memoria.
 */
void ejercicio_4(void) {
    int n = 6;
    int *arr = malloc((size_t)n * sizeof(int));
    if (arr == NULL) return;

    for (int i = 0; i < n; i++)
      arr[i] = (i + 1) * 10;

    // Invertir

    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}
