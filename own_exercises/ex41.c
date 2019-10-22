#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(){
    int pid = fork();
    if (pid==0){
        printf("Hello from parent with PID %d\n",pid);
    } else {
        printf("Hello from child with PID %d\n",pid);
    }
    return 0;
}