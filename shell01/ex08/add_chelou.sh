#Example 1
#\'?"\"'\
#FT_NBR1='\'\'\?\"'\'\"\''\'
#FT_NBR2=rcrdmddd

#Example2
#\"\"!\"\"!\"\"!\"\"!\"\"!\"\"
FT_NBR1='\'\"'\'\"\!'\'\"'\'\"\!'\'\"'\'\"\!'\'\"'\'\"\!'\'\"'\'\"\!'\'\"'\'\"
FT_NBR2=dcrcmcmooododmrrrmorcmcrmomo

#'\"?!
BASE1=\''\\'\"\?\!
BASE2=mrdoc

# Conversion from base '\"\?!' to decimal
num1=$(echo $FT_NBR1 | tr $BASE1 "01234")
#num1=$(echo "ibase=5;obase=A;$num1" | bc)

# Conversion from base 'mrdoc' to decimal
num2=$(echo $FT_NBR2 | tr $BASE2 "01234")
#num2=$(echo "ibase=5;obase=A;$num2" | bc)

# Addition of the decimal numbers
result=$(echo "ibase=5;obase=D;$num1+$num2" | bc)
#sum=$((num1 + num2))

# Conversion from decimal to base 'gtaio luSnemf'
#result=$(echo "obase=D;ibase=A;$sum" | bc)
result=$(echo $result | tr "0123456789ABCD" "gtaio luSnemf")

# Output the result
echo "The sum is : $result"
