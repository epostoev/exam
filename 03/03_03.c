#include <stdio.h>
#include <string.h>

// int main(){
//     int number = 0;
//     int number_3 = 0, number_2 = 0, number_1 = 0;
//     int flag_sign = 1;
//     scanf("%d", &number); //953
//     if (number < 0) flag_sign = -1;
//     number_3 = number % 10; // 3
//     number_2 = (number / 10) % 10; // 95(3)
//     number_1 = number / 100; // 9(53)
//     printf("%d",number_1 );
//     printf("\n");
//     printf("%.3d", number_3 * 100 + number_2 * 10 + number_1 );
//     printf("\n");
    
    
// }


int main() {
    char number_c[100];
    scanf("%s", number_c);
    int len_number_i = 0;
    len_number_i = strlen(number_c);
    if (number_c[0] == '-') {
        printf("%c%c%c%c", number_c[0],number_c[3],number_c[2],number_c[1]);
    }
    else printf("%c%c%c", number_c[2],number_c[1],number_c[0]);
    printf("\n");

}