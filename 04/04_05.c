#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int number_i = 0;
    int unit_number_i = 0;
    int mull_unit_number = 0;
    int cnt_number_i = scanf("%d", &number_i);
    char last_number_c = getchar();
    if (cnt_number_i != 1 && last_number_c != '\n'){
        printf("n/a");
        return 0;
    }
    else {
        number_i = abs(number_i);
        for(;number_i > 0;) {
            unit_number_i = number_i % 10;
            if (unit_number_i % 2 != 0) {
                mull_unit_number = (mull_unit_number == 0 ? 1 : mull_unit_number) * unit_number_i;
            }
            number_i = number_i / 10;
        }
        printf("%d", mull_unit_number);
        printf("\n");
    }
}
