/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x-ft_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 00:51:36 by coder             #+#    #+#             */
/*   Updated: 2022/09/14 23:35:21 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//CONFERIR


int ft_strlen (char *str);

char *ft_strdup(const char *s, size_t n)
{
	char *new;
	int	i;

	i = 0;
	new = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!new)
		return NULL;
	while(*s)
		new[i++] = *s++	;
	new = '\0';
	return (new);
	}

   int ft_strlen (char *str)
   {
	int i;

	i = 0;
	while(*str)
	i++;
	return (i);
   }

   int main (void)
   {
	char original[] = "original";
	size_t length = 9;
	printf("%s\n", ft_strdup(original, length));
	return (0);
   }