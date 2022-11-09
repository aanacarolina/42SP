TODO - HEADER


#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
	return (count);
}

int	ft_putnbr(int n)
{
	int	result;

	result = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		result += ft_putchar('-');
		n = -n;
	}
	if (n < 10)
	{
		result += ft_putchar(n + 48);
		return (result);
	}
	else
	{
		result += ft_putnbr(n / 10);
		result += ft_putnbr(n % 10);
	}
	return (result);
}

int	ft_putnbr_unsign(unsigned int n)
{
	int	result;

	result = 0;
	if (n < 10)
	{
		result += ft_putchar(n + 48);
		return (result);
	}
	else
	{
		result += ft_putnbr_unsign(n / 10);
		result += ft_putnbr_unsign(n % 10);
	}
	return (result);
}
