char	*ft_strjoin(char const	*s1, char const	*s2)
{
	char    *str;
    char    *pos_init;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)ft_malloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!str)
		return (NULL);
	pos_init = str;
	while (*s1)
        *str++ = *s1++;
	while (*s2)
        *str++ = *s2++;
	str = '\0';
	return (pos_init);
}