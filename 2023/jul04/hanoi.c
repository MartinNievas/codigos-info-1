#include <stdio.h>

void hanoi(int num_discos, int clavija_inicio, int clavija_destino, int clavija_temporal) {
  if (num_discos == 1) {
    printf("%d -> %d\n", clavija_inicio, clavija_destino);
    return;
  }

  hanoi(num_discos - 1, clavija_inicio, clavija_temporal, clavija_destino);
  printf("%d -> %d\n", clavija_inicio, clavija_destino);
  hanoi(num_discos - 1, clavija_temporal, clavija_destino, clavija_inicio);
}

int main() {
  int num_discos = 4;
  int clavija_inicio = 1;
  int clavija_destino = 3;
  int clavija_temporal = 2;

  printf("Secuencia de movimientos:\n");
  hanoi(num_discos, clavija_inicio, clavija_destino, clavija_temporal);

  return 0;
}

