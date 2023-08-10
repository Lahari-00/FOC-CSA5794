read -p"enter the value: " n
n1=$n
sum=0
while [ $n -gt 0 ]
do
    rem=$((n%10))
    sum=$((sum+(rem*rem*rem)))
    n=$((n/10))
done
if(($n1 == $sum))
    then 
        echo "armstrong number"
    else
        echo "not an armstrong number"
fi