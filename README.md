# C_repository

Repositorio de C estándar con ejercicios básicos de programación


Para compilar en una terminal de GNU/Linux. Utilizamos el segundo caso cuando incluye la biblioteca <math.h> y el último comando para ejecutar el programa.
```
gcc -o programa programa.c
gcc -o programa programa.c -lm 
./programa
```
## perfecto.c
Calcula los números perfectos entre 1 y 10,000. Para que un número sea perfecto debe cumplir con la condición de que la suma de sus factores sean igual al número que la función perfecto() toma como argumento.

## redondea.c
Redondea números de tipo double con la función implícita floor().

## random.c
Muestra cómo imprimir números "aleatorios" en un intervalo comprendido entre a y b.
En general, si n es un número aleatorio, este se calcula como n =  a + (rand() % b);
También se incluye la función srand() de la biblioteca <stdlib.h> para hacer uso de una semilla.
Una misma semilla puede ser útil si se requiere generar un mismo número aleatorio.

## primo.c
Programa para calcular los números primos entre 1 y limite (Se puede incrementar el límite hasta donde lo permita el rango del tipo de dato "int")
Si se requiere un número más grande que 32,767, se debe cambiar tanto el tipo de dato como la función isPrime() a unsigned int, long o unsigned long
a) Imprime números primos
b) Cuenta los números primos
