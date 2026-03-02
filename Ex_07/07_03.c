#include <stdio.h>

int input_array(char *array){
    int cnt = 0;
    for (int i = 0; i < 1000; i++){
    scanf("%c", &array[i]);
    if (array[i] == '\n') break;
    cnt++;
    }
    return cnt;
}

void print_array(char *arr, int cnt){
    printf("\n");
    for(int i = 0; i < cnt; i++){
        printf("%3d ", i);
    }
    printf("\n");
    for(int i = 0; i < cnt; i++){
        printf("%3c ", arr[i]);
    }
    printf("\n");
    printf("  cnt = %d", cnt);
    printf("\n");
}

char toLower(char c){
    if (c >= 'A' && c <= 'Z') {
        c = c + 32;
    }
    return c;
}

int main(void) {
    char arr[1000];
    int cnt = 0;
    int match = 0;
    int cnt_match = 0;
    cnt = input_array(arr);
    printf("\n");
    print_array(arr, cnt);
    printf("\n");
    for(int i = 0; i < cnt/2; i++){
        if (toLower(arr[i]) == toLower(arr[(cnt-1) - i])) {
            match = 1;
            cnt_match++;
        };
    }
    if (cnt_match == cnt / 2) printf("\nYES");
    return 0;
}