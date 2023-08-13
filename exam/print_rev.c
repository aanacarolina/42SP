#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        write(1, "\n", 1);
        exit(1);
    }
    else
    {
        int i = 1;
        int j = 0;
        int k = 0;
        while (argv[i])
        {
            j = 0;
            while (argv[i][j] != '\0')
            {
                write(1, &argv[i][j], 1);
                j++;
                k++;
            }
            write(1, " ", 1);
            i++;
            k++;
        }
            printf("[%d]", k);
    }
    return (0);
}
