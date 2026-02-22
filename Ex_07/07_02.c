#include <stdio.h>

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
  char arr1[1000];
  char arr2[1000];
  int len = 0;
  int len_2 = 0;
  for (int i = 0; i < 1000; i++) {
    scanf("%c", &arr1[i]);
    if (arr1[i] == '\n')
      break;
    len++;
  }
  for (int i = 0; i < 1000; i++) {
    scanf("%c", &arr2[i]);
    if (arr2[i] == '\n')
      break;
    len_2++;
  }
  print_array(arr1, len);
  print_array(arr2, len_2);
  printf("%d", len);
  printf("%d", len_2);
  int match = 0;
  int cnt_match = 0;
  int start = 0;
  for (int i = 0; i < len; i++) {
    if (arr1[i] == arr2[0]) {
      match = 1;
      start = i;
      for (int j = 0; j < len_2 && match == 1; j++) {
        if (arr1[i] == arr2[j]) {
          cnt_match++;
          i++;
        } else {
          match = 0;
        }
      }
      if (match == 1 && cnt_match == len_2) {
        for(int j = start; j < len - len_2; j++){
            arr1[j] = arr1[j + len_2];
        }
        len -= len_2;
        i = start;
        cnt_match = 0;
      }
    }
  }
print_array(arr1, len);
  return (0);
}