/*Programa para calcular los números primos entre 1 y 10,000
a) Imprime números primos
b) Cuenta los números primos*/
#include<stdio.h>
#include<time.h>

//Prototipo de función
int isPrime(int);

int main(){
  int numero=1,limite=10000; //Límite superior
  int contador=1; // Para contar cuantos son
  printf("Lista de números primos.\n");
  while(numero<=limite){
    // Imprimir todos los primos:
    if (isPrime(numero)== 1){
      printf("%d\t",numero);
      contador +=1;
    }
    numero+=1;
  }
  printf("\n\nHay %d números primos entre %d y %d.",contador,numero-limite,limite);
  return 0;
}

// Función que determina si un número es primo utilizando banderas.
int isPrime(int numero){
  int contador = numero, flags = 0;
  
  while((flags < 3) && (contador != 0)){
    // Si el numero acumula 3 banderas, no es primo.
    if (numero % contador == 0){
      flags +=1;
    }
    contador -= 1;
  }
  if (flags == 2){
    return 1; // Es primo si es divisible entre 1 y entre sí mismo.
  }
  else{
    return 0; // No es primo.
  }
}
