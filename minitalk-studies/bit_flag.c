#include <stdio.h>

int main(int argc, char *argv[])
{
    unsigned int flags = 0b1 | 0b10 | 0b10000000; //0b = binary
    // 10 
    //&01
    //=00 (AND & is only true when both inputs are true)
    if(flags & 0b1)//1 in int
    {
        printf("1st feature is enabled.\n");
    }
     if(flags & 0b10)//2 in int
    {
        printf("2nd feature is enabled.\n");
    }
     if(flags & 0b1000000)//128 in int
    {
        printf("3rd feature is enabled.\n");
    }
}

//Using binary flags is a very common technique in C programming for storing multiple boolean values in a single integer.
//This way we can store 32 boolean values in a single integer.
// 00000000 00000000 00000000 10000011
// 
// 00000000 00000000 00000000 00000001
// 00000000 00000000 00000000 00000010
// 00000000 00000000 00000000 10000000
//                          = 10000011

//source https://www.youtube.com/watch?v=6hnLMnid1M0

