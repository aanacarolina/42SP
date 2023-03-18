/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:53:43 by anacaro3          #+#    #+#             */
/*   Updated: 2023/03/18 19:37:30 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"



char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	word_len;
	int		i;

	lst = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			lst[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}

int	ft_atoi(const char *nptr)
{	
	int	result;
	int	i;
	int	sign;

	result = 0;
	i = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	return (result * sign);
}

int	*parse_line(char *map_line, int *int_line_size)
{
	char	**str_line;
    int     j;
	int		i;
	int		*int_line;
    

	str_line = ft_split(map_line, ' ');
	free(map_line);

	i = 0;
	while (str_line[i] != NULL)
		i++;
	int_line = malloc((i + 1) * sizeof(int));
	if (int_line == NULL)
		return (0);

	j = 0;
	while (str_line[j] != NULL)
	{
		int_line[j] = ft_atoi(str_line[j]);
		free(str_line[j]);
		j++;
	}
    int_line_size[0] = j;
	free(str_line);
	return (int_line);
}
