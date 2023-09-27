#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 1;
    int j = 0;

    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    else
    {
        while (argv[i][j] != '\0' && (argv[i][j] == ' ' || argv[i][j] == '\t'))
            j++;
        while (j >= 0 && argv[i][j] != ' ' && argv[i][j] != '\t')
        {
                j--;
        }
        j++;
        while (argv[i][j] != '\0' && argv[1][j] != ' ' && argv[1][j] != '\t')
        {
            write(1, &argv[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
    }
    return (0);
}