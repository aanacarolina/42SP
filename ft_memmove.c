/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 00:51:36 by coder             #+#    #+#             */
/*   Updated: 2022/09/08 00:00:51 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *memmove(void *dest, const void *src, size_t n)
{
	char *d = dest; //transformou em char pq vai de byte em byte na memoria 
	const char *s = src; //const nao muda o conteudo
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
		{
			char *lasts = s + (n-1);
			char *lastd = d + (n-1);
			while (n--)
				*lastd-- = *lasts--;
		}
	return dest;
}

int main (void)
{
	
}