make
gcc main.c -L./ -lasm -fno-builtin
gcc bonus/$1/main.c -L. -lasm -o test -Wall -Wextra 
gcc bonus/$1/main.c -Wall -Wextra
./bonus/$1/compil.sh > output
if [ $? -ne 0 ]
then
    echo -e "\e[91m# BUILD FAILED.\e[0m"
    exit 1
fi
return_value=0
diff output bonus/$1/except > diff.txt
if [ $? -eq 0 ]
then
    echo -e "\e[92mSUCCESS\e[0m"
else
    echo -e "\e[91m# Got:\e[0m"
    cat output
    echo -e "\e[91m# But excepted:\e[0m"
    cat bonus/$1/except
    echo -e "\e[91m# Differences:\e[0m"
    cat diff.txt
fi
exit $return_value