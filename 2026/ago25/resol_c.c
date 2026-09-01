float calcularPromedio(int vec[], int tam){
  int sum = 0;
  for(int i = 0; i < tam; i++){
    sum += vec[i];
  }
  float res = sum/(float)tam;
  return res;
}

