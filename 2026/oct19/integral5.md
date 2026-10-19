# Ejercicio 4 — Películas
Utilizando la estructura definida como:
```
typedef struct {
    char titulo[80];
    unsigned int codigo;
    unsigned int duracion;
    float calificacion;
} pelicula_t;
```

Realizar un programa que cumpla con los siguientes requisitos:
1. Solicitar al usuario ingresar un número tam entero positivo menor que N (constante definida por preprocesador). Validar el ingreso y, en caso de no ser válido, solicitar nuevamente el ingreso.
   El ingreso del número se debe realizar mediante la función:
```
   int ingresarTam(int tamMax);
```
2. Reservar espacio en memoria para un arreglo dinámico peliculas con tam elementos de tipo `pelicula_t`.
   La reserva debe realizarse mediante malloc en la función main.
   Verificar que la memoria fue reservada correctamente. En caso contrario, imprimir un mensaje de error y terminar el programa.
3. Mediante la función:
```
   pelicula_t ingresarElemento(void);
```
   Validar que el miembro calificacion sea mayor o igual a 0 y menor o igual a 10.
4. Mediante la función:
```
   int contarPeliculasDestacadas(pelicula_t *arreglo, int tam);
```

   contar la cantidad de películas cuya calificación sea mayor o igual a 8.
   Imprimir la cantidad obtenida desde la función main.
5. Las películas con calificación mayor o igual a 8 deben ser almacenadas en un arreglo dinámico destacadas, con cantidad elementos de tipo `pelicula_t`.
   Reservar el espacio mediante malloc en la función main.
   Verificar que la memoria fue reservada correctamente. En caso contrario, imprimir un mensaje de error y terminar el programa.
   Recorrer el arreglo peliculas y copiar las películas destacadas en el arreglo destacadas.
6. Imprimir las películas destacadas mediante la función:
```
   void imprimirDestacadas(pelicula_t *arreglo, int cantidad);
```
7. Liberar la memoria reservada para los arreglos peliculas y destacadas mediante free en la función main.
