#include <stdio.h>

void merge(int arr[], int left, int middle, int right) {
	int left_size = middle - left + 1;
	int right_size = right - middle;
	int left_arr[left_size];
	int right_arr[right_size];

	for (int i = 0; i < left_size; i++) {
		left_arr[i] = arr[left + i];
	}
	for (int i = 0; i < right_size; i++) {
		right_arr[i] = arr[middle + 1 + i];
	}

	int left_index = 0;
	int right_index = 0;
	int merged_index = left;

	while (left_index < left_size && right_index < right_size) {
		if (left_arr[left_index] <= right_arr[right_index]) {
			arr[merged_index++] = left_arr[left_index++];
		} else {
			arr[merged_index++] = right_arr[right_index++];
		}
	}

	while (left_index < left_size) {
		arr[merged_index++] = left_arr[left_index++];
	}
	while (right_index < right_size) {
		arr[merged_index++] = right_arr[right_index++];
	}
}

void merge_sort(int arr[], int left, int right) {
	if (left >= right) {
		return;
	}

	int middle = left + (right - left) / 2;
	merge_sort(arr, left, middle);
	merge_sort(arr, middle + 1, right);
	merge(arr, left, middle, right);
}

int main(void) {
	int size;

	printf("Enter the number of elements: ");
	if (scanf("%d", &size) != 1 || size <= 0) {
		printf("The number of elements must be positive.\n");
		return 1;
	}

	int arr[size];
	printf("Enter %d elements:\n", size);
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}

	merge_sort(arr, 0, size - 1);

	printf("Sorted array: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
