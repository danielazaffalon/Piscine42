l1=$FT_LINE1
l2=$FT_LINE2
data=$(grep -v '^#' "/etc/passwd")
output=''
for ((line=l1;line<=l2;line++)); do
	output+=$(awk -F ':' 'NR == '$line' && NR % 2 == 1{ print $1 }' <<< "$data" | rev | tr '\n' ',')
done
output=${output%,}
echo $output"."
#grep filtra todos los datos que comiencen con # es decir los comentarios
#awk define : como separador y toma las lineas de numero line he imprime la primera columna
# rev revierte los carcteres
