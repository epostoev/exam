// #include <stdio.h>
// #include <string.h>

// int main() {
// 	char stroka[1000] = {0};
	
// 	if (fgets(stroka, 1000, stdin) != NULL) {
		
// 		printf("\n");
// 		printf("%s\n", stroka);
// 	}

// 	return 0;
// }


#include <stdio.h>
#include <string.h>

void print_arra(char *arr, int len) {
	for (int i = 0; i < len; i++){
		printf("%3d ", arr[i]);
	}
	printf("\n");
	for (int i = 0; i < len; i++){
		printf("%3c ", arr[i]);
	}
	printf("\n");
}

int main() {
	char arr[] = "   Hello     World ";
	int len = strlen(arr);
	print_arra(arr, len);
	
// довести решение до рабочего

	// перебор массива
	for (int i = 0; i < len - 1; i++) {
		printf("i: %d \n", i);
		printf("arr[i]:%d \n", arr[i]);
		getchar();
		// если текущий элемент равен следующему
		// if (arr[i] == arr[i + 1] && arr[i] != 0) {
		if ((len > 0) && (arr[0] == ' ') || (arr[i] == ' ' && arr[i + 1] == ' ')) {
			// то все элементы справа сдвинуть на одну позицию
			// влево все элементы
			for (int j = i; j < len - 1; j++) {
				arr[j] = arr[j + 1];
			} 
			arr[len - 1] = '\0';
			len--;
			i--;
		}
	}
		if (arr[len - 1] == ' ') {
			arr[len - 1] = '\0';
			len--;
		}
	print_arra(arr, len);
	printf("\n");
	printf("%s\n",arr);

	return 0;
}

// переписать решение на линейную сложность
		// getchar();
		// если текущий символ пробел
			// если после пробела стоит пробел 
				// то пропускаем данный пробел 
			// и на его место ставим первый не пробельный символ
		// если текущий символ не пробел
			// то мы его оставляем

	// установить два счетчика
	// текущий счетчик для чтения
	// второй счетчик для записи 