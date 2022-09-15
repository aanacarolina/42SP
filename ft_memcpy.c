/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 00:51:36 by coder             #+#    #+#             */
/*   Updated: 2022/09/15 02:48:02 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
/*
int main (void)
{
	char dest;
	char src[] = "pizza";
	char *pdest = &dest;
	char *psrc = src;
	int size = 6;
	
	ft_memcpy(pdest, psrc, size);
	printf("%c\n", dest);
	
	memcpy(pdest, psrc, size);
	printf("%c\n", dest);
	return(0);
}
*/