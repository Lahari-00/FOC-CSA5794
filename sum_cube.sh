read -p"enter n" n
sum=0
for((i=1;i<=n;i++))
do
    sum=$((sum+(i*i*i)))
done
echo "sum is $sum"