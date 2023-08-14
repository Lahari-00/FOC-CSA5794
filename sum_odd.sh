read -p"enter n" n
sum=0
for((i=1;i<=n;i+=2))
do
    sum=$((sum+i))
done
echo "$sum"