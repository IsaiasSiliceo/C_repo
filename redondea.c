#include <stdio.h>
#include <math.h>

/*Prototipos de funciones*/
double redondeaAentero(double);
double redondeaAdecimas(double);
double redondeaAcentecimas(double);
double redondeaAmilesimas(double);

int main(){
  double original;
  printf("Introduce un número: ");
  scanf("%lf",&original);
  
  while (original != -1){
    printf("Original = %.4f\nEntero= %.4f\n",original,redondeaAentero(original));
    printf("Decimas = %.4f\nCentecimas= %.4f\n",redondeaAdecimas(original),redondeaAcentecimas(original));
    printf("Milesimas= %.4f\n",redondeaAmilesimas(original));
    printf("Introduce un número:");
    scanf("%lf", &original);
  }
  return 0;
}

double redondeaAentero(double numero){
  double y;
  return y = floor(numero + .5);
}

double redondeaAdecimas(double numero){
  double y;
  return y = floor(numero*10 + .5)/10;
}

double redondeaAcentecimas(double numero){
  double y;
  return y = floor(numero*100 + .5)/100;
}

double redondeaAmilesimas(double numero){
  double y;
  return y = floor(numero*1000 + .5)/1000;
}

