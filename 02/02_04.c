#include <stdio.h>

int main(void){
    char x_c = '0', y_c = '0', z_c = '0';
    int res_int = scanf("%c %c %c", &x_c, &y_c, &z_c);
    char last_char = getchar();
    if (res_int == 3 && last_char == '\n' && (x_c == '1' || x_c == '0') && (y_c == '1' || y_c == '0') && (z_c == '1' || z_c == '0')){
        int x_i = x_c - '0';
        int y_i = y_c - '0';
        int z_i = z_c - '0';
        int res_b = x_i && (y_i || z_i);
        printf("%d", res_b);
    }
    else {
        printf("n/a");
    }
    return 0;
}