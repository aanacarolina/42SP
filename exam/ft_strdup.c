#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src)
{
    char *dup;
    int i = 0;

    dup = malloc(sizeof(*src)+1);
    if(!dup)
        return(NULL);
    while(*src)
    {
        dup[i] = *src;
        i++;
        src++;
    }
    dup[i++] = '\0';
    return(dup);
}   

int main(int argc, char **argv)
{
    if(argc == 2)
        printf(":%s:\n", ft_strdup(argv[1]));
    return(0);

}