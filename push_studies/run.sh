#!/bin/bash

#gcc main.c -Wall -Wextra -Werror && ./a.out 145 13 42 

gcc main.c args_checker.c && ./a.out 145 13 145 42 

#gcc main.c -Wall -Wextra -Werror && ./a.out  

#gcc -g3 main.c && valgrind ./a.out  
