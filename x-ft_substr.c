/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x-ft_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 01:47:01 by coder             #+#    #+#             */
/*   Updated: 2022/09/14 23:55:07 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	substring;
	int		i;
	
	while(s < len')
	{
		if()
		malloc(max_len);
		return (substring);
	}
	if(s == '\0')
		return(NULL);
}

int main (void)
{
	char const str[] = "bolas"; //retorna "ola"
	size_t max_len = 3;
	unsigned int strt = 1;
	printf("%s\n", ft_substr(str, strt, max_len));
	return(0);
}

Parameters s: The string from which to create the substring.
start: The start index of the substring in the
string ’s’.
len: The maximum length of the substring.
Return value The substring.
NULL if the allocation fails.
External functs. malloc
Description Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len