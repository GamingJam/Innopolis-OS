#include <stdio.h>

int main() {
	FILE *rand = fopen("/dev/random", "r");
	char random[21];

	fscanf(rand, "%c", random);
	fclose(rand);

	random[20] = '\0';
	char *iter = random;
    
	for (int i = 0; i < 20; i++) {
		*iter = (*iter %  62) + 65;
        iter++;
	}
    

	FILE *outFile = fopen("ex1.txt", "w");
	fprintf(outFile, "%s\n", random);
	fclose(outFile);

	return 0;
}