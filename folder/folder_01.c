#include <stdio.h>

int main(){
    int ch = 0;
    int char_count = 0;
    FILE *file = fopen("text.txt", "r");
    if (file == NULL){
        printf("\nФайл не открылдся\n");
        return 0;
    }
    else{
        for(;(ch = fgetc(file)) != EOF;){
            // putchar(ch);
            printf("%c", ch);
            if ((ch == '.') || (ch == '?') || (ch == '!')){
                char_count++;
            }
        }
    }
    printf("\nПрочитано %d\n", char_count);
    fclose(file);
    return 0;
}