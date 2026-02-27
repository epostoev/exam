# include <stdio.h>

int main(){
    int number_i = 0;
    int max_of_number_i = 0;
    // int cnt_number_i = scanf("%d", &number_i); 
    // char last_number_c = getchar();
    for(;number_i != -1;){
        scanf("%d", &number_i);
        if (max_of_number_i < number_i) max_of_number_i = number_i;
    }
    printf("%d", max_of_number_i);
    printf("\n");
    return 0;
}