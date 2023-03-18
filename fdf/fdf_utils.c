/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:53:30 by anacaro3          #+#    #+#             */
/*   Updated: 2023/03/17 20:45:42 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	while (*s)
		new[i++] = *s++;
	new[i] = '\0';
	return (new);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	unsigned int	str_size;
	unsigned int	i;

	i = 0;
	str_size = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= str_size)
		return (ft_strdup(""));
	if (str_size <= len)
		substring = malloc(str_size - start + 1);
	else
		substring = malloc(len + 1);
	if (!substring)
		return (NULL);
	s += start;
	while (*s && i < len)
	{
		substring[i] = *s++;
		i++;
	}
	substring[i] = '\0';
	return (substring);
}

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}