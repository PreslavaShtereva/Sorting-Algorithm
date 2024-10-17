#include <stdio.h>
#include <stdlib.h>
#define ARR_LEN 10
 
 
void insertion_sort(int arr[]);
 
int main() {
 
	int arr[ARR_LEN] = { 7, 21, 3, 47, 101, 9, 55, 8, 41, 31 };
  
 	printf("Unsorted array: ");
	for (int i = 0; i < ARR_LEN; i++)
    printf("%d ", arr[i]);
	printf("\n");
 
 
	insertion_sort(arr);

 
	return 0;
 
}
 
void insertion_sort(int arr[]) {
	for (int i = 0; i < ARR_LEN; i++) {
		for (int j = i; j > 0; j--) {
			if (arr[j - 1] > arr[j]) {
				int temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
 
		}
	}
  printf("Sorted array: ");
	for (int i = 0; i < ARR_LEN; i++) {
		printf("%d ", arr[i]);
	}
} 
