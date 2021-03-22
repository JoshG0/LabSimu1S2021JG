/*
Autor:  josue
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
int N1=0;
int N2=0;
int i=0;
int J=2;
int primo=1;

    printf(" *** Números primos en un rango dado *** \n");
    printf("Ingrese un número entero: ");
    scanf("%d",&N1);
    printf("Ingrese un número entero mayor al núemero anterior: ");
    scanf("%d",&N2);
    i=N1;

    while(i<=N2){
    //Acá empieza Es_primo
      while(j<i && primo=1){
       if(i%j=0){
       primo=0;
       j=++;
    } else{
    j=++;
    }

    } 
    if(primo=1){
    i=primo;
    i=++;
    } else{
    i=++;
    }
    }
return 1;    
}
