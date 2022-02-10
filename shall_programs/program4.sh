if [ $# -eq 1 ]
then
a=$1
else
if [ $# -eq 0 ]
then
a=`date '+%y'`
else
echo invalid argument : try again
exit
fi
fi
if cal 2 $a | grep "29" > temp
then
echo "$a is leap year"
else
echo "$a is not a leap year"
fi
