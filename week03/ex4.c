#include <stdio.h>
#include <stdlib.h>

//simple swap for two integers
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 

//quick sort function
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        // If current element is smaller than the pivot 
        if (arr[j] < pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  

void quickSort(int *arr, int low, int high) 
{ 
    if (low < high) 
    { 
        int pi = partition(arr, low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
}

int main() {
    //unsorted array of integers
	int arr[5] = {23, 14, 55, 8, 10};

    //sorting the array using quick sort
	quickSort(arr, 0, 4);

    //printing sorted array
	for (int i = 0; i < 5; ++i) {
		printf("%d\n", arr[i]);
	}

	return 0;
}