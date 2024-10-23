#include <stdio.h>
#include <stdlib.h>
#define ARR_LEN 10
 
void selection_sort(int arr[]);
 
int main() {
	int arr[ARR_LEN] = { 7, 21, 3, 47, 101, 9, 55, 8, 41, 31 };

	printf("Unsorted array: ");
	for (int i = 0; i < ARR_LEN; i++)
		printf("%d ", arr[i]);
 
	printf("\n");
 
	selection_sort(arr);
 
	return 0;
}
 
void selection_sort(int arr[]) {
	for (int i = 0; i < ARR_LEN - 1; i++) { 
		int min_idx = i; 

		for (int j = i + 1; j < ARR_LEN; j++) {
			if (arr[j] < arr[min_idx]) {
				min_idx = j; 
			}
		}
 
		if (min_idx != i) {
			int temp = arr[i];
			arr[i] = arr[min_idx];
			arr[min_idx] = temp;
		}
	}
 
	printf("Sorted array: ");
	for (int i = 0; i < ARR_LEN; i++)
		printf("%d ", arr[i]);
 
	printf("\n");
}
