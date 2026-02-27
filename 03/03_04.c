#include <stdio.h>

int main(void){
    int a = 0, b = 0, c = 0;
    int cnt_abc_i = 0;
    char last_number = 0;
    int result = 0;
    cnt_abc_i = scanf("%d %d %d", &a, &b, &c);
    last_number = getchar();
    printf("cnt_abc_i = %d\n", cnt_abc_i);
    printf("last_number ASCII = %d (символ '%c')\n", last_number, last_number);
    if (cnt_abc_i != 3 || last_number != '\n') {
        printf("n/a");
        return 0;
    }
    else {
        if ((c > a && c < b) || ((c < a && c > b))) result = 1;
        else result = 0;
        printf("%d", result);
        return 0;
    }
}


// #include <stdio.h>

// int main(void) {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);
    
//     int ch;  // ✅ Важно: int, а не char!
    
//     // ✅ Проверяем и '\n' и EOF
//     while ((ch = getchar()) != '\n' && ch != EOF) {
//         printf("Символ: %c\n", ch);
//     }
    
//     if (ch == EOF) {
//         printf("Обнаружен конец ввода (EOF)\n");
//     } else {
//         printf("Обнаружен перенос строки\n");
//     }
    
//     return 0;
// }


// #include <stdio.h>

// void clear_buffer() {
//     int ch;
//     while ((ch = getchar()) != '\n' && ch != EOF) {
//         // Просто читаем и выбрасываем
//     }
// }

// int main(void) {
//     int a, b, c;
    
//     printf("Введите три числа: ");
//     if (scanf("%d %d %d", &a, &b, &c) != 3) {
//         printf("n/a\n");
//         clear_buffer();  // Очищаем буфер перед выходом
//         return 0;
//     }
    
//     clear_buffer();  // Очищаем всё, что осталось в буфере
    
//     printf("Числа: %d %d %d\n", a, b, c);
    
//     return 0;
// }