/*
Autor:  Josué Gómez
Compilador:  gcc (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
Compilado:  gcc Programa1.c -o Programa1
Fecha:  Fri Mar 19 19:23:51 CST 2021
Librerias: stdio (u otras)
Resumen:  Es un programa donde el usuario puede ingresar un número indeterminado de valores númericos reales positivos de alturas, que se detendrá cuando éste ingrese un valor real no positvo. En ese momento se desplegará el cálculo de la media, el valor mínimo y el valor máximo de los datos ingresados. 
Entada:  magnitud de alturas, (numeros reales positivos)
Salida:  Media, altura mínima y altura máxima
*/

//Librerias
#include <stdio.h>

int main(){
    //Declaramos e inicializamo variables. Como son reales positivos, incluímos decimales, por ello son de tipo flotante.
    //med: media, x: alturas, min: altura mínima y max: altura máxima
    float med=0, x=0, min=0, max=0;
    //Declaramos e inicializamos variables enteras, i:contador, n: el nuemero de alturas que se ingresaron
    int i=0, n=0;

    //Información al usuario.
    printf("     **|*Calculo de la media, mínimo y máximo*|**     \n");

   //utilizamos for con ;; para hacer una verificación infinita de datos..
   for(;;){
   printf("Ingrese una altura: ");
   //Obtenemos un valor real positivo y se guarda en la variable x.
   scanf("%f",&x);
        //Verificamos si x es mayor o igual que cero, si eso se cumple, se podrán seguir introduciendo valores.
        if(x>=0){
        //al cumplirse a la variable n se le realiza un aumento y a la media se le suma el valor que se guardo en x.
        n++;
        med+=x;
        }

        //Cuando no se ingrese un valor mayor o igual a cero, la lectura de entradas se detendrá.
        if(x<0) break;
        //Para obtener el valor máximo, verificamos los datos que se ingresan
        if(x>max){
        max=x;
        }
        //Para obtener el valor mínimo, verificamos los datos que se ingresan
        if((x>=0) && (x<min) || (i ==0)){
        min=x;
        }
    
    //se incrementa el valor del contador
    i++;
   }
   //se verifica si de entrada el  usuario coloca un valor negativo y así se detiene el progrma y da el aviso.
   if(n==0){
   printf("no es un valor positivo\n");
   }else
   {
   //Si los valores son válidos se imprimen las respuestas, .3f limiitimos a tres decimales y se aproxima
   printf("La media es: %.3f \n",med/n);
   printf("El valor mínimo es: %.3f \n",min);
   printf("El valor máximo es: %.3f \n",max);
   }
return 0;
}
