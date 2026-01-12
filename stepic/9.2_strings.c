#include <stdio.h>
#include <string.h>

void print_array(char* string_1, int size_string_1) {
	for (int i = 0; i < size_string_1; i++) {
	printf("%3d ", i);
	}
	printf("\n");
	for (int i = 0; i < size_string_1; i++) {
		printf("%3d ", string_1[i]);
	}
	printf("\n");
	for (int i = 0; i < size_string_1; i++) {
		printf("%3c ", string_1[i]);
	}
	printf("\n");
}

int main (void) {
	char string_1[] = "Hello World";
	int size_string_1 =  strlen(string_1);
	print_array(string_1, size_string_1);
	return 0;
}