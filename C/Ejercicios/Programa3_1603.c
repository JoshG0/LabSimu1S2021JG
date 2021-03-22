/*
Autor:  josue
Compilador:  gcc (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
Compilado:  gcc Programa3.c -o Programa3
Fecha:  Sat Mar 20 23:30:47 CST 2021
Librerias: stdio (u otras)
Resumen:  Programa que llee un número mayor que 1 y determina si es primo o no
Entada:  Numero mayor a 1
Salida:  Es primo o no es primo
*/

//Librerias
#include <stdio.h>
#include <math.h>

int main(){
    int N=0;
    printf("|| Determina si el número entero ingresado es primo o no ||\n");
    printf("Ingrese un numero entero mayor a 1: ");
    scanf("%d",&N);

    int i=2;
    int primo=1;

   for(i=2;i<N-1;i++){
   i%N;
   if(i%N==0){
   primo=+0;
   i++;
   }
   else{
   i++;
   }
  } 

 for(i=2;primo=1;i++){
 if(i%N==0){
 primo=+0;
 i++;
 } else{
 i++;
 }
 }

if(primo==0){
printf("No es primo");
} else{
printf( "es primo");
}
return 0;
}
