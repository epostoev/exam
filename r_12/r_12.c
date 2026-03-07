// #include <stdio.h>

// void print_array(char *arr, int len) {
//   for (int i = 0; i < len; i++) {
//     printf("%3d ", i);
//   }
//   printf("\n");
//   for (int i = 0; i < len; i++) {
//     printf("%3d ", arr[i]);
//   }
//   printf("\n");
//   for (int i = 0; i < len; i++) {
//     printf("%3c ", arr[i]);
//   }
//   printf("\n");
// }

// int main(void){
//     char arr_1[1000];
//     int len_1 = 0;
//     for (int i = 0; i < 1000; i++){
//         scanf("%c", &arr_1[i]);
//         if (arr_1[i] == '\n') break;
//         len_1 ++;
//     }
//     print_array(arr_1, len_1);
//     char new_s;
//     for(int i = 0; i < len_1; i++){
//         if (arr_1[i] > 96 && arr_1[i] < 123) {
//             arr_1[i] = ((arr_1[i] - 'a' + 13) % 26) + 'a';
//         }
//         else if (arr_1[i] > 64 && arr_1[i] < 91) {
//             arr_1[i] = ((arr_1[i] - 'A' + 13) % 26) + 'A';
//       }
//         printf("%c", arr_1[i]); 
//     }

//     return 0;
// }


// #include <stdio.h>

// void print_arr(char *arr, int cnt) {
//     // for (int i = 0; i <= cnt; i++) {
//     //     printf("%3d ", i);
//     // }
//     // printf("\n");
//     // for (int i = 0; i <= cnt; i++) {
//     //     printf("%3d ", arr[i]);
//     // }
//     printf("\n");
//     for (int i = 0; i <= cnt; i++) {
//         printf("%c", arr[i]);
//     }
//     printf("\n");
// }

// int main(void){
//     char name_of_file[10] = "test.txt";
//     int ch = 0;
//     char arr[1000];
//     int cnt = 0;
//     FILE *file = fopen(name_of_file, "r");
//     for(;(ch = fgetc(file)) != EOF;){
//         arr[cnt] = ch;
//         printf("%c", ch);
//         cnt++;
//     }
//     printf("\n\n\n");
//     print_arr(arr, cnt);

//     for(int i = 0;arr[i] != '\0'; i++){
//         if (((arr[i] > 64) && (arr[i] < 78)) || ((arr[i] > 96) && (arr[i] < 110))) {
//             arr[i] = (arr[i] + 13);
//         }
//         else if (((arr[i] > 77) && (arr[i] < 91)) || ((arr[i] > 109) && (arr[i] < 123))) {
//             arr[i] = (arr[i] - 13);
//         }
//     }
//     printf("\n\n\n");
//     print_arr(arr, cnt);
//     return 0;
// }

#include <stdio.h>

int main(void) {
    int ch = 0;
    int arr[1000];
    int cnt = 0;
    FILE *file = fopen("test.txt", "r");
    for(;((ch = fgetc(file)) != EOF);) {
        printf("%c", ch);
        arr[cnt] = ch;
        cnt++;
    }
    for (int i = 0; i < cnt; i++){
        if (arr[i] > 64 && arr[i] < 78 )  || (arr[i] > 96 && arr[i] < 110) {
            
        }
    }
    return 0;
}