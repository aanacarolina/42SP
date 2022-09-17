/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 03:38:58 by anacaro3          #+#    #+#             */
/*   Updated: 2022/09/17 16:48:50 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	n;

	n = ft_strlen(dst) + ft_strlen(src);
	if (size <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	while (*dst)
		dst++;
	i = 0;
	while ((i < size - (n - ft_strlen(src)) - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (n);
}
/*
int main(void)
{
	char test_src[] = "caro3BLABLABLA";
	char test_dest[] = "ana";
	unsigned int test_nb = 5;

	printf("%zu\n", ft_strlcat(test_dest, test_src, test_nb));
	return 0;
}
*/