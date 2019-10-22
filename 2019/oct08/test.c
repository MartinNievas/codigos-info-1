#include <stdio.h>

typedef struct  {
  char nombre[20];
  float precio;
} producto_t;

int main(void)
{
  FILE *cfPtrDat, *cfPtrCsv; 
  producto_t producto;
  int cont = 0;

  if(( cfPtrCsv = fopen("productos1.csv", "r") ) == NULL)
  {
    puts("El archivo no puede ser abierto");
  }
  else 
  {
    printf("Archivo abierto\n");
    cfPtrDat = fopen("productos1.dat", "wb+");
    
    while ( !feof(cfPtrCsv) ) {

      fscanf(cfPtrCsv,"%f%s", &producto.precio, producto.nombre);
      printf("%20s %.2f\n", producto.nombre, producto.precio);

      cont++;
      fseek(cfPtrDat, (cont - 1) * sizeof(producto_t), SEEK_SET);
      fwrite(&producto, sizeof(producto_t), 1, cfPtrDat);
  }
    fclose(cfPtrCsv); 
    fclose(cfPtrDat); 
}
return 0;

}

