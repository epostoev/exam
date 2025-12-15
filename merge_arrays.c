#include <stdio.h>
#include <stdlib.h>

void merge_arrays(int *arr1, int siz_arr1, int *arr2, int siz_arr2, int *result) {
 int i = 0, j = 0, k = 0;
 for (; i  < siz_arr1 && j < siz_arr2;) {
  if(arr1[i] < arr2[j]) {
    result[k] = arr1[i];
    i++;
    k++;
  } else {
    result[k] = arr2[j];
    k++;
    j++;
  }
   }
  while (i < siz_arr1){
    result[k++] = arr1[i++];
  }
  while (j < siz_arr2){
    result[k++] = arr2[j++];
  }
}

int main(int argc, char *argv[])
{
  int size_arr1 = 0;  
  int size_arr2 = 0; 
  scanf("%d", &size_arr1);
  scanf("%d", &size_arr2);
 int *arr_1 = malloc(size_arr1 * sizeof(int));
 int *arr_2 = malloc(size_arr2 * sizeof(int));
 int *result = malloc((size_arr1 + size_arr2) * sizeof(int));
 
 for(int i = 0; i < size_arr1; i++){
  scanf("%d", &arr_1[i]);
 }
 for(int i = 0; i < size_arr1; i++){
  scanf("%d", &arr_2[i]);
 }

 merge_arrays(arr_1, size_arr1, arr_2, size_arr2, result);
 for(int i = 0; i < 8; i++){
  printf("%d\n", result[i]);
 }
 free(arr_1);
 free(arr_2);
 free(result);
 return 0;
}