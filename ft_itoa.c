/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 03:35:35 by anacaro3          #+#    #+#             */
/*   Updated: 2022/10/12 03:31:34 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int	n)
{
	int len_n;
	char *s;

	len_n = count_num(n);
	s = (char *)malloc(sizeof(char)*(len_n +1));

	if(!s)
		return(NULL);
	s[len_n] = '\0';
	len_n--;

	while(len_n >= 0)
	{
		s[len_n] = n % 10 + 48;
		n = n / 10;
		len_n--;
	}
	if(n < 0)
	{
		n =  n * -1;
		s[0] = "-";
	}
	return (s);
}

int	count_num(int n)
{
	int i;

	i = 1; //pq qq numero tem pelo menos 1 char
	while(n >= 10)
	{
		n = n / 10;
		i++;
	}
	if(n < 0)
		i++;
	return (i);
}
