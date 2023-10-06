#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] && s2[i])
    	i++;
	return (s1[i] - s2[i]);
}


int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;

	str1 = "dois pasteix";
	str2 = "dois pasteix";
	str3 = "um caldo de cana";
	str4 = "refri";
	printf(" zer0 = %i \n", ft_strcmp(str1, str2));	
	printf(" not 0 = %i \n", ft_strcmp(str3, str4));	
	printf(" not 0 = %i \n", ft_strcmp("hello World", ""));	
	return (0);
}
