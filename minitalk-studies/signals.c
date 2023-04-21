/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:19:18 by anacaro3          #+#    #+#             */
/*   Updated: 2023/04/21 17:37:03 by anacaro3         ###   ########.fr       */
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
 
//returns  the  process  ID (PID) of the calling process.  
//(This is often used by routines that generate unique temporary filenames.)
 getpid()  
 
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

//add signal signum from set. 
//RETURN 0 on success and -1 on error
int sigaddset()



//is used to change the action taken by a process on receipt of a specific signal.
//signum specifies the signal and can be any valid signal except SIGKILL and SIGSTOP.
//If act is non-NULL, the new action for signal signum is installed from act.
//If oldact is non-NULL, the previous action is saved in oldact.
//RETURN = 0 on success; on error, -1 is returned, and errno is set to indicate the error.
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
/*
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
*/

int main(void)
{
	sigact
}