#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int size_arr = 0;
	scanf("%d", &size_arr);
	int *arr = malloc(size_arr * sizeof(int));
	for (int i = 0; i < size_arr; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < size_arr; i++) {
	printf("%d", arr[i]);
	}

	int max = arr[0];
	int num_element_arrau = 0;
	for (int i = 0; i < size_arr; i++) {
		if (max > arr[i]) {
			max = arr[i];
			num_element_arrau = i;

		}
	}
	printf("\n[%d] - %d", num_element_arrau, max );

	free(arr);
	return 0;
}