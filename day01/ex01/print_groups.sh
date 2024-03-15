ft_user=$FT_USER
group=$(groups $ft_user)
output="${group#*: }"
output="${output// /,}"
echo $output
