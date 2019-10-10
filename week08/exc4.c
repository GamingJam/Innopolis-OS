#include <stdio.h>
#include <malloc.h>
#include <unistd.h>
#include <sys/resource.h>


int main() {
    
	struct rusage usage;

	for (int i = 0; i < 10; i++) {
		calloc(1024, 10240);
        getrusage(RUSAGE_SELF, &usage);
		printf("Memory usage: %dK\n", usage.ru_maxrss);
		sleep(1);
	}

	return 0;
}