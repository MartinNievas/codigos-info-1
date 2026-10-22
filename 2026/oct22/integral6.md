# Ejercicio 4 — Sensores
Utilizando la estructura definida como:
```
typedef struct {
    char ubicacion[80];
    unsigned int id;
    float temperatura;
    float humedad;
} sensor_t;
```

Realizar un programa que cumpla con los siguientes requisitos:
1. Solicitar al usuario ingresar un número tam entero positivo menor que N (constante definida por preprocesador). Validar el ingreso y, en caso de no ser válido, solicitar nuevamente el ingreso.
   El ingreso del número se debe realizar mediante la función:
```
   int ingresarTam(int tamMax);
```
2. Reservar espacio en memoria para un arreglo dinámico sensores con tam elementos de tipo `sensor_t`.
   La reserva debe realizarse mediante malloc en la función main.
   Verificar que la memoria fue reservada correctamente. En caso contrario, imprimir un mensaje de error y terminar el programa.
3. Mediante la función:
```
   sensor_t ingresarElemento(void);
```
   solicitar al usuario ingresar cada uno de los miembros de la estructura `sensor_t`.
   Validar que los valores de temperatura y humedad sean mayores o iguales a 0.
4. Mediante la función:
```
   int contarSensoresAlarma(sensor_t *arreglo, int tam);
```
   contar la cantidad de sensores cuya temperatura sea mayor a 35 grados.
   Imprimir la cantidad obtenida desde la función main.
5. Los sensores cuya temperatura sea mayor a 35 grados deben ser almacenados en un arreglo dinámico sensoresAlarma, con cantidad elementos de tipo `sensor_t`.
   Reservar el espacio mediante malloc en la función main.
   Verificar que la memoria fue reservada correctamente. En caso contrario, imprimir un mensaje de error y terminar el programa.
   Recorrer el arreglo sensores y copiar los sensores que se encuentren en condición de alarma al arreglo sensoresAlarma.
6. Imprimir los sensores en condición de alarma mediante la función:
```
   void imprimirSensoresAlarma(sensor_t *arreglo, int cantidad);
```
7. Liberar la memoria reservada para los arreglos sensores y sensoresAlarma mediante free en la función main.
