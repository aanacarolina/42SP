/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 03:38:02 by anacaro3          #+#    #+#             */
/*   Updated: 2022/10/12 23:04:09 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ch;
	
	i = ft_strlen(s);
	ch = (char)c;
	if (!ch)
		return ((char *) s);
	while (i >= 0)
	{
		if (s[i] == ch)
			return ((char *) &s[i]);
		i--;
	}
	return ((char *) 0);
}
/*
int main (void)
{
	const char word[] = "wordrs";
	int letter = 'r'; //returns 5
	int null_letter = 'z'; //returns null
	printf("%s\n", ft_strrchr(word, letter));
	printf("%s\n", ft_strrchr(word, null_letter));
	return(0);
}
*/