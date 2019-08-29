#include <stdio.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	
	int a, b;
    
    printf("First integer:\n");
    scanf("%i", &a);
    printf("Second integer:\n");
	scanf("%i", &b);

	swap(&a, &b);

	printf("Swapped:\n%i %i\n", a, b);

	return 0;
}