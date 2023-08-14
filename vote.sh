read -p"enter age" age
if(($age -gt 18S ))
    then
        echo "person is eligible to vote"
    else
        x=$((18-$age))
        echo "eligible to vote after $x years"
fi