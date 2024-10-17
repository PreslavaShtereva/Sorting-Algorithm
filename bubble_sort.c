#include <stdio.h>
#include <stdlib.h>
#define ARR_LEN 10
 
void bubble_sort(int arr[]);
 
int main() {
 
	int arr[ARR_LEN] = { 7, 21, 3, 47, 101, 9, 55, 8, 41, 31 };
	  
    printf("Unsorted array: ");
	for (int i = 0; i < ARR_LEN; i++)
	 printf("%d ", arr[i]);
	  printf("\n");
 
 
	bubble_sort(arr);
	printf("Sorted array: ");
	for (int i = 0; i < ARR_LEN; i++)
	 printf("%d ", arr[i]);
	  printf("\n");

 
	return 0;
 
}
 
void bubble_sort(int arr[]){
  for (int i = 0; i < ARR_LEN - 1; ++i) {
	for (int j = 0; j < ARR_LEN - i - 1; ++j) {
		if (arr[i] > arr[i + 1]) {
			int temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
	}
  }
}
