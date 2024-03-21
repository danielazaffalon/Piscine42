exec find . -type f -o -type d | wc -l | sed 's/ //g'
# wc count the quantity of lines that are the files of find
