/*
Autor:  Josué Gómez
Compilador:  gcc (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
Compilado:  gcc Programa4.c -o Programa4
Fecha:  Sun Mar 21 10:08:47 CST 2021
Librerias: stdio (u otras)
Resumen:  Programa donde leerá dos numeros entero, genera un rango y muestra todos los números primos en ese rango.
Entada:  Números Enteros
Salida:  Número Primos
*/

//Librerias
#include <stdio.h>
#include <math.h>
  
int main(){
  //Declaración e inicialización de variables
int N1=0;
int N2=0;
int i=0;
int j=0;
int primo=0;

   //Interacción con el usuario
   //Se le piden datos y luego se almacenan en las variables 
    printf(" *** Números primos en un rango dado *** \n");
    printf("Ingrese un número entero: ");
    scanf("%d",&N1);
    printf("Ingrese un número entero mayor al núemero anterior: ");
    scanf("%d",&N2);

    //Con for inicializamos i=N1, y se debde de cumplir la condición y se le agrega un aumento.
    for (i=N1; i<=N2 ; i++)
    {
      primo=1;
      //tenemos otra condición dentro de la condición y tambien utilizamos for, solo que ahora con la variable j
      for (j=2; (j<i && primo==1) ; j++)
      {
        if (i%j==0)
        {
          primo=0;
        }
        
      }
      if (primo==1)
      {
        // se imprimen todos los números primos en ese rango.
        printf("%d\n",i);
      }
    }
    return 0;
}
