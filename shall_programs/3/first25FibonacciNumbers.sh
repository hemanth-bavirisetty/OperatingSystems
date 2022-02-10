n=25
i=1
j=`expr $n - 2`
echo fibonacci series is \n
f1=0
f2=1
echo $f1
echo $f2
while [ $i -le $j ]
do
t=$f1
f1=$f2
f2=`expr $t + $f1`
echo $f2
i=`expr $i + 1`
done
