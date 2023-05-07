#include <signal.h>
#include <stdio.h>
#include <unistd.h>

// the second argument of kill means the signal that will be sent to the process and the first argument is the process id.
int kill(pid_t pid, int sig)
{
    printf("Just printing a msg to handle the signal %i and PID: %i \n", sig, pid);
    return (0);
}

int main(void)
{
    int i = 0;
    while(i < 5)
    {
        kill(getpid(), SIGUSR1);
        sleep(5);
        i++;
    }
    return (0);
}