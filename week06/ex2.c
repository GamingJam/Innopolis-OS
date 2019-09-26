#include <stdio.h>
#include <memory.h>
#include <unistd.h>

int main() {
    int fd[2];

    pipe(fd);

    char input_line[] = "Input from parent process";
    
    int pid = fork();

    if (pid == 0) {
        write(fd[1], input_line, sizeof(input_line) + 1);
    } else {
        sleep(1);
        char output_line[strlen(input_line)];
        read(fd[0], output_line, sizeof(output_line) + 1);
        printf("%s", output_line);
    }
}
