group=$(groups $FT_USER)
output="${group// /,}"
echo $output
