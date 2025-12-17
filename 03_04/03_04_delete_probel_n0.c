#include <stdio.h>
#include <string.h>

void print_array(char *arr, int len) {
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
    printf("i:%d j:%d \n", i, j);
    printf("arr[i]: %d \n", arr[i]);
    getchar();
    i++;
  }
  while (i < len) {
    if (arr[i] != ' ') {
      printf("i:%d j:%d \n", i, j);
      printf("arr[i]: %d \n", arr[i]);
      getchar();
      arr[j] = arr[i];
      i++;
      j++;
      len--;
    } else {
      printf("i:%d j:%d \n", i, j);
      printf("arr[i]: %d \n", arr[i]);
      getchar();
      arr[j] = arr[i];
      i++;
      j++;
      len--;
      if (arr[i] == ' ') {
        i++;
      }
    }
    if (arr[len - 1] == ' ') {
        arr[len - 1] = '\0';
        len--;
    } 
  }
  print_array(arr, len);
  return 0;
}
