#include <stdio.h>
#include <time.h>

int main() {
    int rows = 3, cols = 3;
    int matrix1[3][3], matrix2[3][3], result[3][3] = {0};

    printf("Enter the first matrix elements: \n");
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the second matrix elements: \n");
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    clock_t start, end;
    double cpu_time_used;

    start = clock();
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            result[i][j] = 0; 
            for(int k = 0; k < cols; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken to multiply the matrices: %f seconds\n", cpu_time_used);

    printf("Multiplication of the matrices: \n");
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
