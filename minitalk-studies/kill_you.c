#include <signal.h>
#include <stdio.h>
#include <unistd.h>

// the second argument of kill means the signal that will be sent to the process and the first argument is the process id.
int kill(pid_t pid, int sig)
{
    printf("Just printing a msg to handle the signal %i and PID: %i ", sig, pid);
    return (0);
}

int main(void)
{
    while(1)
    {
        kill(getpid(), SIGUSR1);
        usleep(20000);
    }
    return (0);
}