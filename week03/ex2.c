#include <stdio.h>
#include <stdlib.h>

//bubble sort function
void bubble(int n, int *arr) {
	int temp;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n - i - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {
    //unsorted array of integers
	int arr[5] = {23, 14, 55, 8, 10};

    //sorting the array using bubble sort
	bubble(5, arr);

    //printing sorted array
	for (int i = 0; i < 5; ++i) {
		printf("%d\n", arr[i]);
	}

	return 0;
}
