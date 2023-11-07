#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//LUNAD Juan Cruz (Quiero Stiker porfa-	
// Ejercicio 9.7
typedef struct {
  char apodo [20];
  int rango;
  float vida;
  float escudo;
  float mana;

  struct {
    char nombre [20];
    char apellido [20];
    int edad;
  } info_player;
} personaje_t;


int main() {
  personaje_t personaje , * pPersonaje;
  pPersonaje = & personaje ;
  time_t t;


  srand((unsigned) time(&t));

  personaje.vida = 150.0;
  personaje.mana = 0.0;
  personaje.escudo = 0.0;	
  personaje.rango= (rand()%100);

  printf("----------Cargar los elementos directamente----------\n\n");

  printf("Ingrese su Apodo: \n");
  scanf("%s", personaje.apodo);

  printf("Ingrese su Nombre: \n");
  scanf("%s", personaje.info_player.nombre);

  printf("Ingrese su Apellido: \n");
  scanf("%s", personaje.info_player.apellido);

  printf("Ingrese su Edad: \n");
  scanf("%d",&personaje.info_player.edad);


  printf("----------Datos----------\n\n");

  printf("Su Apodo es: %s\n", personaje.apodo);
  printf("Su Rango es: %d\n", personaje.rango);
  printf("Su Vida es: %f\n", personaje.vida);
  printf("Su Escudo es: %f\n", personaje.escudo);
  printf("Su Mana es: %f\n", personaje.mana);

  printf("----------Cargar los elementos Ahora con Punteros----------\n\n");




  printf("Ingrese su Apodo: \n");
  scanf("%s", (pPersonaje)->apodo);
  // scanf("%s", (*pPersonaje).apodo);

  printf("Ingrese su Nombre: \n");
  scanf("%s", pPersonaje->info_player.nombre);

  printf("Ingrese su Apellido: \n");
  scanf("%s", pPersonaje->info_player.apellido);

  printf("Ingrese su Edad: \n");
  scanf("%d",&pPersonaje->info_player.edad);


  printf("----------Datos----------\n");

  printf("Su Apodo es: %s\n", pPersonaje->apodo);
  printf("Su Rango es: %d\n", pPersonaje->rango);
  printf("Su Vida es: %f\n", pPersonaje->vida);
  printf("Su Escudo es: %f\n", pPersonaje->escudo);
  printf("Su Mana es: %f\n", pPersonaje->mana);


  return 0;
}
