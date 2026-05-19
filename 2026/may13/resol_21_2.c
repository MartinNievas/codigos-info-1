
int main(void)
{
    int numero, modulo;

    printf("Ingrese su Numero: ");
    scanf(" %d", &numero);

    modulo = numero % 3;
    printf("Si da 0 su numero no es multiplo de 3, si da 1 si lo es\n");
    printf("Su resultado es: %d\n", modulo==0);

    modulo = numero % 5;
    printf("Si da 0 su numero no es multiplo de 5, si da 1 si lo es\n");
    printf("Su resultado es: %d\n", modulo==0);

    return 0;
}
