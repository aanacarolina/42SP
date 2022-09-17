/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 03:35:35 by anacaro3          #+#    #+#             */
/*   Updated: 2022/09/17 08:16:29 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(long nb)
{
	int	len;

	len = 1;
	if (nb < 0)
	{
		len++;
		nb = nb / 10;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

static char	*convert_itoa(	char *str,
							size_t size,
							unsigned int num,
							unsigned int is_negative)
{
	str[size] = '\0';
	while (size--)
	{
		str[size] = (num % 10) + 48;
		num /= 10 ;
	}	
	if (is_negative)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	size_t			n_digits;
	unsigned int	is_negative;
	char			*str;

	n_digits = ft_numlen(n);
	is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	str = malloc(sizeof(char) * (n_digits + 1));
	if (str == NULL)
		return (NULL);
	return (convert_itoa(str, n_digits, (unsigned int)n, is_negative));
}
