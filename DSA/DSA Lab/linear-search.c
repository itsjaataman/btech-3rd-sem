#include <stdio.h>

int linear_search(int arr[], int size, int target) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == target) {
			return i;
		}
	}

	return -1;
}

int main(void) {
	int size;
	int target;

	printf("Enter the number of elements: ");
	scanf("%d", &size);

	if (size <= 0) {
		printf("Invalid array size.\n");
		return 0;
	}

	int arr[size];

	printf("Enter %d integer elements:\n", size);
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}

	printf("Enter the integer to search: ");
	scanf("%d", &target);

	int location = linear_search(arr, size, target);
	if (location != -1) {
		printf("Element found at location %d.\n", location + 1);
	} else {
		printf("Element not found.\n");
	}

	return 0;
}
