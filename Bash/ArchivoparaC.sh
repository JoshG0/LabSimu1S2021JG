#!/bin/bash
# Este será un Script que creará automáticament un archivo para programar en c.

#Autor: Josué Gómez
#Tipo: Este es un Script de Bash
#La manera de ejecurlo es: ./ArchivoparaC.sh
#Resumen: Este es un generador automático  de comentarios para scripts de C

#Bienvenida para el usuario
echo "**** * Generador automático de archivos de C * ****" 

#obtener y validar el nombre del archivo:
read -p "Ingrese el nombre para su archvo: " nombre 
fnombre=$nombre".c"
if [ -z $nombre ]; then
   echo "Debe ingresar un nombre valido. Ahora deberá empezar de nuevo (:"
   exit 2
fi

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
echo "/*" > $fnombre
echo "Autor: " $autor >> $fnombre
echo "Compilador: " $version >> $fnombre
echo "Compilado: " gcc $fnombre -o $nombre >> $fnombre
echo "Fecha: " $fecha >> $fnombre 
echo "Librerias: stdio (u otras)" >> $fnombre
echo "Resumen: " $resumen >> $fnombre
echo "Entada: " $entrada >> $fnombre
echo "Salida: " $salida >> $fnombre
echo "*/" >> $fnombre


echo //Librerias >> $fnombre
echo "#include <stdio.h>" >> $fnombre
echo //numerar los pasos del pseudocódigo >>$fnombre




