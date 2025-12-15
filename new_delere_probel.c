#include <stdio.h>
#include <string.h>
#define N 8


void print_arra(int *arr) {
	for (int i = 0; i < N; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	int arr[] = {1, 2, 3, 4, 4, 4, 6, 7};
	print_arra(arr);
	
	// перебор массива
	for (int i = 0; i < N - 1; i++) {
		printf("i: %d \n", i);
		printf("arr[i]:%d \n", arr[i]);
		getchar();
		// если текущий элемент равен следующему
		if (arr[i] == arr[i + 1] && arr[i] != 0) {
			// то все элементы справа сдвинуть на одну позицию
			// влево все элементы
			for (int j = i; j < N - 1; j++) {
				arr[j] = arr[j + 1];
			} 
			arr[N - 1] = 0;
			i--;
		}
	}
	print_arra(arr);

	return 0;
}