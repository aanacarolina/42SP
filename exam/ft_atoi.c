#include <unistd.h>

int ft_atoi(const char *str)
{
    int i;
    int result;
    int sign;

    i = 0;
    sign = 1;

    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '-')
        sign = -1;
    if (*str == '-' || *str == '+')
        str++;
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + *str - '0';
        str++;
    }
    return (sign * result);
}