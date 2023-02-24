// Programa que calcula el factorial de un número usando una función recursiva.

#include <stdio.h>

long factorial( long numero); /*Prototipo de la función*/
int main(){
  int i; //Contador

  //Ciclo para imprimir el factorial de 0 a 10
  for  (i=0; i<=10; i++){
    printf("%2d!= %ld\n",i,factorial(i));
  }

  return 0;
}

/*Definición de factorial()*/

long factorial( long numero){
  if (numero <=1){
    return 1;
  }
  else {
    return (numero*factorial(numero-1));
  }
}

