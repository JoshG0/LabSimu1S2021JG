#!/bin/bash
#Este es un script que muestra informacíon del Clima en Guatemala
#Autor: Josué Gómez

#script:
touch "InformacióndelClima"
echo "$(curl wttr.in/Guatemala)" > "InformacióndelClima"
head -7 InformacióndelClima
rm InformacióndelClima