Ejercicios con operadores aritméticos
Mostrar el resultado de:
5 + 3
10 - 7
4 * 6
20 / 5


Mostrar el resultado de:
8 + 2 * 5
(8 + 2) * 5

¿Qué resultado da?
15 / 2
15.0 / 2

Mostrar el resultado de:
100 - 25 * 3

Calcular:
(50 + 10) / 5


Ejercicios con operadores de comparación

(Indicar si imprime: 0 o 1)

Evaluar:
5 > 3
5 < 3
10 == 10
8 != 8
Evaluar:
7 >= 7
6 <= 5
Evaluar:
(4 + 2) > 5
(3 * 3) == 9


Ejercicios combinados (aritmética + comparación)
Mostrar el resultado de:
(5 + 3) > (2 * 4)
(10 - 2) == (3 * 3)
Evaluar:
20 / 4 == 5
18 / 3 != 6
¿Qué devuelve?
(8 * 2) >= (4 * 4)
(9 - 1) <= (3 * 3)


Ejercicios de razonamiento (sin ejecutar primero)
Sin usar la computadora, indicar el resultado de:
6 + 3 * 2
(6 + 3) * 2
Indicar cuál es verdadero:
10 > 5 * 3
(10 > 5) * 3 (esto abre discusión interesante)


Ejercicios tipo Wpredicción de salida"
¿Qué imprime este código?
#include <stdio.h>
int main() {
    printf("%d\n", 5 + 2 * 3);
    return 0;
}

¿Y este?
printf("%d\n", (5 + 2) * 3);

¿Qué imprime?
printf("%d\n", 10 / 3);


Bonus (para discutir en clase)
¿Qué pasa si hago?
printf("%d\n", 5 / 0);
¿Qué imprime?
printf("%d\n", 3 == 3 == 1);

Estructura base:

#include <stdio.h>

int main() {
    printf("%d\n", EXPRESION);
    return 0;
}
