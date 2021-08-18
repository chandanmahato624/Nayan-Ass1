echo -n "Enter the first number :- "
read a
echo -n "Enter the second number :- "
read b
echo -n "Enter the third number :- "
read c
if [ $a -lt $b -a $a -lt $c ]; then
echo "$a is Minimum"
elif [ $b -lt $a -a $b -lt $c ]; then
echo "$b is Minimum"
else
echo "$c is Minimum"
fi
