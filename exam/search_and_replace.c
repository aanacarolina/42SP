#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int str_len(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}

void search_and_replace(char *str, char target, char replace)
{
	int i = 0;
	int size = str_len(str);
	
	while (i < size)
	{	
		char decision =  str[i] == target ? replace : str[i]; 
		write(1, &decision, 1);
		i++;	
	}
	write(1, "\n", 1);
}

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		write(1, "\n", 1);
		exit(0);
	}
	search_and_replace(argv[1], argv[2][0], argv[3][0]);
	return (0);
}
/*
int main(void)
{
	char word[] = "12xx34b56a7";
	char target = 'b';
	char replace = 'e';
	search_and_replace(&word, target, replace);
	return 0;
}
*/


/*
void search_and_replace(char *str, char target, char replace)
{
	int i = 0;
	int size = str_len(str);

	while (i < size)
	{
		if (str[i] == target) 
			write(1, &replace, 1);
		else 
			write(1, &str[i], 1);
		i++;	
	}
	write(1, "\n", 1);
}
*/