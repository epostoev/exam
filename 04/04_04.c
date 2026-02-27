#include <stdio.h>
#include <stdlib.h>

// Вывести наибольшее число из вводимой цифры)

int main(void) {
    int number_i = 0;
    int unit_of_number = 0;
    int max = 0;
    int chk_number_i = scanf("%d", &number_i);
    char last_symbol_c = getchar();

    if (chk_number_i != 1 && last_symbol_c != '\n') {
        printf("n/a");
        return 0;
    }
    else {
        number_i = abs(number_i);
        for(;number_i > 0;) {
            unit_of_number = number_i % 10;
            if (max < unit_of_number ) {
            max = unit_of_number;
            }
            number_i = number_i / 10;
        }    
    }
    printf("%d\n", max);
}