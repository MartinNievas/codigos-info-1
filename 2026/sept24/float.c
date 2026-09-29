/*
 * Ejercicio 2: Vector dinámico inicializado en cero
 * Enunciado: Solicita al usuario un tamaño N. Utiliza calloc para reservar memoria·
 * para un arreglo de N flotantes. Verifica que los elementos se inicialicen en cero,·
 * pide valores al usuario para llenarlo, calcula el promedio y libera la memoria.
 */
void ejercicio_2(void) {
    int n;

    do{
      printf("Ingrese cantidad de elementos: ");
      scanf("%d", &n);
    }while(n < 0);

    float *parr;
    parr = calloc(n * sizeof(float);

    for (int i = 0; i < n; i++){
      printf("Ingrese un número: ");
      scanf("%f", parr+i);
    }

    float promedio = 0.0;
    for (int i = 0; i < n; i++)
      promedio += *(parr+i);

    promedio /= n;

    printf("Promedio: %.2f\n", promedio);
    free(parr);

    return 0;
}
