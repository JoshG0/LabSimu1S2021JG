#!/bin/bash
# Este será un Script que creará automáticament un archivo para programar en c.

#Autor: Josué Gómez
#Tipo: Este es un Script de Bash
#La manera de ejecurlo es: ./ArchivoparaC.sh
#Resumen: Este es un generador automático  de comentarios para scripts de C

#Bienvenida para el usuario
echo "          * *| Generador de Archivos C |* *          " 

#obtener y validar el nombre del archivo:

read -p "Ingrese el nombre para su archvo: " nombre  #variable nombre que ingrese el usuario. 
fnombre=$nombre".c" #aqui llame a la variable nombre
if [ -z $nombre ]; then #usamos if, -z verifica la variable nombre, then=entonces
   echo "No puede dejar este espacio en blanco. Ahora deberá empezar de nuevo :D"
   exit 2 #se coloca 2 por convenio y se sale del del ejecutable
fi #para finalizar if, sino esto sigue

#información del sistema, creación de variables
autor=$(whoami) 
fecha=$(date)
version=$(gcc --version | head -n 1)

#Datos que se puedan editar
echo "Aquí escriba su resumen: "
read resumen
echo "Aquí introduzca la entrada: "
read entrada
echo "Aquí intruduzca la salida: "
read salida 

#creando el contenido:
echo "/*" > $fnombre #> para que sobrescriba así ya exita el archivo, borrará si ya hay un nombre igual 
echo "Autor: " $autor >> $fnombre
echo "Compilador: " $version >> $fnombre
echo "Compilado: " gcc $fnombre -o $nombre >> $fnombre #creamos el archivo y lo hacemos que se compile.
echo "Fecha: " $fecha >> $fnombre 
echo "Librerias: stdio (u otras)" >> $fnombre
echo "Resumen: " $resumen >> $fnombre
echo "Entada: " $entrada >> $fnombre
echo "Salida: " $salida >> $fnombre
echo "*/ " >> $fnombre

echo //Librerias >> $fnombre
echo "#include <stdio.h>" >> $fnombre
echo "       **| Su archivo ha sido creado exitosamente |**       "




