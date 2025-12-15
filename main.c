#include <stdio.h>

int remove_dublocate(int *arr, int *size) {
    int cnt = 0;
    if (size != 0){
        while (cnt < *size) {
            printf("arr[%d] = %d | %p \n", cnt+1, arr[cnt], (void*)&arr[cnt]);
            cnt++;
        }
        int j = 0;
        for (int i = 1; i < *size; i++ ){
            if (arr[i] != arr[j]) {
                j++;
                arr[j] = arr[i];
                printf("j = %d \n", j);
            }
        }
		return j + 1;
    }
	return 0;
}

void input(int *pnt_size, int *error_flag) {
    if ((scanf("%d", pnt_size) != 1) || ((*pnt_size) < 0)) {
		*error_flag = 1;
	}
}

void inputArray(int *pnt_size, int *arr, int *error_flag) {
    for (int i = 0; i < *pnt_size; i++){
        if (scanf("%d", &arr[i]) !=1) {
			*error_flag = 1;
			printf("n/a");
		}
	}
}

int main(void) {
    int size;
	int error_flag = 0;
    input(&size, &error_flag);
		if (error_flag != 1) {
		int arr[size];
		inputArray(&size, arr, &error_flag);
		if (error_flag != 1){
			int new_size = remove_dublocate(arr, &size);
			printf("%d\n", new_size);
			for (int i = 0; i < new_size; i++){
			printf("arr[%d] = %d | %p \n", i, arr[i], (void*)&arr[i]);
			}
		}
	} else {
		printf("n/a");
	}
	return 0;
}	