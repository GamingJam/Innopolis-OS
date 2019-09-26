#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void sigstop_handler()
{
    printf("Received SIGSTOP\n");
}

void sigusr1_handler()
{
    printf("Received SIGUSR1\n");
}

void sigkill_handler()
{
    printf("Received SIGKILL\n");
}



int main()
{
    signal(SIGSTOP, sigstop_handler);
    signal(SIGUSR1, sigusr1_handler);
    signal(SIGKILL, sigkill_handler);
    
    while (1)
    {
        sleep(1);
    }
}