printf "0\n" > output.txt

while true
do
	while ! ln output.txt output.lock 2>/dev/null
	do
	    sleep 1
	done
	value=$(tail -1 output.txt)
	result=$(expr $value + 1)
	echo $result>>output.txt
	rm -f output.lock
done