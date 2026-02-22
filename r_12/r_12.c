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

int main(void){
    char arr_1[1000];
    int len_1 = 0;
    for (int i = 0; i < 1000; i++){
        scanf("%c", &arr_1[i]);
        if (arr_1[i] == '\n') break;
        len_1 ++;
    }
    print_array(arr_1, len_1);
    char new_s;
    for(int i = 0; i < len_1; i++){
        if (arr_1[i] > 96 && arr_1[i] < 123) {
            arr_1[i] = ((arr_1[i] - 'a' + 13) % 26) + 'a';
        }
        else if (arr_1[i] > 64 && arr_1[i] < 91) {
            arr_1[i] = ((arr_1[i] - 'A' + 13) % 26) + 'A';
        }
        // else if (arr_1[i] == ' ') {
        //     arr_1[i] = ' ';
        // } 
    
        printf("%c", arr_1[i]); 
    }

    return 0;
}