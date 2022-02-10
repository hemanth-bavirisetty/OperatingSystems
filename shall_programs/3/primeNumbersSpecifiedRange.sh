echo enter lower bond
read l
echo enter upper bond
read u
i=$l
j=$u
c=0
echo the prime numbers between $l and $u are
while [ $i -le $j ]
do
k=1
c=0
while [ $k -le $i ]
do
s=`expr $i % $k`
if [ $s -eq 0 ]
then
c=`expr $c + 1`
fi
k=`expr $k + 1`
done
if [ $c -eq 2 ]
then
echo $l
fi
ni=`expr $i + 1`
done

