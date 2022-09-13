/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 00:42:11 by coder             #+#    #+#             */
/*   Updated: 2022/09/11 01:10:01 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero (void *s, size_t n)
{
	char *clean;
	
	clean = s;
	while(n != '\0')
	{
		*clean++ = 0;
		n--;
	}
}

int main ()
{
	char word[] = "palavra";
	int size = 7;
	ft_bzero(word, size);
	printf(":%s:\n", word);
	return(0);
}

