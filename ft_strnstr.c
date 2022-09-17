/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 03:37:53 by anacaro3          #+#    #+#             */
/*   Updated: 2022/09/17 16:08:40 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{	
	unsigned long int	i;
	unsigned long int	j;

	i = 0;
	j = 0;
	if (*little == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		if (big[i] == little[0])
		{
			while (little[j])
			{
				if (big[i + j] != little[j])
				{
					j = 0;
					break ;
				}
				if (j == len - 1 || little[j + 1] == '\0')
				{
					return ((char *)&big[i]);
				}
				j++;
			}
		}
		i++;
	}
	return ((char *) 0);
}
/*
int main (void)
{
	char big[] = "Dude, where is my car";
	char little[] = "where";
	printf("%d\n", strnstr(big, little, 5));
	return (0);
}
*/