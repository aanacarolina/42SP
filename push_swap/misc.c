#include<stdio.h> 
#include<stdlib.h> 


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
	int count;
	head = 0;

	if (1) // ver se certo
	{
		newnode = calloc(1, sizeof(t_node)); // vai criar o noovo espaço na meoria para o novo node e vai guardarr o endereço
																  // size of node sizeof struct = 8 bites (int 4 bites + pointer 4 bites)  returns (a void pointer) to the starting address of the memory block
		printf("%lu SIZE DO T-NODE \n", sizeof(t_node));
		printf("%lu data \n", sizeof(newnode->data));
		printf("%lu next \n", sizeof(newnode->next));

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
