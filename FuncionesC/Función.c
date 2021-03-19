/*
Autor:  josue
Compilador:  gcc (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
Compilado:  gcc Función.c -o Función
Fecha:  Fri Mar 19 11:32:42 CST 2021
Librerias: stdio (u otras)
Resumen: 
Entada: 
Salida: 
*/

//Librerias
#include <stdio.h>

//Definimos nuestra función 
#define pi 3.14159265 // cuando definimos apartamos RAM
//Definimos radio y altua como locales
#define Vcono(radio, altura) ((pi*(radio*radio)*altura)/3.0)

//Declaramos e inicializamos las variables globales
float radio, altura, volumen;

int main(){
    printf("ingrese el valor del rádio: ");
    scanf("%f",&radio);
    printf("ingrese la altura: ");
    scanf("%f",&altura);
    volumen = Vcono(radio, altura);
    printf("El volumen es: %.3f\n",volumen);
    return 0;

}
