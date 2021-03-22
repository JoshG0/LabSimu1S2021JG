/*
Autor:  Josué Gómez
Compilador:  gcc (buntu 7.5.0-3ubuntu1~18.04) 7.5.0
Compilado:  gcc Programa2.c -o Programa2
Fecha:  Sat Mar 20 15:14:43 CST 2021
Librerias: stdio (u otras)
Resumen:  Programa que calcula la raiz cuadrada por defecto de un número N positivo dado. es decir, hayar el número natural cuyo cuadrado sea más proximo al radicando y no lo sobrepase
Entada:  Número Naturales positivos
Salida:  Raiz cuadrada entera por defecto
*/ 

//Librerias
#include <stdio.h>
#include <math.h>

int main(){
    //Declaramos e inicializamos variables
    float N=0;
    int i=1;
    
    // Interacción con el usuario y se guarda información en la variable N 
    printf(" *| Calculo de de la raiz cuadrada entera por defecto |*\n  ");
    printf(" Ingrese un número natural N mayor a 0: ");
    scanf("%f",&N);
    
    // Se utiliza un for para verificar la condición y realizar la operación
    for(i=1;i*i<=N;i++){
     i+1;
     }
    // Se imprime la respuesta, como es un dato entero lo esécificamos con %d
    printf("La raiz cuadrada entera es: %d\n", i-1);
    
return 0;
}
