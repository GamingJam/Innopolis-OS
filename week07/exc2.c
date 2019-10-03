
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    printf("enter size:\n");

    scanf("%d", &n);
    int* array = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        array[i] = i;
    }
    printf("Array:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    free(array);

}