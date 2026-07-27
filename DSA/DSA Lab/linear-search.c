#include <stdio.h>

int main(void) {
	int size, target, i, found = 0;

	printf("Enter the number of elements: ");
	scanf("%d", &size);

	int arr[size];

	printf("Enter %d elements:\n", size);
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}

	printf("Enter the element to search: ");
	scanf("%d", &target);

	for (i = 0; i < size; i++) {
		if (arr[i] == target) {
			printf("Element found at position %d.\n", i + 1);
			found = 1;
			break;
		}
	}

	if (!found) {
		printf("Element not found.\n");
	}

	return 0;
}
