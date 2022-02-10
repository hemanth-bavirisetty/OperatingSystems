echo enter number of rows :
read r
echo enter number of columns :
read c
i=0
echo enter elements
until [ $i -eq `expr $r \* $c` ]
do
read a[ $i ]
i=`expr $i + 1`
done
i=0;k=0
echo transpose matrix is :
until [ $i -eq $c ]
do
j=0
until [ $j -eq $r ]
do
n=`expr $j \* $c`
m=`expr $n + $i`
b[$k] = ${a[$m]}
echo "${b[$k]}\t"
k=`expr $k + 1`
j=`expr $j + 1`
done
i=`expr $i + 1`
echo "\n"
done

