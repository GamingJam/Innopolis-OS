#include <stdio.h>
#include <malloc.h>
#include <unistd.h>
#include <string.h>

int main() {

	for (int i = 0; i < 10; i++) {
		calloc(1024, 10240);
		sleep(1);
	}

	return 0;
}