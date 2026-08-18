
// Ejercicios 18/08

//Cuello Leandro
//primer ejercicio
#include <stdio.h>
int contarcifras(int num){
  int cifras = 0;

  do{
    cifras++;
    num/=10;
  } while(num > 0);
  return cifras;
}
int main(void) {
  int num;

  scanf("%d", &num);

  printf("La cant de cifras es: %d", contarcifras(num));
  return 0;
}

//2do ejercicio
#include <stdio.h>

int contarpares(int num){
  int contpar = 0, parimpar, cifras, impar;
  do{


    cifras = num%10;
    parimpar = cifras%2;
    num = num/10;
    if(parimpar == 0){
      contpar++;






      else{
        impar++;
      }
    } while(num!=0);

    return contpar;
  }
  int main(void) {
    int num;

    scanf("%d", &num);

    printf("cant de pares : %d", contarpares(num));
    return 0;
  }

  //3er ejercicio
#include <stdio.h>

  void convertirdias(int totaldias){
    int semanas = 0, dias = 0;

    semanas = totaldias / 7;
    dias = totaldias % 7;

    printf("La cant de semanas es: %d, Y la de dias es : %d",semanas, dias);
  }

  int main(void) {
    int totaldias;
    scanf("%d", &totaldias);
    convertirdias(totaldias);
    return 0;



    //----------------------------------------------------------------------//
    //Ríos y Gutierrez
#include <stdio.h>

    int contarCifras(int n) {
      if (n == 0) {
        return 1;
      }

      int contador=0;

      while (n > 0) {
        n /= 10;
        contador++;
      }

      return contador;
    }

    int main() {
      int nu;
      printf("Introduzca un entero positivo: ");
      scanf("%d", &nu);
      printf("%d", contarCifras(nu));


      return 0;
    }

#include <stdio.h>
    int contarPares ( int n){
      int modulo=0;
      int par=0;

      while (n>0){

        modulo= n%10;

        n= n/10;

        if (modulo%2==0)
          par++;

      }

      return par; 
    }


    int main(int argc, char *argv[]) {
      int num; 
      printf("Ingrese el numero: ");
      scanf("%d", &num); 
      printf("La cantidad de numeros pares es de: %d", contarPares(num)); 

      return 0;
    }






