/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_p2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:21:45 by anacaro3          #+#    #+#             */
/*   Updated: 2023/03/28 19:58:25 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hex_lower(unsigned long decimal, int i, int j)
{
	unsigned long result;
	unsigned long rest;
	char *hexa;

	result = decimal;
	if (decimal == 0)
		return (ft_putchar('0'));
	while (decimal != 0 && i++ > -1)
		decimal = decimal / 16;
	hexa = malloc(sizeof(char) * i + 1);
	hexa[i--] = '\0';
	while (result != 0)
	{
		rest = result % 16;
		if (rest < 10)
			hexa[i] = (48 + rest);
		else
			hexa[i] = (87 + rest);
		result = result / 16;
		i--;
	}
	j = ft_putstr(hexa);
	free(hexa);
	return (j);
}

int ft_hex_upper(unsigned long decimal, int i, int j)
{
	unsigned long result;
	unsigned long rest;
	char *hexa;

	result = decimal;
	if (decimal == 0)
		return (ft_putchar('0'));
	while (decimal != 0 && i++ > -1)
		decimal = decimal / 16;
	hexa = malloc(sizeof(char) * i + 1);
	hexa[i--] = '\0';
	while (result != 0)
	{
		rest = result % 16;
		if (rest < 10)
			hexa[i] = (48 + rest);
		else
			hexa[i] = (55 + rest);
		result = result / 16;
		i--;
	}
	j = ft_putstr(hexa);
	free(hexa);
	return (j);
}

int ft_pointer(unsigned long ptr)
{
	int result;

	if (!ptr)
		return (ft_putstr("(nil)"));
	result = ft_putstr("0x");
	result += ft_hex_lower(ptr, 0, 0);
	return (result);
}
