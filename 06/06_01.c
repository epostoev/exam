// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     // Создаём матрицу 2×2
//     int **matrix = malloc(sizeof(int *) * 2);
//     matrix[0] = malloc(sizeof(int) * 2);
//     matrix[1] = malloc(sizeof(int) * 2);
    
//     // Заполняем значениями
//     matrix[0][0] = 1;
//     matrix[0][1] = 2;
//     matrix[1][0] = 3;
//     matrix[1][1] = 4;
    
//     // Разные способы доступа:
//     printf("Способ 1 (обычный): matrix[0][0] = %d\n", matrix[0][0]);
    
//     printf("Способ 2 (через указатель): *(*(matrix + 0) + 0) = %d\n", 
//            *(*(matrix + 0) + 0));
    
//     printf("\nАдреса:\n");
//     printf("matrix (адрес массива указателей) = %p\n", (void*)matrix);
//     printf("matrix[0] (адрес строки 0) = %p\n", (void*)matrix[0]);
//     printf("matrix[1] (адрес строки 1) = %p\n", (void*)matrix[1]);
//     printf("&matrix[0][0] (адрес элемента) = %p\n", (void*)&matrix[0][0]);
    
//     // Освобождаем память
//     free(matrix[0]);
//     free(matrix[1]);
//     free(matrix);
    
//     return 0;
// }





// #include <stdlib.h>
// #include <stdio.h>

// void freeMatrix(int **matrix, int size);
// int inputMatrix(int **matrix, int N);
// void printMatrix(int **matrix, int N, const char *name);
// int **createMatrix(int N);
// void multiplyMatrices(int **A, int **B, int **C, int N);

// int main() {
//     int N;
    
//     printf("Введите размер матриц N: ");
//     if (scanf("%d", &N) != 1 || N <= 0 || N > 100) {
//         printf("n/a\n");
//         return 0;
//     }
    
//     // Выделяем память для матриц
//     int **A = createMatrix(N);
//     int **B = createMatrix(N);
//     int **C = createMatrix(N);
    
//     if (A == NULL || B == NULL || C == NULL) {
//         printf("n/a\n");
//         freeMatrix(A, N);
//         freeMatrix(B, N);
//         freeMatrix(C, N);
//         return 0;
//     }
    
//     // Вводим матрицу A
//     printf("\nВведите матрицу A (%d строк по %d чисел):\n", N, N);
//     if (!inputMatrix(A, N)) {
//         printf("n/a\n");
//         freeMatrix(A, N);
//         freeMatrix(B, N);
//         freeMatrix(C, N);
//         return 0;
//     }
    
//     // Вводим матрицу B
//     printf("\nВведите матрицу B (%d строк по %d чисел):\n", N, N);
//     if (!inputMatrix(B, N)) {
//         printf("n/a\n");
//         freeMatrix(A, N);
//         freeMatrix(B, N);
//         freeMatrix(C, N);
//         return 0;
//     }
    
//     // Умножаем матрицы: C = A * B
//     multiplyMatrices(A, B, C, N);
    
//     // Выводим результат
//     printf("\nМатрица A:\n");
//     printMatrix(A, N, "A");
    
//     printf("\nМатрица B:\n");
//     printMatrix(B, N, "B");
    
//     printf("\nРезультат C = A * B:\n");
//     printMatrix(C, N, "C");
    
//     // Освобождаем память
//     freeMatrix(A, N);
//     freeMatrix(B, N);
//     freeMatrix(C, N);
    
//     return 0;
// }

// // Создание матрицы N×N
// int **createMatrix(int N) {
//     int **matrix = malloc(sizeof(int *) * N);  // ✅ sizeof(int *)!
//     if (matrix == NULL) {
//         return NULL;
//     }
    
//     for (int i = 0; i < N; i++) {
//         matrix[i] = malloc(sizeof(int) * N);
//         if (matrix[i] == NULL) {
//             // Освобождаем уже выделенную память
//             freeMatrix(matrix, i);
//             return NULL;
//         }
//     }
    
//     return matrix;
// }

// // Освобождение памяти матрицы
// void freeMatrix(int **matrix, int size) {
//     if (matrix == NULL) {
//         return;
//     }
    
//     for (int i = 0; i < size; i++) {  // ✅ Правильный порядок!
//         if (matrix[i] != NULL) {      // ✅ Проверяем сам указатель
//             free(matrix[i]);          // ✅ Освобождаем память
//         }
//     }
    
//     free(matrix);
// }

// // Ввод матрицы
// int inputMatrix(int **matrix, int N) {
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             if (scanf("%d", &matrix[i][j]) != 1) {
//                 return 0;  // Ошибка ввода
//             }
//         }
//     }
//     return 1;  // Успех
// }

// // Вывод матрицы
// void printMatrix(int **matrix, int N, const char *name) {
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             printf("%4d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// // Умножение матриц: C = A * B
// void multiplyMatrices(int **A, int **B, int **C, int N) {
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             C[i][j] = 0;
//             for (int k = 0; k < N; k++) {
//                 C[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }
// }

#include <stdio.h>
#include <stdlib.h>

int **create_matrix(int size_matrix){
    int **matrix = malloc(sizeof(int *) * size_matrix);
    for(int i = 0; i < size_matrix; i++){
        matrix[i] = malloc(sizeof(int) * size_matrix);
    }
    // printf("\n адресс массива указателей matrix = %p\n", (void*)matrix);
    // printf("\n адресс первой строки  = %p\n", (void*)matrix[0]);
    // printf("\n адресс первой элемента 0 0 = %p\n", (void*)&matrix[0][0]);
    // printf("\n адресс второй строки  = %p\n", (void*)matrix[1]);
    return matrix;
}

int write_array(int **matrix, int size_matrix){
    for(int i = 0; i < size_matrix; i++){
        for(int j = 0; j < size_matrix; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    return 1;
}

int print_array(int **matrix, int size_matrix) {
    for(int i = 0; i < size_matrix; i++){
        for(int j = 0; j < size_matrix; j++){
            printf("%d", matrix[i][j]);
        }
        // if (i < size_matrix - 1) printf("\n");
        printf("\n");
    }
    return 1;
}

int multi_array(int **matrix_A, int **matrix_B, int **matrix_C, int size_matrix){
    for(int i = 0; i < size_matrix; i++){
        for(int j = 0; j < size_matrix; j++){
            for(int k = 0; k < size_matrix; k++){
                matrix_C[i][j] += matrix_A[i][k] * matrix_B[k][j];
                // printf("\n%d", matrix_C[i][j]);
            }
        }
    }
    return 1;
}

int main(void) {
    int size_matrix = 0;
    int cnt_size_matrix = scanf("%d", &size_matrix);
    if (cnt_size_matrix != 1 || size_matrix <= 1 || size_matrix > 100) {
        printf("n/a");
    }
    int **A = create_matrix(size_matrix);
    int **B = create_matrix(size_matrix);
    int **C = create_matrix(size_matrix);

    int res = write_array(A, size_matrix);
    res = write_array(B, size_matrix);

    res = print_array(A, size_matrix);
    printf("\n");
    res = print_array(B, size_matrix);
    printf("\n");
    res = multi_array(A, B, C, size_matrix);
    printf("\n");
    res = print_array(C, size_matrix);

return 0; 
}