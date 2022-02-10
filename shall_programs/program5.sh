if cmp -l  $1 $2
then 
echo files are same
rm -i $2
else
echo files are not same
fi
