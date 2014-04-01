#!/bin/bash



while read field1 field2; do # the first line in first file
    
    i=0
	while read field3 field4; do
  		

  		if [ "$field2" = "$field4" ]; then

  			
  			echo " << " $field4
  			let i=i+1
  			
  		fi

  	done < httpd.log
    
    if [ $i != 0 ]; then
    	echo $i " HTTP connections over this TCP connection"
    fi

done < conn.log


# looping through the first file, for each line we loop thru the second file
# if a line in the second file matches the line in the first, we print
#
# we want a count of connections
#