/*
Autor:  Josué Gómez
Compilador:  gcc (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
Compilado:  gcc Programa3.c -o Programa3
Fecha:  Sat Mar 20 23:30:47 CST 2021
Librerias: stdio (u otras)
Resumen:  Programa que lee un número mayor que 1 y determina si es primo o no
Entada:  Numero mayor a 1
Salida:  Es primo o no es primo
*/

//Librerias
#include <stdio.h>

int main(){
  //Declaración e inicialización de variables
    int N=0;
    int i=0;
    int primo=1;

  //Interacción con el usuario, y se almacena información en la variable N
    printf("**| Determinar si un número mayor a 1 es primo |**\n");
    printf("Ingrese un número: ");
    scanf("%d",&N);

  //Utilizamos for para determinar las condiciones
    for (i=2;(i<N-1 && primo==1);i++)
    {
     // Con if verificamos el módulo que da el residuo, por el concepto de que un número primo solo es divisible entre sí mismo y uno 
      if (N%i==0)
      {
          primo=0;
      }      
    }
   // Sí el residuo es cero quiere decir que no es divisible en sólo en sí mismo, por lo tanto con if verificamos esa característica. 
    if (primo==0)
      {
          printf("No es primo\n");
      } else{printf("Es primo\n");
        }
        return 0;

    
}
