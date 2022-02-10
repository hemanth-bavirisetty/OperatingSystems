i=1
while [ $i -lt 10 ]
do
echo MAIN MENU
echo -e "\n1:Display contents /etc.passwd\n2:list of users who have logged in \n3:present working directoryl\n4:exit\n
echo enter your choice
read ch
case $ch in
1)cat\etc\psswd;;
2)who;;
3)pwd;;
4)exit;;
*)echo invalid choice;;
esac
i=`expr $i + 1`
done
