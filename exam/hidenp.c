#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_hidenp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	//if (ft_strlen(s1) > ft_strlen(s2))
	//	write(1, "0", 1);
	while (s2[j])
	{
		if (s1[i] && s1[i] == s2[j])
			i++;
		else
		    j++;
	}
	if (s1[i] == '\0')
		write(1, "1", 1);
	else
		write(1, "0", 1);
    write(1, "\n", 1);

}

int	main(int argc, char **argv)
{
	if (argc != 3)
		write(1, "\n", 1);
	else
		ft_hidenp(argv[1], argv[2]);
	return (0);
}
