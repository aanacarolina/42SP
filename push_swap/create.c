#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
create node
data = valor da variavel
next = valor do atual primeiro node

depois mudar o valor de head para o node que acabamos de criar

*/

/*
create node
data = valor da variavel
next = null

depois mudar o valor da anterior, que era NULL, para o node que acabamos de criar

*/

typedef struct s_node
{
	int data;			 // variable name and content
	struct s_node *next; // only pointer can hold add to another variable
						 // ponteiro tem que ser do mesmo typo do dado que aponta
} t_node;

int main(int argc, char **argv)
{

	t_node *head;
	t_node *newnode;
	t_node *temp;
	int count = 0;
	head = 0;

	/*while(count != argc){
		printf("%s \n",  argv[count]);
		count++;
	}*/

	/*while (argv[count] != NULL)
	{
		printf("%s \n", argv[count]);
		count++;
	}*/

	if ('\0' == 0){
		printf("eh ingual \n");
 	}
	else{
		printf("ningual \n");
	}


	while(argv[count] != 0)
	{
		int j = 0;
		while(argv[count][j] != '\0')
		{
			write(1, &argv[count][j], 1);
			j++;
		}
		write(1, " ", 1);
		j = 0;
		count++;
	}
	printf("\n");

	if (1) // ver se certo
	{
		newnode = calloc(1, sizeof(t_node)); // vai criar o noovo espaço na meoria para o novo node e vai guardarr o endereço
											 // size of node sizeof struct = 8 bites (int 4 bites + pointer 4 bites)  returns (a void pointer) to the starting address of the memory block

		// printf("[%c] argv \n", argv[1][0]);
		// printf("[%i] argc \n", argc);

		/*
		newnode->next = head;
		if (head == 0)
		{ // empty list
			head = temp = newnode;
		}
		else
		{
			temp.next = newnode;
			temp = node;
		}

		temp = head;
		while (temp != 0)
		{
			printf(temp.data)
				temp = temp.next;
			count++; // saber qtos nodes tem
		}*/
	}
}
