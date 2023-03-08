/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:21:23 by anacaro3          #+#    #+#             */
/*   Updated: 2022/11/09 20:29:59 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_specifier(char format, va_list args)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, unsigned int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_putnbr_unsign(va_arg(args, unsigned int)));
	else if (format == 'X')
		return (ft_hex_upper(va_arg(args, unsigned int), 0, 0));
	else if (format == 'x')
		return (ft_hex_lower(va_arg(args, unsigned int), 0, 0));
	else if (format == 'p')
		return (ft_pointer(va_arg(args, unsigned long)));
	else
		return (ft_putchar(format));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		result;

	i = 0;
	result = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
			result += ft_specifier(format[++i], args);
		else
			result += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (result);
}

/*
int main () {
	
	int ch = 'cspdiuxX%';

	ft_printf("%d", ch );
	
	return(0);
}
*/