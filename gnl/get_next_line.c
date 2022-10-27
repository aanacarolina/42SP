/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 23:25:12 by anacaro3          #+#    #+#             */
/*   Updated: 2022/10/21 23:25:15 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_line(char *str) //a parte que trata a keep -- pq so quero devolver a linha até \n
	{
	int		i;
	char	*s;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] != '\n' && str[i])
		i++;
	s = (char *)malloc(sizeof(char) * (i + 2)); // sao pq a contagem começa em zero (index) dai 
	if (!s)
		return (NULL);
	i = 0;
	while (str[i] != '\n' && str[i])
	{
		s[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	*extra_letters(char *str)
{
	int		i;
	int		j;
	char	*s;

	i = 0;
	j = 0;
	while (str[i] != '\n' && str[i])
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	s = (char *)malloc(sizeof(char) * (ft_strlen(str) - i + 1)); //
	if (!s)
		return (NULL);
	i++;
	while (str[i])
		s[j++] = str[i++];
	s[j] = '\0';
	free(str);
	return (s);
}

//junta o que ja leu de buffer zise  e continua lendo até encontrar o\n  e libera do ultimo se for \n
char	*join_strings(int fd, char *keep)
{
	char	*buffer;
	int		read_bytes;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	read_bytes = 1; //pq senao nao entra no while
	while (read_bytes > 0 && !ft_strchr(keep, '\n'))
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes < 0)
		{
			free(buffer);
			return (NULL);
		}
		buffer[read_bytes] = '\0';
		keep = ft_strjoin(keep, buffer); //buffer recebe o q foi lido ( = line) = / keep (stash) = eh a linha inteira
	}
	free(buffer);
	return (keep);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*keep;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	keep = join_strings(fd, keep);
	if (!keep)
		return (NULL);
	line = read_line(keep);
	keep = extra_letters(keep);
	return (line);
}
