#include <stdio.h>

int main(void) {

  int num;

  do{
    printf("Ingresar un número positivo: ");
    scanf("%d", &num);
  }while(num < 0);

  return 0;
}


//---
#include <stdio.h>

int main(void) {

  int op;

  do{
    printf("1) Saludo\n2)Salir\n");
    printf("Ingrese una opción: ");
    scanf("%d", &op);

    switch(op){
      case 1:
        printf("Hola!\n");
        break;
      case 2:
        printf("Chau\n");
        break;
      default:
        printf("No es una opción válida\n");
        break;
    }
  }while(op != 2);


  return 0;
}


main(void) {

  int op;
  !!no lo peges aqui!
    do{
      printf("1) Saludo\n2)Salir\n");
      printf("Ingrese una opción: ");
      scanf("%d", &op);

      switch(op){
        case 1:
          printf("Hola!\n");
          break;
        case 2:
          printf("Chau\n");
          break;
        default:
          printf("No es una opción válida\n");
          break;
      }
    }while(op != 2);


  // Enunciados:
1: int main(void) {
     int main(void) {

       int op;

       do{
         printf("1) Saludo\n2)Salir\n");
         printf("Ingrese una opción: ");
         scanf("%d", &op);

         switch(op){
           case 1:
             printf("Hola!\n");
             break;
           case 2:
             printf("Chau\n");
             break;
           default:
             printf("No es una opción válida\n");
             break;
         }
       }while(op != 2);

       switch(op){
         case 1:
           printf("Hola!\n");
           break;
         case 2:
           printf("Chau\n");
           break;
         default:
           printf("No es una opción válida\n");
           break;
       }
     }while(op != 2);



     1. Escribir un algoritmo que permita validar el ingreso de una nota de
       examen. El programa debe solicitar la nota repetidamente hasta que
       el valor ingresado esté en el rango de [1, 10].

       2. Escribir un algoritmo que muestre un menú con opciones para realizar
       conversiones de temperatura:
       1: Celsius a Fahrenheit
       2: Fahrenheit a Celsintius,
       3: Salir.
         El menú debe repetirse y procesarse hasta que el usuario elija la opción
         de salir (3), validando que las opciones ingresadas sean correctas.


         3. Escribir un algoritmo que solicite la clave de acceso a una cuenta (un
             valor numérico entero, por ejemplo: 1234). El usuario tiene un máxi-
         mo de 3 intentos para ingresar la clave correcta. Si acierta, mostrar
         un mensaje de bienvenida; si agota los intentos, mostrar un mensaje
         indicando que el sistema se ha bloqueado.


         4. Escribir un algoritmo que simule un cajero automático. El saldo inicial
         es de 50000 ARS. Se debe presentar el siguiente menú de opciones:
         1: Consultar saldo,
       2: Depositar dinero,
       3: Retirar dinero,
       4: Salir.
         El menú debe repetirse hasta que se seleccione la opción 4. Controlar
         que no sea posible retirar más dinero del saldo disponible en la cuenta.


         5. Escribir un algoritmo que solicite números enteros al usuario y los vaya
         sumando. Después de ingresar cada número, se debe preguntar al usua-
         rio: "¿Desea ingresar otro número? (S/N)". El bucle debe continuar
         mientras el usuario responda ’S’ o ’s’.

         6. Escribir un algoritmo que permita ingresar el peso de diferentes paque-
         tes que se deben cargar en un camión. El límite máximo de carga del
         camión es de 1000 kg. El ingreso de paquetes debe detenerse cuando
         se supere dicho límite, informando el peso total cargado y la cantidad
         de paquetes aceptados (sin incluir el paquete que superó el límite).
         7. Escribir un algoritmo que solicite un número entero positivo y valide
         que sea par y mayor que 100. Repetir la solicitud hasta que se cumpla
         la condición.
         8. [Desafío] Juego de NIM: Se inicia el juego con una pila de N fichas
         (ingresado por el usuario, mayor a 10). Dos jugadores (el usuario y
             la computadora) retiran alternadamente 1, 2 o 3 fichas. Pierde quien
         se vea obligado a retirar la última ficha. Escribir un algoritmo con
         do-while que implemente el bucle del juego, validando rigurosamente
           que las entradas de fichas a retirar estén en el rango [1, 3] y no superen
             la cantidad disponible. Diseñar la lógica para que la computadora in-
             tente jugar de forma óptima.






             //-----------------------------------------------------------------------------------
             /******************************************************************************

               de: Quinteros Brian

               1. Escribir un algoritmo que permita validar el ingreso de una nota de
               examen. El programa debe solicitar la nota repetidamente hasta que
               el valor ingresado esté en el rango de [1, 10].

              *******************************************************************************/

#include <stdio.h>

             int main()
             {
               int nota;
               do {
                 printf("Ingrese nota del examen: [1, 10] \n");
                 scanf("%d", &nota);

                 if (nota<1 || nota>10)
                   printf("Error. Ingrese el numero nuevamente... \n\n");

               } while(nota<1 || nota>10);

               printf("Numero correcto de nota, dentro del rango.");

               return 0;
             }


         /******************************************************************************

de: Quinteros Brian

2. Escribir un algoritmo que muestre un menú con opciones para realizar
conversiones de temperatura:
1: Celsius a Fahrenheit,
2: Fahrenheit a Celsius,
3: Salir.
El menú debe repetirse y procesarse hasta que el usuario elija la opción
de salir (3), validando que las opciones ingresadas sean correctas.

          *******************************************************************************/

#include <stdio.h>

         int main()
         {
           int opc;
           float fahrenheit, celcius;
           do{

             do {
               printf("Menu: \n");
               printf("1: Celsius a Fahrenheit \n");
               printf("2: Fahrenheit a Celsius \n");
               printf("3: Salir. \n");
               printf("\n\n");

               printf("Ingrese la opción a realizar: [1, 3] \n");
               scanf("%d", &opc);

               if (opc>3 || opc<1)
                 printf("Error. Ingrese la opción nuevamente... (fuera de rango) \n\n");
               else if(opc==3)
                 break;
             } while(opc>3 || opc<1);

             switch(opc){
               case 1:
                 printf("Ingrese los grados celcius: \n");
                 scanf("%f", &celcius);
                 fahrenheit = (celcius*9/5) + 32;
                 printf("Pasado de grado celcius a fahrenheit es de: %.2f\n\n", fahrenheit);
                 break;
               case 2:
                 printf("Ingrese los grados fahrenheit: \n");
                 scanf("%f", &fahrenheit);
                 celcius = (fahrenheit - 32) /1.8;
                 printf("Pasado de grado fahrenheit a celcius es de: %.2f\n\n", celcius);
                 break;
               case 3:
                 break;
             }  

           }while(opc!=3);
           printf("Programa finalizado. \n");
           return 0;
         }


         /******************************************************************************

de: Quinteros Brian

3. Escribir un algoritmo que solicite la clave de acceso a una cuenta (un
valor numérico entero, por ejemplo: 1234). El usuario tiene un máxi-
mo de 3 intentos para ingresar la clave correcta. Si acierta, mostrar
un mensaje de bienvenida; si agota los intentos, mostrar un mensaje
indicando que el sistema se ha bloqueado.

          *******************************************************************************/

#include <stdio.h>

         int main()
         {
           int clave = 1234, contador = 0, clave_cuenta;
           do {
             printf("Ingrese la clave de acceso para la cuenta: \n");
             scanf("%d", &clave_cuenta);
             contador = contador + 1;
             if (contador == 3)
               break;

             if(clave != clave_cuenta && contador <3)
               printf("Error, ingrese nuevamente. \n\n");

           } while(clave_cuenta!=clave);
           if(clave == clave_cuenta)
             printf("Bienvenido a la cuenta...\n");
           else if (contador == 3 )
             printf("Se le ha acabado los intentos...\n");
           return 0;
         }

         /******************************************************************************

           4. Escribir un algoritmo que simule un cajero automático. El saldo inicial
           es de 50000 ARS. Se debe presentar el siguiente menú de opciones:
1: Consultar saldo,
2: Depositar dinero,
3: Retirar dinero,
4: Salir.
El menú debe repetirse hasta que se seleccione la opción 4. Controlar
que no sea posible retirar más dinero del saldo disponible en la cuenta.

          *******************************************************************************/

#include <stdio.h>

         int main()
         {
           int opc;
           float saldo = 50000, saldo_depositar, retirar;
           do{
             do {
               printf("Menu: \n");
               printf("1: Consultar saldo \n");
               printf("2: Depositar dinero \n");
               printf("3: Retirar dinero \n");
               printf("4: Salir\n\n");

               printf("Ingrese la opción a realizar: [1, 4] \n");
               scanf("%d", &opc);

               if (opc>4 || opc<1)
                 printf("Error. Ingrese la opción nuevamente... (fuera de rango) \n\n");
               else if(opc==4)
                 break;
             } while(opc>4 || opc<1);

             switch(opc){
               case 1:
                 printf("Saldo actual: $%.2f \n", saldo);
                 break;
               case 2:
                 printf("Ingrese saldo a depositar: \n");
                 scanf("%f", &saldo_depositar);
                 saldo = saldo + saldo_depositar;
                 printf("Saldo Depositado! \n\n");
                 break;
               case 3:
                 printf("Ingrese saldo a retirar: \n");
                 scanf("%f", &retirar);
                 if (retirar<=saldo)
                   saldo = saldo - retirar;
                 else
                   printf("No se puede retirar dinero, dinero insuficiente...");
                 break;
               case 4:
                 break;
             }  

           }while(opc!=4);
           printf("Programa finalizado. \n");
           return 0;
         }

         /******************************************************************************

           5. Escribir un algoritmo que solicite números enteros al usuario y los vaya
           sumando. Después de ingresar cada número, se debe preguntar al usua-
rio: "¿Desea ingresar otro número? (S/N)". El bucle debe continuar
mientras el usuario responda ’S’ o ’s’.

          *******************************************************************************/

#include <stdio.h>

         int main()
         {
           int suma = 0, num;
           char rta;
           do {
             printf("Ingrese un numero entero positivo: \n");
             scanf("%d", &num);
             suma = suma + num;
             printf("¿Desea ingresar otro número? (S/N) \n");
             scanf(" %c", &rta);
           } while(rta == 'S' || rta == 's');

           printf("La suma total de todos los numeros ingresados es de: %d", suma);
           return 0;
         }



         -----------------------------------------------------------------------------------////
                                                                                            //1
#include <stdio.h>

           int main()
           {
             int nota;
             do{
               printf("Ingrese la nota de examen(1-10): ");
               scanf("%d",&nota);
               if(nota < 1 || nota > 10)
                 printf("ERROR. ");
             }while(nota < 1 || nota > 10);

             return 0;
           }
         ------------------------------------------------------------------------------------------
           //Tiziana Ruarte Act 1.
#include <stdio.h>

           int main(int argc, char *argv[]) {

             int nota;
             do{
               printf("Ingrese su nota:\n");
               scanf("%d", & nota);
             }while ( nota > 10 || nota < 0);

             printf("\nNota recibida");
             return 0;
           }
         -------------------------------------------------------------------------
           ernesto armando fernandez roque

           /*1. Escribir un algoritmo que permita validar el ingreso de una nota de
             examen. El programa debe solicitar la nota repetidamente hasta que
             el valor ingresado esté en el rango de [1, 10].*/
#include <stdio.h>

           int main()
           {
             int nota;

             do{
               printf("ingrese su nota: ");
               scanf("%d",&nota);
               if(nota > 10 || nota < 0){
                 printf("invalida, reintente");
               }
             }while(nota > 11 || nota < 0);
             printf("nota ingresada %d", nota);

             return 0;
           }


         /*2. Escribir un algoritmo que muestre un menú con opciones para realizar
           conversiones de temperatura:
1: celsius a Fahrenheit,
2: Fahrenheit a Celsintius,
3: Salir.
El menú debe repetirse y procesarse hasta que el usuario elija la opción
de salir (3), validando que las opciones ingresadas sean correctas.
*/
#include <stdio.h>

         int main()
         {
           int selec;
           float f, c;
           do{
             printf("ingrece una opcion de convercion: \n1: celsius a Fahrenheit \n2: Fahrenheit a celsius \n3: salir \n");
             scanf("%d",&selec);
             switch(selec){
               case 1:{
                        printf("ingrese los grados");
                        scanf("%f",&f);
                        c = (f - 32 ) * 5/9;
                        printf("%.2fº Fahrenheit equivalen a %.2fº celsius\n",f,c);
                        break;
                      }
               case 2:{
                        printf("ingrese los grados");
                        scanf("%f",&c);
                        f = (c * 9/5)+32;
                        printf("%.2fº Fahrenheit equivalen a %.2fº celsius\n",c,f);
                        break;
                      }
             }
           }while(selec != 3);

           printf("chau");
           return 0;
         }
         -------------------------------------------------------------------------
           //2



           _______________________________________________________________________________________________________
           // Kevin Gumiel
#include <iostream>

           int main()
           {
             int n;
             do {
               printf("ingrese el valor de una nota entre 1 a 10:\n");
               scanf( "%d", &n);
             } while( n > 10 || n < 1 );
             printf("nota valida!!");
             return 0;
           }
         _______________________________________________________________________________________________________
           //Tiziana Ruarte
#include <stdio.h>
           /*2. Escribir un algoritmo que muestre un menú con opciones para realizar
             conversiones de temperatura:
             1: Celsius a Fahrenheit,
             2: Fahrenheit a Celsius,
             3: Salir.
             El menú debe repetirse y procesarse hasta que el usuario elija la opción
             de salir (3), validando que las opciones ingresadas sean correctas.*/
           int main(int argc, char *argv[]) {

             int op;
             int temp;
             int resul;
             do{
               printf("\n¿Qué desea realizar?\n 1.Pasar Celsius a Fahrenheit\n 2.Pasar Fahrenheit a Celsius\n 3.Salir\n");

               scanf("%d", &op);

               switch(op){
                 case 1:
                   printf("Ingrese la temperatura a convertir:");
                   scanf("%d", &temp);
                   resul = ((temp * 1,8) + 32);
                   printf("\nLa temperatura sera : %d",resul);
                   break;
                 case 2:
                   printf("Ingrese la temperatura a convertir:");
                   scanf("%d", &temp);
                   resul = (((temp - 32)* 5) / 9);
                   printf("\nLa temperatura sera: %dº",resul);
                   break;
                 case 3:
                   printf("Adios");
                   break;
               }
             } while(op !=3);
             -------------------------------------------------------------------------------------------------------------------------

               //1 Jean franco ceglia
#include <stdio.h>

               int main() {

                 float nota;
                 printf("ingrese una nota: ");
                 scanf("%f", &nota);
                 if(nota < 0 || nota > 10){
                   do{
                     printf("ingrese una nota: ");
                     scanf("%f", &nota);

                   }while(nota < 0 || nota > 10);

                   printf("%f", nota);
                 }else{
                   printf("%f", nota);
                 }


                 return 0;
               }
             ------------------------------------------------------------------------------------------------------------
               "Problema 2 ********"

#include <stdio.h>

               int main(int argc, char *argv[]) {
                 int num,op;
                 float Cel,Fare;
                 do {
                   printf ("\tIngrese la opcion que quiere realizar\n");
                   printf ("1) Celsius a Fahrenheit\n2)Fahrenheit a Celsius\n3) Salir\n ---> ");
                   scanf ("%d",&op);

                   switch (op){
                     case 1:
                       printf ("Ingrese la temperatura ---> ");
                       scanf ("%d",&num);
                       Fare= ((float)num * 9/5) + 32;
                       printf ("su convercion es %.2f\n\n\t", Fare);
                       break;
                     case 2:
                       printf ("Ingrese la temperatura ---> ");
                       scanf ("%d",&num);
                       Cel = ((float)num - 32)*5/9;
                       printf ("su convercion es %.2f\n\n\t", Cel);
                       break;
                     case 3:
                       op = 0;
                       printf ("\n\t**********Adios ************");
                       break;
                     default:
                       printf ("\t !!!!!! Ingreso una opcion incorrecta !!!!!!! \n\n");
                       break;
                   }
                 }while (!(op == 0));
                 return 0;
               }
             ---------------------------------------------------------------------------------------------------------------
               //Tizana Ruarte
               /*3. Escribir un algoritmo que solicite la clave de acceso a una cuenta (un
                 valor numérico entero, por ejemplo: 1234). El usuario tiene un máxi-
                 mo de 3 intentos para ingresar la clave correcta. Si acierta, mostrar
                 un mensaje de bienvenida; si agota los intentos, mostrar un mensaje
                 indicando que el sistema se ha bloqueado.*/

#include <stdio.h>

               int main(int argc, char *argv[]) {

                 int intento=0;
                 int op;
                 do{
                   printf("\nIngrese la contraseña:");
                   scanf("%d", &op);

                   switch(op){
                     case 777:
                       printf("Contraseña correcta");
                       break;
                     default:
                       printf("\nContraseña incorrecta\nIntente de nuevo");
                       ++intento;}
                 } while(intento < 3);

                 printf("\nSin intentos restantes");


                 return 0;
               }
             --------------------------------------------------------------------------------------------------------




#include <stdio.h>
#include <time.h>
#include <stdlib.h>

               int main(void) {

                 srand(time(NULL));
                 int num_secreto = rand() % 101;
                 int num;

                 do{
                   printf("Ingrese un número: ");
                   scanf("%d", &num);
                   if(num < num_secreto)
                     printf("Es más grande\n");
                   if(num > num_secreto)
                     printf("Es más chico\n");
                 }while(num != num_secreto);

                 printf("Adivinaste!!\n");

                 return 0;
               }

