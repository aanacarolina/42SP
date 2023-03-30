/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 21:35:38 by anacaro3          #+#    #+#             */
/*   Updated: 2023/03/29 22:00:44 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/parse_map_utils.h"
#include "../include/fdf.h"

int	count_col(char **split)
{
	int	count;

	count = 0;
	while (split[count] != '\0')
		count++;
	return (count);
}

void	free_split(char **split)
{
	int	count;

	count = 0;
	while (split[count] != '\0')
		free(split[count]);
	free(split);
}

int	ft_counter(t_parse_map *parse_map, int fd)
{
	int		qty_row;
	char	*line;
	char	**cols;
	int		qnt_col;

	parse_map->qty_lines = 1;
	cols = ft_split(line, ' ');
	parse_map->qty_cols = count_col(cols);
	free(line);
	free_split(cols);
	line = gnl(fd);
	while (line != NULL)
	{
		qty_row++;
		free(line);
		line = gnl(fd);
	}
}
