echo enter a number :
read n
s=0
while [ $n -ne 0 ]
do
r=`expr $n % 10`
p=`expr $s \* 10`
s=`expr $p + $r`
n=`expr $n / 10`
done
echo the revrse number is $s
