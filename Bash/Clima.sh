#!/bin/bash
#Datos del clima de Guatemala para el día de hoy
echo "**| ESTADO DEL TIEMPO PARA HOY |**"
touch "InfoClima"
echo "$(curl wttr.in/Guatemala)" > "InfoClima"
head -7 InfoClima
rm InfoClima
