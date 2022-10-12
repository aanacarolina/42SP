/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 03:37:07 by anacaro3          #+#    #+#             */
/*   Updated: 2022/09/17 18:27:14 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] || c == '\0')
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		i++;
	}
	return ((char *) 0);
}
/*
int main (void)
{
	const char word[] = "wrdro";
	int letter = 'r'; //returns 3
	int null_letter = 'z'; //returns null
	printf("%s\n", ft_strchr(word, letter));
	printf("%s\n", ft_strchr(word, null_letter));
	return(0);
}
*/