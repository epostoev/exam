#include <stdio.h>

int main() {
    char path[256];
    if (scanf("%s", path) != 1){
        printf("n/a");
        return 0;
    }
    FILE *file = fopen(path, "rw");
    if (file == NULL) {
        printf("n/a");
        return 0;
    }
    int ch = 0;
    for(;(ch = fgetc(file)) != EOF;){
        
    }
}