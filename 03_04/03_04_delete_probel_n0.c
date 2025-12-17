#include <stdio.h>
#include <string.h>

void print_array(char *arr, int len) {
  for (int i = 0; i < len; i++) {
    printf("%3d ", i);
  }
  printf("\n");
  for (int i = 0; i < len; i++) {
    printf("%3d ", arr[i]);
  }
  printf("\n");
  for (int i = 0; i < len; i++) {
    printf("%3c ", arr[i]);
  }
  printf("\n");
}

int main(void) {
  char arr[] = "  Hello  World ";
  int len = strlen(arr);
  printf("Исходный: \n");
  print_array(arr, len);
  int i = 0; // счетчик для чтения
  int j = 0; // счетчик для записи

  // Убираем  пробелы вначале строки
  while (i < len && arr[i] == ' ') {
    printf("i:%d j:%d len:%d\n", i, j, len);
    printf("arr[i]: %d \n", arr[i]);
    // getchar();
    i++;
  }
  while (i < len) {
    if (arr[i] != ' ') {
      printf("i:%d j:%d len:%d\n", i, j, len);
      printf("arr[i]: %d \n", arr[i]);
    //   getchar();
      arr[j] = arr[i];
      i++;
      j++;
    } else {
      printf("i:%d j:%d len:%d\n", i, j, len);
      printf("arr[i]: %d \n", arr[i]);
    //   getchar();
      arr[j] = arr[i];
      i++;
      j++;
      if (arr[i] == ' ') {
        i++;
      }
    }
  }
  if (arr[j - 1] == ' ') {
	arr[j - 1] = '\0';
	j--;
  }
  print_array(arr, j);
  return 0;
}
