#include <stdio.h>

int main(void) {
    int num;
    int result = 0;
    int count = 0;  // Для проверки, что ввели хотя бы одно число
    
    while (scanf("%d", &num) == 1 && num != -1) {
        result ^= num;
        count++;
    }
    
    if (count == 0) {
        printf("n/a\n");
    } else {
        printf("%d\n", result);
    }
    
    return 0;
}

// #include <stdio.h>

// int main(void)