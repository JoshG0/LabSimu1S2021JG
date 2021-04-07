/*
Autor:  Josué Gómez
Compilador:  gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado:  gcc Calculadora_1605.c -o Calculadora_1605
Fecha:  Wed Apr 6 21:32:52 UTC 2021
Librerias: stdio (u otras)
Resumen:  Calculadora que al iniciar interactua con el usuario para que este determine si se realizará una suma, resta, multiplicación o división entre dos números. La forma de indicar la operación será a través de números. Tendrá la ocpción de finalizarse cuando se requiera, de lo contrario estará ejecutandose e interactuando con el usuario.
Entada:  Números enteros
Salida:  Sumas, restas, multiplicaciones y divisiones.
*/ 
//Librerias
#include <stdio.h>

// Establecemos nuestras funciones de suma, resta, multiplicación y división.
int suma(int a, int b)
{
    return(a + b);
}
int resta(int a, int b)
{
    return(a - b);
}
int producto(int a, int b)
{
    return(a * b);
}
int division(int a, int b)
{
    return(a / b);
}

//Instrucciones para que se realice el programa
int main()
{
 //Declaración de variables
    char opcion;
    int n1, n2;

    do
    {
        printf( " \n _______________|  CALCULADORA BÁSICA  |_______________ \n");
        printf( "\n   Para sumar escriba: 1" );
        printf( "\n   Para restar escriba: 2");
        printf( "\n   Para multiplicar escriba: 3");
        printf( "\n   Para dividir escriba: 4");
        printf( "\n   Para salir escriba: 5 \n" );

        // Se lee la opción que seleccionó el usuario
        do
        {
            printf( "\n   ¿Qué operación deseas realizar?: ");
           
            scanf( "%c", &opcion);

        } while ( opcion < '1' || opcion > '5' );
        //Limitamos para que solo elija las opciones disponibles

        switch ( opcion )
        {
                      //Para realizar sumas
            case '1': printf( "\n Introduzca un número: " );
                      scanf( "%d", &n1);
                      printf( " Introduzca un número: " );
                      scanf( "%d", &n2);
                      printf("\n    * EL RESULTADO DE SUMAR ES: %d * \n\n\n",suma(n1, n2));
                      break;

                      // Para realizar restas
            case '2': printf( "\n Introduzca un número: " );
                      scanf( "%d", &n1);
                      printf( " Introduzca un número: " );
                      scanf( "%d", &n2);
                      printf("\n    * EL RESULTADO DE RESTAR ES: %d * \n\n\n",resta(n1, n2));
                      break;

                      //Para realizar multiplicaiones
            case '3': printf( "\n Introduzca un número: " );
                      scanf( "%d", &n1);
                      printf( " Introduzca un número: " );
                      scanf( "%d", &n2);
                      printf("\n    * EL RESULTADO DE MULTIPLICAR ES: %d * \n\n\n",producto(n1, n2));
                      break;

                      //Para realizar divisiones, pero el resultado solo será el entero
            case '4': printf( "\n   Introduzca un número: " );
                      scanf( "%d", &n1);
                      printf( " Introduzca un número: " );
                      scanf( "%d", &n2);
                      if ( n2 != 0 )
                          printf( "\n   * EL RESULTADO DE DIVIDIR ES: %d * \n\n\n",division(n1, n2));
                      else
                          printf( "\n ERROR: indeterminado.\n\n" );
        }

    } while ( opcion != '5' ); // CUando queremos que finalice el programa

    return 0;
}
