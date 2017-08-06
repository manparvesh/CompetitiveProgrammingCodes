red=`tput setaf 1`
green=`tput setaf 2`
reset=`tput sgr0`

g++ main.cpp
if [ $? -eq 0 ]; then
    echo "${green}Compilation OK${reset}"
    if ./a.out < in | grep 16; then
    	echo "${green}OK${reset}"
    fi
    if ./a.out < in2 | grep 17; then
    	echo "${green}OK${reset}"
    fi
else
    echo "${red}Compilation FAIL${reset}"
fi
