mac=$(ifconfig | grep ether | awk '{print $2}' | tr '\n' ',')
mac=${mac%,}
# grep busca todas las lineas que tengasn ether
# awk  trabaja con columnas he imprime la segunda columna de cada linea
# tr  translate los enter por comas
# eliminar la coma al final de la variable mac
echo $mac
