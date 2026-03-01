
// #include <string.h>
// #include <stdio.h>

// void printArray(char *array, int cnt_array) {
//   printf("\n");
//   for (int i = 0; i < cnt_array; i++){
//     printf("%3d ", i);
//   }
//   printf("\n");
//   for (int i = 0; i < cnt_array; i++){
//     printf("%3d ", array[i]);
//   }
//   printf("\n");
//   for (int i = 0; i < cnt_array; i++){
//     printf("%3c ", array[i]);
//   }
// }

// int main() {
//     char arr1[1000];
//     char arr2[1000];
//     int len1 = 0, len2 = 0;
//     int count = 0;
//     for (int i =0; i < 1000; i++) {
//         scanf("%c", &arr1[i]);
//         if(arr1[i] == '\n') {
//             break;
//         }
//         len1 ++;
//     }
//     for (int i =0; i < 1000; i++) {
//         scanf("%c", &arr2[i]);
//         if(arr2[i] == '\n') {
//             break;
//         }
//         len2 ++;
//     }

// int match = 0;
//     for (int i = 0; i < len1; i ++) {
//         if (arr1[i] == arr2[0]) {
//                 match = 1;
//                 int start = i;
//                 for (int j =0; j < len2 && i < len1 && match ==1; j++) {
//                     if(arr1[i] == arr2[j]) {
//                         count++;
//                         i++;
//                     } else match = 0;
//                 }
//                 if (count == len2) {
//                     for( int j = start; j < len1 - len2; j++) {
//                         arr1[j] = arr1[j + len2];
//                         // arr1[len1 - 1] = '\0';
//                     }
//                     len1 -= len2;
//                     i = start -1;
//                     count = 0;
//                 }
//             }
//         }

//     printArray(arr1, len1);
//     return 0;
// }




// #include <stdio.h>

// int inputArray(char *array){
//   int cnt_array = 0;
//   for (int i = 0; i < 1000; i++){
//     scanf("%c", &array[i]);
//     if (array[i] == '\n') break;
//     cnt_array++;
//   }
//   return cnt_array;
// }

// void printArray(char *array, int cnt_array) {
//   printf("\n");
//   for (int i = 0; i <= cnt_array; i++){
//     printf("%3d ", i);
//   }
//   printf("\n");
//   for (int i = 0; i <= cnt_array; i++){
//     printf("%3d ", array[i]);
//   }
//   printf("\n");
//   for (int i = 0; i <= cnt_array; i++){
//     printf("%3c ", array[i]);
//   }
  

// }

// int main(){
//   char array_1[1000];
//   char array_2[1000];
//   int cnt_array_1 = inputArray(array_1);
//   int cnt_array_2 = inputArray(array_2);
//   printArray(array_1, cnt_array_1);
//   printArray(array_2, cnt_array_2);
  
//   int cnt_match = 0;
//   int match = 0;
//   int star_match = 0;
  
//   for(int i = 0; i < cnt_array_1; i++){
//     if (array_1[i] == array_2[0]) {
//       star_match = i;
//       match = 1;

//       for (int j = 0; j < cnt_array_2 && match == 1; j++){
//         if (array_1[i] == array_2[j]){
//           match = 1;
//           i++;
//           cnt_match++;
//         }
//         else {
//           match = 0;
//         }
//       }
//       getchar();
//       printf("\n");
//       printf("i = %3d | match = %3d | cnt_match = %3d | cnt_array2 = %3d | start_match = %3d", i, match, cnt_match, cnt_array_2, star_match);
//       if (match == 1 && cnt_match == cnt_array_2){
//         for(int j = star_match; j <= cnt_array_1 - cnt_array_2; j++ ){
//           printf("\ni = %d | match = %d | cnt_match = %d | cnt_array1 = %d | cnt_array2 = %d | start_match = %d | j = %d", i, match, cnt_match, cnt_array_1, cnt_array_2, star_match, cnt_array_1 - cnt_array_2);
//           array_1[j] = array_1[j + cnt_array_2];
//         }
//       cnt_array_1 = cnt_array_1 - cnt_array_2;
//       }
//     }
//   }
//   printArray(array_1, cnt_array_1);
//   return 0;
// }



#include <stdio.h>

int input_array(char *array){
    int cnt = 0;
    for(int i = 0; i < 1000; i++){
        scanf("%c", &array[i]);
        if (array[i] == '\n') break;
        cnt++;
  } 
    return cnt;
}

int main(void) {
    char array_1[1000];
    char array_2[1000];
    int match = 0;
    int start_match = 0;
    int cnt_match = 0;
    int len_array_1 = input_array(array_1);
    int len_array_2 = input_array(array_2);
    for(int i = 0; i < len_array_1; i++){
        if (array_1[i] ==  array_2[0]) {
            match = 1;
            start_match = i;
            for(int j = 0; match == 1 && j < len_array_2; j++ ){
                if (array_1[i] == array_2[j]) {
                    i++;
                    match = 1;
                    cnt_match++;
                }
                else match = 0;
            }
        getchar();
            if (match == 1 && cnt_match == len_array_2) {
                for (int j = start_match; j < (len_array_1 - len_array_2); j++ ){
                    array_1[j] = array_1[j + cnt_match];
                }
            len_array_1 = len_array_1 - len_array_2;
            i = start_match;
            }
        }
    }
    printf("\n");
    for(int i = 0; i < len_array_1; i++) {
        printf("%c", array_1[i]);
    }
    return 0;
}