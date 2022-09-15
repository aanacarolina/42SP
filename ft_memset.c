/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 00:51:36 by coder             #+#    #+#             */
/*   Updated: 2022/09/15 02:56:59 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*memory;

	memory = s;
	while (n--)
		s++ = c++;
	return (memory);
}
/*
int main (void)
{
	char str[30] = "ABCD EFGH";  
	printf("%d\n", ft_memset(str+4, 'x' 3));
	return(0);
}
*/