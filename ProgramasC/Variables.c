/*
Autor:  josue
Compilador:  gcc (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
Compilado:  gcc Variables.c -o Variables
Fecha:  Thu Mar 18 13:30:43 CST 2021
Librerias: stdio (u otras)
Resumen:  Ejemplo de variables y su funcionamiento
Entada: 
Salida: 
*/

//Libreriass
#include <stdio.h>
#define pi 3.1416
const float g = 9.8; //cuando declaramos una constante, esta debe esécificar de qué tipo es, en este caso como hay decimales, es flotante.
//numerar los pasos del pseudocódigo


int x; //con ; declaré la variable, estoy haciendo la variable
char texto;
int main(){
    x=2;
    int y=3;
    float resultado;
    char texto = "y";

    printf("valor de x : %d, pi %f, texto %c, y %d \n",x, pi, texto, y);// con x %d el valor de la variables es, es decir que eso es de tipo entero, con pi %f es decimal, entonces es flout..
    resultado= (float) y/x;
    printf("resultado: %f \n",resultado);
 }

 
