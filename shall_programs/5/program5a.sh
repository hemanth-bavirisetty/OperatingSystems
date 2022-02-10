echo program that delete all the lines containing unix.
grep -v "unix" $l >temp
mv temp $l
cat $l
