/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 03:38:35 by anacaro3          #+#    #+#             */
/*   Updated: 2022/09/17 17:32:59 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**create(const char *start, char c, size_t str_index)
{
	char		**split;
	const char	*end;
	size_t		str_size;

	while (*start && *start == c)
		start++;
	end = start;
	while (*end && *end != c)
		end++;
	str_size = end - start;
	if (str_size)
		split = create(end, c, str_index + 1);
	else
		split = ft_calloc(str_index + 1, sizeof(*split));
	if (split && str_size)
	{
		split[str_index] = ft_substr(start, 0, str_size);
		if (split[str_index])
			return (split);
		while (split[++str_index])
			free(split[str_index]);
		free(split);
		split = 0;
	}
	return (split);
}

char	**ft_split(char const *s, char c)
{
	return (create(s, c, 0));
}