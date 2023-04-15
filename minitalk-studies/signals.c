/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:19:18 by anacaro3          #+#    #+#             */
/*   Updated: 2023/04/15 18:18:39 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

 //função que imprime no terminal o numero do sinal que foi executado. Ex. apertei CTRL+C ai 
 void signal_handler(int signo)
 {
	printf("CAPTURAR SINAL: %d\n", signo);
 }
 

/*
int main(int argc, char *argv[])
{
	(void) signal (SIGINT, signal_handler); 
	while (1)
	{
	printf("Printing First Argument: %s\n", argv[1]);
	sleep(1);
	}
	
	return(0);
}*/


//https://archive.org/details/guia-de-infraestrutura-de-ti/mode/2up?ref=ol&view=theater

int sigaction(int signum, const struct sigaction *act, struct sigaction *oldact)
{
	act = printf("Just printing a msg to handle the signal %i : ", signum);
	return(act);
}
/*
int main(int argc, char *argv[])
{
	printf("Identificador do PID: %d\n",  (int) getpid());
	printf("Identificador rdo PAI - PPID: %d\n",  (int) getppid());
	
	return(0);
}
*/

int main()
{
	int child_pid;
	printf("The main program process ID is %d\n", getpid());
	child_pid = fork();
	if (child_pid != 0)
	{
		printf("parent PID %d\n", (int) getpid());
		printf("child PID %d\n", (int) child_pid);
	}
	else
		printf("this is the CHILD PID %d\n", (int) getpid());
	return(0);
}