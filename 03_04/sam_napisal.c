#include <stdio.h>
#include <string.h>

void print_array(char* arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("%3d ", i);
    }
    printf("\n");
    for(int i = 0; i < size; i++) {
        printf("%3d ", arr[i]);
    }
    printf("\n");
    for(int i = 0; i < size; i++) {
        printf("%3c ", arr[i]);
    }
    printf("\n");
    printf("%d\n", size);
}


int main(void) {
    char arr[1000] = {0};
    int size = strlen(arr);
    int c;
    while ((c = getchar()) != '\n' && c != EOF ) {
        arr[size++] = c;
    }
    arr[size] = '\0';

    print_array(arr, size);
    int cnt_write = 0;
    int cnt_read = 0;
    int flag_probel = 0;
    while (cnt_read < size && arr[cnt_read] == ' ') {
        printf("cnt_read = %d cnt_write = %d\n", cnt_read, cnt_write);
        printf("arr[i] = %d\n",arr[cnt_read]);
        getchar();
        cnt_read++;
    }
    while ( cnt_read < size) {
        printf("cnt_read = %d cnt_write = %d\n", cnt_read, cnt_write);
        printf("arr[i] = %d\n",arr[cnt_read]);
        getchar();
        if (arr[cnt_read] != ' ') {
            arr[cnt_write] = arr[cnt_read];
            cnt_read++;
            cnt_write++;
            flag_probel = 0;
        } else {
            if (flag_probel == 0) {
                arr[cnt_write] = arr[cnt_read];
                cnt_read++;
                cnt_write++;
                flag_probel = 1;
            }
            else {
                cnt_read++;
            }
        }
    }
    printf("thereAreHere\n");
    printf("cnt_read = %d cnt_write = %d\n", cnt_read, cnt_write);
    printf("arr[i] = %d\n",arr[cnt_write]);
    if (cnt_write > 0 && arr[cnt_write - 1] == ' ') {
        printf("WeAreHere\n");
        printf("cnt_read = %d cnt_write = %d\n", cnt_read, cnt_write);
        printf("arr[i] = %d\n",arr[cnt_write]);
        getchar();
        cnt_write--;
    }
    arr[cnt_write] = '\n';
    size = cnt_write;
    print_array(arr, size);
    return 0;
}