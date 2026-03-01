// #include <stdio.h>

// void print_array(char *arr, int len){
//     for(int i = 0; i < len; i++){
//         printf("%3d ", i);
//     }
//     printf("\n");
//     for(int i = 0; i <= len; i++){
//         printf("%3d ", arr[i]);
//     }
//     printf("\n");
//     for(int i = 0; i < len; i++){
//         printf("%3c ", arr[i]);
//     }
// }

// int main() {
//     char arr[1000];
//     int len = 0;
//     for (int i = 0; i < 1000; i++){
//         scanf("%c", &arr[i]);
//         if (arr[i] == '\n') {
//             break;
//         }
//         len++;
//     }
//     print_array(arr, len);
//     printf("\n");
//     for(int i = 0; i < len; i++){
//         printf("i: [%d]\n", i);
//         printf("arr[%d]: [%c]\n", i, arr[i]);
//         if ((arr[0] == ' ') || ((arr[i] == ' ') && (arr[i + 1] == ' ') )) {
//             for(int j = i; j < len; j++){
//                 arr[j] = arr[j + 1];
//             }
//             len--;
//             i--;
//         }
//     }
//     for (int i = 0; i < len; i++){
//         getchar();
//         printf("i: [%d]\n", i);
//         printf("arr[%d]: [%c]\n", i, arr[i]);
//         if(arr[len - 1] == ' ') {
//             printf("we are here");
//             len--;
//         }
//     }
//     printf("\n");
//     print_array(arr, len);
// }


#include <stdio.h>

int input_array(char *array) {
    int len_array = 0;
    for (int i = 0; i < 1000; i++){
        scanf("%c", &array[i]);
        if (array[i] == '\n'){
            break;
        }
        len_array++;
    }
    return len_array;
}

void print_array(char *array, int len_array){
    for(int i = 0; i < len_array; i++){
        printf("%3d ", i);
    }
    printf("\n");
    for(int i = 0; i <= len_array; i++){
        printf("%3d ", array[i]);
    }
    printf("\n");
    for(int i = 0; i < len_array; i++){
        printf("%3c ", array[i]);
    }
    printf("\n");
}

int main(void) {
    char array[1000];
    int len_array = 0;
    len_array = input_array(array);
    print_array(array, len_array);
    for(int i = 0; i < len_array; i++){
        if((array[0] == ' ') || (array[i] == ' ' && (array[i + 1] == ' '))) {
            for(int j = i; j < len_array; j++){
                array[j] = array[j + 1];
            }
            len_array--;
            i--;
        }
        if (array[len_array - 1] == ' ') {
            array[len_array - 1] = array[len_array];
            len_array--;
            i--;
        }
    }
    printf("\n");
    print_array(array, len_array);
    return 0;
}