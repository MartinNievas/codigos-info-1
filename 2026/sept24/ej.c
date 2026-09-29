/* =========================================================================
 * NIVEL: FÁCIL
 * ========================================================================= */

/*
 * Ejercicio 1: Reserva y liberación básica de un entero
 * Enunciado: Escribe un programa que solicite memoria dinámica con malloc para 
 * almacenar un número entero. Asigna un valor ingresado por el usuario, muéstralo 
 * en pantalla y libera la memoria con free. Verifica que la asignación no retorne NULL.
 */
#include <stdio.h>
#include <stdlib.h>

void ejercicio_1(void) {
    int *ptr = malloc(sizeof(int));
    if (ptr == NULL) {
        perror("Error al asignar memoria");
        return;
    }

    printf("Ingrese un entero: ");
    if (scanf("%d", ptr) == 1) {
        printf("Valor almacenado: %d\n", *ptr);
    }

    free(ptr);
    ptr = NULL;
}

/*
 * Ejercicio 2: Vector dinámico inicializado en cero
 * Enunciado: Solicita al usuario un tamaño N. Utiliza calloc para reservar memoria 
 * para un arreglo de N flotantes. Verifica que los elementos se inicialicen en cero, 
 * pide valores al usuario para llenarlo, calcula el promedio y libera la memoria.
 */
void ejercicio_2(void) {
    int n;
    printf("Ingrese cantidad de elementos: ");
    if (scanf("%d", &n) != 1 || n <= 0) return;

    float *arr = (float *)calloc((size_t)n, sizeof(float));
    if (arr == NULL) {
        perror("Error al asignar memoria");
        return;
    }

    float suma = 0.0f;
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%f", &arr[i]);
        suma += arr[i];
    }

    printf("Promedio: %.2f\n", suma / n);

    free(arr);
    arr = NULL;
}

/*
 * Ejercicio 3: Duplicar una cadena de texto (Implementación de strdup)
 * Enunciado: Escribe una función 'char* duplicar_cadena(const char *src)' que calcule 
 * la longitud de la cadena recibida, reserve la memoria exacta (incluyendo el terminador '\0') 
 * con malloc, copie el contenido y devuelva el puntero resultante.
 */
#include <string.h>

char* duplicar_cadena(const char *src) {
    if (src == NULL) return NULL;
    size_t len = strlen(src) + 1;
    char *dest = (char *)malloc(len * sizeof(char));
    if (dest == NULL) return NULL;

    memcpy(dest, src, len);
    return dest;
}

/*
 * Ejercicio 4: Inversión de un arreglo dinámico in-situ
 * Enunciado: Reserva memoria para un arreglo de N enteros. Rellénalo con valores 
 * aleatorios o secuenciales. Implementa una función que invierta los elementos 
 * dentro de la misma memoria asignada usando aritmética de punteros, y libera la memoria.
 */
void ejercicio_4(void) {
    int n = 6;
    int *arr = (int *)malloc((size_t)n * sizeof(int));
    if (arr == NULL) return;

    for (int i = 0; i < n; i++)
      arr[i] = (i + 1) * 10;

    // Invertir

    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}

/*
 * Ejercicio 5: Estructura dinámica de un Estudiante
 * Enunciado: Define una estructura 'Estudiante' con nombre (cadena estática), edad y nota. 
 * Reserva memoria con malloc para una instancia de la estructura, inicializa sus miembros, 
 * muestra los datos mediante el operador '->' y libera la memoria.
 */
typedef struct {
    char nombre[50];
    int edad;
    float nota;
} Estudiante;

void ejercicio_5(void) {
    Estudiante *e = (Estudiante *)malloc(sizeof(Estudiante));
    if (e == NULL) return;

    snprintf(e->nombre, sizeof(e->nombre), "Carlos Sanchez");
    e->edad = 21;
    e->nota = 8.75f;

    printf("Estudiante: %s, Edad: %d, Nota: %.2f\n", e->nombre, e->edad, e->nota);

    free(e);
    e = NULL;
}


/* =========================================================================
 * NIVEL: MEDIO
 * ========================================================================= */

/*
 * Ejercicio 6: Redimensionamiento dinámico con realloc
 * Enunciado: Crea un programa que lea enteros indefinidamente hasta que el usuario 
 * ingrese -1. La memoria debe comenzar con capacidad para 2 elementos y duplicar su 
 * tamaño con realloc cada vez que se llene. Maneja realloc de forma segura usando un puntero temporal.
 */
void ejercicio_6(void) {
    size_t capacidad = 2;
    size_t total = 0;
    int *arr = (int *)malloc(capacidad * sizeof(int));
    if (arr == NULL) return;

    int val;
    printf("Ingrese numeros (-1 para terminar):\n");
    while (scanf("%d", &val) == 1 && val != -1) {
        if (total == capacidad) {
            capacidad *= 2;
            int *tmp = (int *)realloc(arr, capacidad * sizeof(int));
            if (tmp == NULL) {
                free(arr);
                return;
            }
            arr = tmp;
        }
        arr[total++] = val;
    }

    printf("Leidos %zu elementos.\n", total);
    free(arr);
    arr = NULL;
}

/*
 * Ejercicio 7: Matriz dinámica bidimensional (Arreglo de punteros)
 * Enunciado: Implementa funciones para crear y destruir una matriz de enteros de filas x columnas. 
 * Asigna memoria primero para un arreglo de punteros a filas ('int**') y luego para cada fila individual. 
 * Rellena la matriz con una tabla de multiplicar y libera toda la memoria en el orden inverso correcto.
 */
int** crear_matriz(int filas, int columnas) {
    int **mat = (int **)malloc((size_t)filas * sizeof(int *));
    if (mat == NULL) return NULL;

    for (int i = 0; i < filas; i++) {
        mat[i] = (int *)malloc((size_t)columnas * sizeof(int));
        if (mat[i] == NULL) {
            for (int j = 0; j < i; j++) free(mat[j]);
            free(mat);
            return NULL;
        }
    }
    return mat;
}

void liberar_matriz(int **mat, int filas) {
    if (mat == NULL) return;
    for (int i = 0; i < filas; i++) {
        free(mat[i]);
    }
    free(mat);
}

/*
 * Ejercicio 8: Arreglo dinámico de cadenas (Lectura de líneas variables)
 * Enunciado: Lee N cadenas de texto introducidas por el usuario. Primero reserva memoria 
 * para N punteros ('char**'), lee cada línea en un buffer temporal y asigna exactamente 
 * el tamaño requerido para cada cadena antes de copiarla. Al finalizar, libera cada cadena y el arreglo.
 */
void ejercicio_8(int n) {
    char **lineas = (char **)malloc((size_t)n * sizeof(char *));
    if (lineas == NULL) return;

    char buffer[256];
    for (int i = 0; i < n; i++) {
        printf("Linea %d: ", i + 1);
        if (scanf("%255s", buffer) == 1) {
            lineas[i] = (char *)malloc(strlen(buffer) + 1);
            if (lineas[i] != NULL) {
                strcpy(lineas[i], buffer);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (lineas[i]) {
            printf("%s\n", lineas[i]);
            free(lineas[i]);
        }
    }
    free(lineas);
}

/*
 * Ejercicio 9: Lista simplemente enlazada (Inserción al frente)
 * Enunciado: Define un nodo que contenga un entero y un puntero al siguiente nodo. 
 * Implementa la función 'insertar_frente' usando malloc y una función para recorrer y 
 * liberar secuencialmente todos los nodos asignados para evitar fugas de memoria.
 */
typedef struct NodoSimple {
    int dato;
    struct NodoSimple *siguiente;
} NodoSimple;

void insertar_frente(NodoSimple **cabeza, int valor) {
    NodoSimple *nuevo = (NodoSimple *)malloc(sizeof(NodoSimple));
    if (nuevo == NULL) return;
    nuevo->dato = valor;
    nuevo->siguiente = *cabeza;
    *cabeza = nuevo;
}

void liberar_lista(NodoSimple *cabeza) {
    NodoSimple *actual = cabeza;
    while (actual != NULL) {
        NodoSimple *temp = actual->siguiente;
        free(actual);
        actual = temp;
    }
}

/*
 * Ejercicio 10: Concatenación dinámica de dos cadenas
 * Enunciado: Crea una función 'char* concatenar_dinamico(const char *s1, const char *s2)' 
 * que determine la suma de longitudes de ambas cadenas, reserve memoria dinámica suficiente 
 * para el resultado y el terminador nulo, combine ambas cadenas y retorne la nueva cadena.
 */
char* concatenar_dinamico(const char *s1, const char *s2) {
    if (s1 == NULL || s2 == NULL) return NULL;
    size_t len1 = strlen(s1);
    size_t len2 = strlen(s2);

    char *res = (char *)malloc(len1 + len2 + 1);
    if (res == NULL) return NULL;

    memcpy(res, s1, len1);
    memcpy(res + len1, s2, len2 + 1);
    return res;
}


/* =========================================================================
 * NIVEL: DIFÍCIL
 * ========================================================================= */

/*
 * Ejercicio 11: Matriz contigua 2D en un solo bloque lineal
 * Enunciado: Asigna una matriz de filas x columnas en un único bloque de memoria continuo 
 * para maximizar la localidad de caché y permitir indexación mat[i][j]. Requiere un solo 
 * malloc que reserve espacio tanto para los punteros de filas como para los datos subyacentes. 
 * La liberación debe realizarse con un único free.
 */
int** crear_matriz_contigua(size_t filas, size_t cols) {
    size_t tam_punteros = filas * sizeof(int *);
    size_t tam_datos = filas * cols * sizeof(int);

    int **mat = (int **)malloc(tam_punteros + tam_datos);
    if (mat == NULL) return NULL;

    int *datos = (int *)((char *)mat + tam_punteros);
    for (size_t i = 0; i < filas; i++) {
        mat[i] = datos + (i * cols);
    }
    return mat;
}

void liberar_matriz_contigua(int **mat) {
    free(mat);
}

/*
 * Ejercicio 12: Implementación de un Vector Dinámico Genérico (Estilo std::vector)
 * Enunciado: Crea una estructura 'VectorGenerico' que almacene elementos de cualquier tipo 
 * mediante punteros void*, tamaño de elemento, capacidad y conteo actual. Implementa funciones 
 * para inicializar, insertar elementos (haciendo copias de memoria con memcpy y realloc cuando 
 * se supere la capacidad) y liberar todos los recursos.
 */
typedef struct {
    void *datos;
    size_t tam_elem;
    size_t capacidad;
    size_t longitud;
} VectorGenerico;

VectorGenerico* vector_crear(size_t tam_elem, size_t cap_inicial) {
    VectorGenerico *vec = (VectorGenerico *)malloc(sizeof(VectorGenerico));
    if (!vec) return NULL;

    vec->datos = malloc(tam_elem * cap_inicial);
    if (!vec->datos) {
        free(vec);
        return NULL;
    }
    vec->tam_elem = tam_elem;
    vec->capacidad = cap_inicial;
    vec->longitud = 0;
    return vec;
}

int vector_push(VectorGenerico *vec, const void *elem) {
    if (vec->longitud == vec->capacidad) {
        size_t nueva_cap = vec->capacidad * 2;
        void *nuevos_datos = realloc(vec->datos, nueva_cap * vec->tam_elem);
        if (!nuevos_datos) return 0;
        vec->datos = nuevos_datos;
        vec->capacidad = nueva_cap;
    }
    char *dest = (char *)vec->datos + (vec->longitud * vec->tam_elem);
    memcpy(dest, elem, vec->tam_elem);
    vec->longitud++;
    return 1;
}

void vector_destruir(VectorGenerico *vec) {
    if (vec) {
        free(vec->datos);
        free(vec);
    }
}

/*
 * Ejercicio 13: Árbol Binario de Búsqueda (BST) con eliminación dinámica
 * Enunciado: Implementa una estructura para un árbol binario de búsqueda. Escribe funciones 
 * para insertar nodos con malloc, buscar y eliminar un nodo específico reorganizando los 
 * punteros y liberando la memoria del nodo descartado, además de una función recursiva para 
 * podar y liberar todo el árbol completo.
 */
typedef struct NodoBST {
    int clave;
    struct NodoBST *izq;
    struct NodoBST *der;
} NodoBST;

NodoBST* bst_insertar(NodoBST *raiz, int clave) {
    if (raiz == NULL) {
        NodoBST *nuevo = (NodoBST *)malloc(sizeof(NodoBST));
        if (!nuevo) return NULL;
        nuevo->clave = clave;
        nuevo->izq = nuevo->der = NULL;
        return nuevo;
    }
    if (clave < raiz->clave) raiz->izq = bst_insertar(raiz->izq, clave);
    else if (clave > raiz->clave) raiz->der = bst_insertar(raiz->der, clave);
    return raiz;
}

void bst_liberar(NodoBST *raiz) {
    if (raiz == NULL) return;
    bst_liberar(raiz->izq);
    bst_liberar(raiz->der);
    free(raiz);
}

/*
 * Ejercicio 14: Serialización y deserialización de un Grafo dinámico
 * Enunciado: Define estructuras para representar un grafo usando listas de adyacencia 
 * asignadas dinámicamente. Implementa una función que construya el grafo en memoria y otra 
 * que clone toda la estructura en una nueva zona de memoria dinámica independiente (deep copy), 
 * asegurando la correcta liberación de todos los vértices y aristas en ambas instancias.
 */
typedef struct Adyacencia {
    int vertice_destino;
    struct Adyacencia *siguiente;
} Adyacencia;

typedef struct Grafo {
    int num_vertices;
    Adyacencia **listas;
} Grafo;

Grafo* crear_grafo(int vertices) {
    Grafo *g = (Grafo *)malloc(sizeof(Grafo));
    if (!g) return NULL;
    g->num_vertices = vertices;
    g->listas = (Adyacencia **)calloc((size_t)vertices, sizeof(Adyacencia *));
    if (!g->listas) {
        free(g);
        return NULL;
    }
    return g;
}

void agregar_arista(Grafo *g, int origen, int destino) {
    Adyacencia *nodo = (Adyacencia *)malloc(sizeof(Adyacencia));
    if (!nodo) return;
    nodo->vertice_destino = destino;
    nodo->siguiente = g->listas[origen];
    g->listas[origen] = nodo;
}

void liberar_grafo(Grafo *g) {
    if (!g) return;
    for (int v = 0; v < g->num_vertices; v++) {
        Adyacencia *act = g->listas[v];
        while (act) {
            Adyacencia *tmp = act->siguiente;
            free(act);
            act = tmp;
        }
    }
    free(g->listas);
    free(g);
}

/*
 * Ejercicio 15: Implementación de un Asignador de Memoria Fija (Arena Allocator)
 * Enunciado: Diseña un gestor de memoria simple tipo "Arena". La estructura debe reservar un 
 * único búfer grande con malloc al inicializarse. Implementa 'arena_alloc' que devuelva 
 * punteros dentro de ese bloque alineando las direcciones a múltiplos de 8 bytes y 
 * 'arena_reset' que recicle toda la memoria en O(1) reiniciando el cursor de asignación.
 */
#include <stdint.h>
#include <stddef.h>

typedef struct {
    char *buffer;
    size_t capacidad;
    size_t offset;
} MemoryArena;

MemoryArena* arena_crear(size_t bytes) {
    MemoryArena *arena = (MemoryArena *)malloc(sizeof(MemoryArena));
    if (!arena) return NULL;
    arena->buffer = (char *)malloc(bytes);
    if (!arena->buffer) {
        free(arena);
        return NULL;
    }
    arena->capacidad = bytes;
    arena->offset = 0;
    return arena;
}

void* arena_alloc(MemoryArena *arena, size_t tam) {
    size_t alineacion = sizeof(uintptr_t);
    size_t offset_alineado = (arena->offset + (alineacion - 1)) & ~(alineacion - 1);

    if (offset_alineado + tam > arena->capacidad) {
        return NULL; /* Sin memoria disponible en el buffer */
    }

    void *ptr = &arena->buffer[offset_alineado];
    arena->offset = offset_alineado + tam;
    return ptr;
}

void arena_reset(MemoryArena *arena) {
    if (arena) arena->offset = 0;
}

void arena_destruir(MemoryArena *arena) {
    if (arena) {
        free(arena->buffer);
        free(arena);
    }
}
