/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 00:51:36 by coder             #+#    #+#             */
/*   Updated: 2022/09/15 02:54:50 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	char		*lasts;
	char		*lastd;

	s = src;
	if (d < s)
	lasts = s + (n - 1);
	lastd = d + (n - 1);
	d = dest;
	while (n--)
		*d++ = *s++;
	else
	{
		while (n--)
			*lastd-- = *lasts--;
	}
	return (dest);
}
/*
int main (void)
{
	
}
*/