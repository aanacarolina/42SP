/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 03:38:58 by anacaro3          #+#    #+#             */
/*   Updated: 2022/09/17 22:22:30 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//The strlcat() function appends the NUL-terminated string src 
//to the end of dst. It will append at most size - strlen(dst) - 1 bytes, 
//NUL-terminating the result.
//size inclui nulo por isso -1 na l32

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	n;
	size_t	size_dest;
	size_t	size_src;

	size_dest = ft_strlen(dst);
	size_src = ft_strlen(src);
	n = size_dest + size_src;
	if (!dst)
		return (0);
	if (size <= size_dest)
		return (size_src + size);
	while (*dst)
		dst++;
	i = 0;
	while (i < (size - size_dest - 1) && src[i] != '\0')
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