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

int main (int argc, char **argv){
	typedef struct s_node
	{
		int data;          // variable name and content
		struct node *next; // only pointer can hold add to another variable
		// ponteiro tem que ser do mesmo typo do dado que aponta
	} t_node;

	struct s_node *head;
	struct s_node *newnode;
	struct s_node *temp;
	head = 0;



	while (argv[1])// ver se certo
	{
		newnode = (struct t_node *)malloc(sizeof(struct s_node)); // vai criar o noovo espaço na meoria para o novo node e vai guardarr o endereço

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

		}
		
	}
}
