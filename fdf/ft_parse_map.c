
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

int *parse_line (char *map_line)
{
    char **line = ft_split(map_line, ' ');
    free(map_line);

    int i = 0;
    int j = 0;
    while(line[i] != NULL)
        i++;
    int *line_size = malloc((i + 1) * sizeof(int));
    if(line_size == NULL)//IF NULL FREE SPLIT tbm, funcao especifica
       return(0);

    j = 0;
    while(line[j] != NULL)
    {
        line_size[j] = ft_atoi(line[j]);
        free(line[j]);
        j++;
    }
    free(line);
    return line_size;
   // while (j < i)
}
