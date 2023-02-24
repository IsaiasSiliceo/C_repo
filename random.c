#include <stdio.h>
#include <stdlib.h>
/*Escriba instrucciones para encontrar eneros entre los siguientes rangos
En general un número aleatorio entre a y b se encuentra con:
n = a + rand() %b
*/

int main(){
  int n; // Entero aleatorio en el rango
  unsigned semilla;

  printf("Introduzca una semilla: ");
  scanf("%u",&semilla);
  srand(semilla);

  /*1<=n<=2*/
  n = 1+ (rand()%2);
  printf("Número aleatorio entre 1 y 2: %d \n",n);
  /*1<=n<=100*/
  n = 1+ (rand()%100);
  printf("Número aleatorio entre 1 y 100: %d \n",n);
  /*0<=n<=9*/
  n = 0 + (rand()%9);
  printf("Número aleatorio entre 0 y 9: %d \n",n);
  /*1000<=n<=1112*/
  n = 1000+ (rand()%112);
  printf("Número aleatorio entre 1000 y 1112: %d \n",n);
  /*-1<=n<=1*/
  n = -1+ (rand()%1);
  printf("Número aleatorio entre -1 y 1: %d \n",n);
  /*-3<=n<=11*/
  n = -3+ (rand()%11);
  printf("Número aleatorio entre -3 y 11: %d \n",n);

  return 0;
}
