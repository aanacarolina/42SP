/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 00:51:36 by coder             #+#    #+#             */
/*   Updated: 2022/09/10 20:57:50 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(const char *nptr)
{
	char result;
	int i;
	int sign;
	
	result = 0;
	i = 0;
	sign = 1;
	
	if (nptr[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (nptr[i] != '\0')
	{
		if (nptr[i] >= '0' && nptr[i] <= '9')
		{
			result = result * 10 + nptr[i] - '0';
			i++;
		}
		else
		
			return (-1);
		
	}
		return result * sign;
}

int main (void)
{
	char nums[] = "24345";
	char mixed[] = "a2c84m3";
	printf("%d\n", ft_atoi(nums));
	printf("%d\n", ft_atoi(mixed));
	return (0);	
}