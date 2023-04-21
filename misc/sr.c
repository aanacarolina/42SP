#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *word = argv[1];
    char target = argv[2][0];
    char replace = argv[3][0];

    if (argc == 4)
    {
        while (*word)
        {
            if (*word == target)
                *word = replace;
            write(1, word, 1);
            word++;
        }
    }
    write(1, "\n", 1);
    return (0);
}