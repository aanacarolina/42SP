#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../push_swap.h"




int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("🚪 EXIT \n");//TODO remove at the end
		exit(1);
	}

	TESTE_create_node(argc, argv);
	TESTE_arguments_to_list(argc, argv);
	TESTE_args_checker();
	TESTE_non_int_checker();
	TESTE_max_min_int_checker();
	return (0);
}

// TODO: validar qty argumentos -
// If no parameters are specified, the program must not display anything and give the prompt back.

// TODO: se é INT - e nao char ou
// TODO: que são entre ou igual MIN INT e MAX INT
// TODO: sinais (ATOI?)
// TODO: valores unicos

/*

• In case of error, it must display "Error" followed by a ’\n’ on the standard error.
Errors include for example: some arguments aren’t integers, some arguments are
bigger than an integer and/or there are duplicates.
*/