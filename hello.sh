read t
for ((tc=0; tc<t; tc++)); do
    read n
    for ((i=0; i<n; i++)); do
        read num
        arr[$i]=$num
    done
    for ((i=0; i<n-1; i++)); do
        diff=$((arr[i+1] - arr[i]))
        if [[ $diff != 5 && $diff != -5 && $diff != 7 && $diff != -7 ]]; then
            echo "NO"
            exit 0
        fi
    done
    echo "YES"
done    


