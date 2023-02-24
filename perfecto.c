#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>

/*Prototipo de función*/
int perfecto (int);

int main(){
  int num_perfecto, numero = 1, contador = 1;

  printf("Lista de números perfectos entre 1 y 10000.\n");
  while(numero <= 10000){
    /*Llamamos a la función perfecto con numero*/
    num_perfecto = perfecto(numero);
    if (num_perfecto != 0){
      printf("%d:\t%d\n",contador,numero);
      contador+=1;
    }
    numero+=1;
  }
  return 0;
}

int perfecto(int numero){
  int num_perfecto, contador;
  /*Para que un número sea perfecto la suma de sus factores debe dar
el número pero el mismo número no juega. El primer perfecto es 6=1+2+3*/
  contador = 1;
  num_perfecto = 0;
  
  while (contador < numero){
    if(numero % contador == 0){
      // Si es 0 entonces contador es un factor
      num_perfecto += contador;
    }
    contador+=1;
  }
  // Si el número es perfecto debe ser igual al numero argumento de la función. 
  if (num_perfecto == numero && num_perfecto != 1){
    return num_perfecto;
  }
  else{
    // De otra manera retornamos cero.
    return 0;
  }
}
