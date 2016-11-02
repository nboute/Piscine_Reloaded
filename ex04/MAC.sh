ifconfig | grep "ether" | sed 's/ether//g;s/ //g' | tr -d "\t"
