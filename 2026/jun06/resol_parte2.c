
//Molina Martín
#include <stdio.h>

int main(void){
  int entero;

  printf("Ingrese un número entero: ");
  scanf("%d", &entero);

  if (entero % 2 == 0){
    printf("El número es par");
  }else
    printf("El número es impar");


  return 0;
}

//Santiago Velasco
#include <stdio.h>
int main(int argc, char *argv[]) {
  int num;
  printf("Ingrese un numero entero \n");
  scanf("%d", &num);
  if (num%2==0){
    printf("%d es par", num);
  }else{
    printf("%d es impar", num);
  }
  return 0;
}

int pichosaurio, papa=0;
printf("ingrese numero plz: ");
scanf(" %d", &pichosaurio);
papa = pichosaurio%2;
if (papa == 0){
  printf("el numero es multiplo par");
}
if (papa != 0){
  printf("el numero es impar ");
}

return 0;


//5.19--------------------------------------------//--------------------------------------------
//Molina Martín
#include <stdio.h>

int main(void){
  float sueldo_basico, sueldo_final;

  printf("Ingrese su sueldo basico: ");
  scanf("%f", &sueldo_basico);

  sueldo_final = sueldo_basico + (sueldo_basico * 0.15);

  printf("\nEl sueldo final del empleado es: %0.2f", sueldo_final);

}

//--------------- joaquin
#include <stdio.h>

int main()
{
  int num1, num2, num3;
  printf("ingrese el primer numero entero:");
  scanf("%d", &num1);
  printf("ingrese el segundo numero entero:");
  scanf("%d", &num2);
  printf("ingrese el tercer numero entero:");
  scanf("%d", &num3);

  if ((num1 == num2) && (num2 == num3)){
    printf("Los tres numeros son iguales.\n");
  }
  else if ((num1 <= num2) && (num1 <= num3)){
    printf("El menor es: %d\n", num1);
  }
  else if ((num2 <= num1) && (num2 <= num3)){
    printf("El menor es: %d\n", num2);
  }
  else {
    printf("El menor es: %d\n", num3);
  }

  return 0;
}

//------------------- joaquin
#include <stdio.h>

int main()
{
  int numero;
  printf("ingrese un numero:");
  scanf("%d", &numero);
  if (numero % 2 == 0){
    printf("el numero es par");
  } else {
    printf("el numero es impar");
  }

  return 0;
}

//Santiago Velasco
#include <stdio.h>
int main(int argc, char *argv[]) {
  float sueldo;
  printf("Ingrese su sueldo ");
  scanf("%f",&sueldo);
  printf("Su sueldo final es: %0.3f", sueldo*1.15);
  return 0;
}

float pichosaurio, papa=1.15;
printf("ingrese salario plz: ");
scanf(" %f", &pichosaurio);
printf("Sin Bono: %.2f", pichosaurio);
printf("Con Bon : %.2f", pichosaurio*papa);


return 0;

//Ezequiel Albornoz
#include <stdio.h>

int main() {
  int sueldo,bono;
  printf("Ingresar su sueldo en numero entero: ");
  scanf(" %d",&sueldo);
  bono = (sueldo*15)/100;
  printf("\nEl bono sera de %d siendo en total %d",bono,sueldo+bono);
  return 0;
}



//5.21--------------------------------------------//--------------------------------------------  
//Molina Martín
#include <stdio.h>

int main(void){
  float precio, precio_final;

  printf("Ingrese el precio del producto:");
  scanf("%f", &precio);

  precio_final = precio + (precio * 0.21);

  printf("El precio es: %0.2f ---> Precio final con IVA[21%]: %0.2f", precio, precio_final);
}

--------------------------------------------------------------------
#include <stdio.h>
//defa y mari_terreneitor

int main(int argc, char *argv[]) {

  int n1,n2,n3;
  printf("Ingrese un numero:");
  scanf("%d", &n1);
  printf("Ingrese un segundo numero:");
  scanf("%d", &n2);
  printf("Ingrese un tercer numero:");
  scanf("%d", &n3);

  if (n1 > n3 && n2 > n3){
    printf("%d es el menor", n3);
  }
  if (n1 < n2 && n1 < n3){
    printf("%d es el menor", n1);
  }
  if (n1 > n2 && n2 < n3){
    printf("%d es el menor", n2);
  }

  return 0;
}
//----------------- joaquin
#include <stdio.h>

int main()
{
  float sueldo;
  printf("ingrese su sueldo:");
  scanf("%f", &sueldo);
  float sueldofinal = sueldo * 1.15;
  printf("su sueldo final sera: %.2f\n", sueldofinal);

  return 0;
}
//Santiago Velasco
#include <stdio.h>
int main(int argc, char *argv[]) {
  float precio;
  printf("Ingrese el precio ");
  scanf("%f",&precio);
  printf("Su precio con IVA es: %0.3f", precio*1.21);
  return 0;
}
//--------------------- joaquin
#include <stdio.h>

int main()
{
  float precio;
  printf("ingrese el precio del producto:");
  scanf("%f", &precio);
  float preciofinal = precio * 1.25;
  printf("el precio final sera: %.2f\n", preciofinal);

  return 0;
}

//Ezequiel Albornoz
#include <stdio.h>

int main() {
  int precio,IVA;
  printf("Ingresar el precio en numero entero: ");
  scanf(" %d",&precio);
  IVA = (precio*21)/100;
  printf("\nEl precio de IVA es de %d siendo en total %d",IVA,precio+IVA);
  return 0;
}

float pichosaurio, papa=1.21;
printf("ingrese numero plz: ");
scanf(" %f", &pichosaurio);
printf("el precio con iva seria de: %.2f", pichosaurio*papa);
_________________________________________________________________________
//5.32--------------------------------------------//-------------------------------------------- 

//-------joaquin
#include <stdio.h>

int main()
{
  float num1, num2;
  char opcion;
  printf("ingrese el primer numero: ");
  scanf("%f", &num1);
  printf("ingrese el segundo numero: ");
  scanf("%f", &num2);

  printf("A. Suma\nB. Resta\nC. Division\nD. Multiplicacion\n");
  printf("ingrese una opcion:");
  scanf(" %c", &opcion);

  switch (opcion){
    case 'a':
      float suma = num1 + num2;
      printf("La suma da: %.2f\n", suma);
      break;
    case 'b':
      float resta = num2 - num1;
      printf("La resta da: %.2f\n", resta);
      break;
    case 'c':
      float division = num2 / num1;
      printf("La division da: %.2f\n", division);
      break;
    case 'd':
      float multiplicacion = num1 * num2;
      printf("La multuplicacion da: %.2f\n", multiplicacion);
      break;
    default:
      printf("Opcion no valida");
  }

  return 0;
}  
//Molina Martín
#include <stdio.h>

int main(void){
  int n1, n2, opcion, suma, resta, producto, division;

  printf("Ingrese los dos números enteros: ");
  scanf("%d %d", &n1, &n2);
  printf("\nSeleccione a continuación la operacion que quiera realizar");
  printf("\n[1]Suma, [2]Resta, [3]Multiplicación, [4]División\n");
  scanf("%d", &opcion);

  suma = n1 + n2;
  resta = n1 - n2;
  producto = n1 * n2;
  division = n1 / n2;

  if (opcion == 1){
    printf("El resultado de la suma es: %d", suma);
  }else if (opcion == 2){
    printf("El resultado de la resta es: %d", resta);
  }else if (opcion == 3){
    printf("El resultado de la multiplicación es: %d", producto);
  }else if (opcion == 4){
    printf("El resultado de la división es: %d", division);
  }else{
    printf("Opción incorrecta, ingrese nuevamente.");
  }
  return 0;
}

//Santiago Velasco
#include <stdio.h>
int main(int argc, char *argv[]) {
  int n1, n2, menu;
  printf("Ingrese 2 numeroas enteros \n");
  scanf("%d",&n1);
  scanf("%d",&n2);
  printf("Opciones: \nSuma:          Ingrese 1\nResta:         Ingrese 2\nMultiplicacio: Ingrese 3\nDivision:      Ingrese 4\n");
  scanf("%d",&menu);
  switch(menu){
    case 1:
      printf("Suma: %d + %d = %d", n1, n2, n1+n2);
      break;
    case 2:
      printf("Resta: %d - %d = %d", n1, n2, n1-n2);
      break;
    case 3:
      printf("Multiplicacion: %d * %d = %d", n1, n2, n1*n2);
      break;
    case 4:
      printf("Division: %d / %d = %f", n1, n2, (float)n1/n2);
      break;
    default:
      printf("Opcion no valida");
  }
  return 0;
}

//Nicolas Candia

#include <stdio.h>

int main(int argc, char *argv[]) {
  int num1, num2;
  int sel;
  printf("porfavor, ingrese un numero:");
  scanf("%d %d", &num1, &num2);
  printf("Elija el procedimiento:\n1)suma\n2)resta\n3)multiplicacion\n4)division\n");
  scanf("%d", &sel);
  if (sel == 1){
    printf("%d", num1 + num2);
  }
  if (sel == 2){
    printf("%d", num1 - num2);
  }
  if (sel == 3){
    printf("%d", num1 * num2);
  }
  if (sel == 4){

    printf("%f", (float)num1 / num2);
  }
  if (sel >= 5){
    printf("Sos boludo?\n");
  }
  return 0;
}

float pichosaurio, papa, opcion_deam;
printf("ingrese numeros onda 2 numero..... plz: ");
scanf(" %f %f", &pichosaurio, &papa);
printf("\nmenu\noperaaacione\n1) sume\n2) resta\n3) multipicacon \n4) division\nopcion:");
scanf(" %f", &opcion_deam);
if (opcion_deam==1)
  printf("el resultado es: %.2f", pichosaurio+papa);
if (opcion_deam==2)
  printf("el resultado es: %.2f", pichosaurio-papa);
if (opcion_deam==3)
  printf("el resultado es: %.2f", pichosaurio*papa);
if (opcion_deam==4)
  printf("el resultado es: %.2f", pichosaurio/papa);
if (opcion !=1) && (opcion !=2) && (opcion !=3) && (opcion !=4)
  printf("opcion no valida");


#include <stdio.h>

  int main(int argc, char *argv[]) {
    int numero1, numero2;
    char opciones;
    printf("ingrese el primer numero a continuaciòn: ");
    scanf(" %d",&numero1);
    printf("ingrese el segundo numero a continuaciòn: ");
    scanf(" %d",&numero2);
    printf("Ingrese una de las siguientes opciones: \na:Suma\nb:Resta\nC:multiplicación\nD:División\n");
    scanf(" %c",&opciones);
    switch(opciones){
      case 'A':
        printf("la suma es %d", numero1+numero2);
        break;
      case 'B':
        printf("la resta es %d", numero1-numero2);
        break;
      case 'C':
        printf("la multiplicaciòn es %d", numero1*numero2);
        break;
      case 'D':
        printf("la divisiòn es %d y su resto es %d", numero1/numero2, numero1%numero2);
        break;
      default :
        printf("la opcion seleccionada no es valida, asegurese de usar letras mayusculas");
    }
  }



//Ezequiel Albornoz
#include <stdio.h>

int main() {
  int n1,n2,opc;
  printf("Ingresar 2 numeros enteros(separados por espacio): ");
  scanf(" %d %d",&n1,&n2);

  printf("\n1_ Suma\n2_Resta\n3_Multiplicacion\n4_Divicion\nElegir: ");
  scanf(" %d",&opc);

  if (opc == 1){
    printf("\nLa suma entre %d y %d es %d",n1,n2,n1+n2);

  }else if (opc == 2){
    printf("\nLa resta entre %d y %d es %d",n1,n2,n1-n2);
    printf("\nLa resta entre %d y %d es %d",n2,n1,n2-n1);

  }else if (opc == 3){
    printf("\nEl producto entre %d y %d es %d",n1,n2,n1*n2);

  }else if (opc == 4){
    printf("\nEl cociente entre %d y %d es %d",n1,n2,n1/n2);
    printf("\nEl cociente entre %d y %d es %d",n2,n1,n2/n1);

  }else
    printf("\nOpcion no valida");

  return 0;
}



float papulandia, papuperu;
int un_puente_sobre_el_mar_solo_para_vos;
printf("Ingrese Dos Numeros: ");
scanf(" %f %f", &papulandia, &papuperu);
printf("\nMENU\n");
printf("Opciones\n");
printf("1) Suma\n");
printf("2) Resta\n");
printf("3) Multiplicacion\n");
printf("4) Division\n");
printf("ingrese una opcion: ");
scanf(" %d", &un_puente_sobre_el_mar_solo_para_vos);
switch(un_puente_sobre_el_mar_solo_para_vos){
  case 1:
    printf("La suma de los numeros: %.2f y %.2f es de: %.2f",papulandia, papuperu,papulandia+papuperu);
    break;
  case 2:
    printf("La resta de los numeros: %.2f y %.2f es de: %.2f",papulandia, papuperu,papulandia-papuperu);
    break;
  case 3:
    printf("La multiplicacion de los numeros: %.2f y %.2f es de: %.2f",papulandia, papuperu,papulandia*papuperu);
    break;
  case 4:
    printf("La divicion de los numeros: %.2f y %.2f es de: %.2f",papulandia, papuperu,papulandia/papuperu);
    break;
  default:
    printf("no es una opcion");

}
return 0;
// Martin L
#include <stdio.h>
int main(void)
{
  int num1,num2,opcion;

  printf("Ingrese un numero: ");
  scanf("%d",&num1);

  printf("Ingrese otro numero: ");
  scanf("%d",&num2);

  printf("Usted ingreso %d y %d\n",num1,num2);

  printf("ingrese una opcion: \n1.Suma \n2.resta \n3.multiplicacion \n4.divicion\n");
  scanf("%d",&opcion);

  switch(opcion){
    case 1:
      printf("su Suma es: %d\n",num1+num2);
      break;
    case 2:
      printf("su Resta es: %d\n",num1-num2);
      break;
    case 3:
      printf("su Producto es: %d\n",num1*num2);
      break;
    case 4:
      printf("su Divicion es: %.2f\n",(float)num1/num2);
      break;
    default:
      printf("Opcion No valida");
  }


  return 0;
}


//5.35--------------------------------------------//--------------------------------------------
//Molina Martín
#include <stdio.h>

int main(void){
  float base, altura, alambre;

  printf("Ingrese las dimensiones de su terreno (Base):");
  scanf("%f", &base);
  printf("Ingrese las dimensiones de su terreno (Altura):");
  scanf("%f", &altura);

  alambre = (base * 2) + (altura * 2);

  printf("Para cerrar el terreno con alambre por completo se necesitan: %0.2f[m]", alambre);

  return 0;

}

float pichosaurio, papa, opcion_deam;
printf("ingrese numeros onda 2 numero..... plz: ");
scanf(" %f %f", &pichosaurio, &papa);
printf("los metros de alambre serian de: %f",(pichosaurio*2)+(papa)*2);

Ç______________________________________________________________________________________________________________-
#include <stdio.h>
//defa y mari
int main(int argc, char *argv[]) {

  int s;
  float sF;

  printf ("Ingrese sueldo basico: "); 
  scanf ("%d", &s ); 

  sF = s * 1.15; 
  printf ("Su sueldo es: %.2f", sF );

  return 0;
}
#include <stdio.h>

int main(void) {
  int num2;
  float sueldo;
  printf("ingrese el sueldo total");
  scanf("%d",&num2);
  sueldo = num2*1.15;
  printf("Su sueldo final es:%f",sueldo);

  return 0;
}

#include <stdio.h>
//Escribir un algoritmo que permita ingresar el precio de un producto y calcule el precio final aplicando IVA del 21%.
int main(void) {
  float precio;
  float preciof;

  printf("Escriba el precio");
  scanf("%f",&precio);
  preciof = precio * 1.21;
  printf("el precio final es:%.2f",preciof);

  return 0;
}

//Ezequiel Albornoz
#include <stdio.h>

int main() {
  int b,h,a;
  printf("Ingresar la base y altura(separado con espacios y en metros): ");
  scanf(" %d %d",&b,&h);
  a = (h*2) + (b*2);
  printf("\nLa cantidad de metros de alambre necesarios son %d metros",a);
  return 0;
}


---------------------------------------------------------------------

#include <stdio.h>
//defa y mari
int main(int argc, char *argv[]) {

  int Precio;
  float iva=0.21;
  float precioFinal;

  printf("Ingrese precio del producto: "); 
  scanf("%d", &Precio); 

  precioFinal = Precio  + (Precio*0.21); 
  printf ("\nEl precio final del producto es: %.2f", precioFinal);

  return 0;
}
____________________________________________________________________________________-




//6.1--------------------------------------------//--------------------------------------------  
//Molina Martín
#include <stdio.h>

int main(void){

  int n1, n2, n3;

  printf("Ingrese 3 números enteros distintos:");
  scanf("%d%d%d", &n1, &n2, &n3);

  if (n1 > n2 && n1 > n3){
    printf("El mayor es: %d", n1);
  }else if (n1 < n2 && n2 > n3){
    printf("El mayor es: %d", n2);
  }else{
    printf("El mayor es: %d", n3);
  }


  return 0;

}

//Santiago Velasco
#include <stdio.h>
int main(int argc, char *argv[]) {
  int l1, l2, l3;
  printf("Ingrese la medida de los 3 lados\n");
  scanf("%d%d%d", &l1, &l2, &l3);
  if ((l1+l2<=l3)||(l1+l3<=l2)||(l2+l3<=l1)){
    printf("No es posible :(");
  }else{
    printf("Es posible");
  }
  return 0;
}


#include <stdio.h>

int main() {
  int num1, num2, num3;

  printf("Ingrese el primer numero: ");
  scanf("%d", &num1);

  printf("Ingrese el segundo numero: ");
  scanf("%d", &num2);

  printf("Ingrese el tercer numero: ");
  scanf("%d", &num3);

  if (num1 > num2 && num1 > num3) {
    printf("El mayor es: %d\n", num1);
  } else if (num2 > num1 && num2 > num3) {
    printf("El mayor es: %d\n", num2);
  } else {
    printf("El mayor es: %d\n", num3);
  }

  return 0;
}

#include <stdio.h>

int main() {
  int num1, num2, num3;

  printf("Ingrese el primer numero: ");
  scanf("%d", &num1);

  printf("Ingrese el segundo numero: ");
  scanf("%d", &num2);

  printf("Ingrese el tercer numero: ");
  scanf("%d", &num3);

  if (num1 > num2 && num1 > num3) {
    printf("El mayor es: %d\n", num1);
  } else if (num2 > num1 && num2 > num3) {
    printf("El mayor es: %d\n", num2);
  } else {
    printf("El mayor es: %d\n", num3);
  }

  return 0;
}




//6.2--------------------------------------------//--------------------------------------------
//Molina Martín
#include <stdio.h>

int main(void){

  float long1, long2, long3;

  printf("Ingrese las 3 longitudes: ");
  scanf("%f%f%f", &long1, &long2, &long3);

  if (long1 + long2 == long3 || long1 + long3 == long2 || long2 + long3 == long1){
    printf("No es posible formar un triángulo, son colineales.");
  }else if (long1 + long2 < long3 || long1 + long3 < long2 || long2 + long3 < long1){
    printf("No es posible formar un triángulo, no se conectan.");
  }else{
    printf("Es posible formar un triángulo.");
  }



  return 0;

}

//Ezequiel Albornoz
#include <stdio.h>

int main() {
  int a,b,c;
  printf("Ingresar las tres longitudes: ");
  scanf(" %d %d %d",&a,&b,&c);

  if ((a+b)>c){
    printf("\nSe puede hacer un triangulo");
  }else
    printf("\nNo se puede hacer un triangulo");
  return 0;
}


//6.3--------------------------------------------//--------------------------------------------
//Molina Martín
#include <stdio.h>

int main(void){

  float coordX, coordY;

  printf("Ingrese la coordenada en X: ");
  scanf("%f", &coordX);
  printf("Ingrese la coordenada en Y: ");
  scanf("%f", &coordY);

  if (coordX > 0 && coordY > 0){
    printf("Las coordenadas pertenecen al primer cuadrante.");
  }else if (coordX < 0 && coordY > 0){
    printf("Las coordenadas pertenecen al segundo cuadrante.");
  }else if (coordX < 0 && coordY < 0){
    printf("Las coordenadas pertenecen al tercer cuadrante.");
  }else if (coordX > 0 && coordY < 0){
    printf("Las coordenadas pertenecen al cuatro cuadrante.");
  }else if (coordX != 0 && coordY == 0){
    printf("El punto se encuentra en el eje X.");
  }else if (coordX == 0 && coordY != 0){
    printf("El punto se encuentra en el eje Y.");
  }else{
    printf("El punto se encuentra en el origen.");
  }


  return 0;

}
