/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 21:35:38 by anacaro3          #+#    #+#             */
/*   Updated: 2023/03/30 19:27:40 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/parse_map_utils.h"
#include "../include/fdf.h"
#include "../include/utils.h"
#include "../libs/gnl/get_next_line.h"
#include "../libs/libft/libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

static int	count_col(char **split)
{
	int	count;

	count = 0;
	while (split[count] != NULL)
		count++;
	return (count);
}

static int	file_opener(char *file_name)
{
	int	fdf_file;

	fdf_file = open(file_name, O_RDONLY);
	if (fdf_file < 0)
	{
		perror("Failed to open file");
		exit(1);
	}
	return (fdf_file);
}

int	ft_counter(t_map *parse_map, char *file_name)
{
	char	*line;
	char	**cols;
	int		fdf_file;

	fdf_file = file_opener(file_name);
	line = get_next_line(fdf_file);
	if (line == NULL)
		return (1);
	parse_map->row_size = 1;
	cols = ft_split(line, ' ');
	parse_map->col_size = count_col(cols);
	free(line);
	free_split(cols);

	line = get_next_line(fdf_file);
	while (line != NULL)
	{
		parse_map->row_size++;
		free(line);
		line = get_next_line(fdf_file);
	}
	close(fdf_file);
	return (0);
}

