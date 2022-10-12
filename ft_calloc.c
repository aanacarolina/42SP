/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 03:34:43 by anacaro3          #+#    #+#             */
/*   Updated: 2022/10/12 22:32:34 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	*amount;
	size_t	total_size;
	int		byte;

	total_size = nmemb * size;
	byte = 0;
	amount = malloc (total_size);
	if (!amount || !size || size > 2147483647 / nmemb)
		return (NULL);
	ft_memset(amount, byte, total_size);
	return ((void *)amount);
}
/*
int main (void)
{

	int *word;
	size_t size = sizeof (*word);
	word = ft_calloc(5, size);
	while(word < size)
	{
		printf("%i\n", word);
	}
	return(0);
}
*/
