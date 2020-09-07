#define TAM 1<<15

int ingresar_tam(void);
void cargar_arreglo(int *, int);
void ordena_arreglo_burbuja(int *, int, void (*)(int *, int *));
void ordena_arreglo_burbuja_mejorado(int *, int, void (*)(int *, int *));
void imprime_arreglo(int *, int);
int buscar_elemento_secuencial(int *,int , int );
int buscar_elemento_binario(int *,int , int );
void swap_menor(int *, int *);
void swap_mayor(int *, int *);

