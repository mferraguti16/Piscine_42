cat /etc/passwd | sed 's/#.*//' | sed -n 2~2p | cut -d "." -f1 | rev | sort -r | awk "NR >= $FT_LINE1 && NR <= $FT_LINE2" | tr "|n" "," | sed 's?.$?.?' | sed 's?,?, ?g'
