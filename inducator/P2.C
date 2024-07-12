#include <stdio.h>

void cubes(int *arr, int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", arr[i * cols + j] * arr[i * cols + j] * arr[i * cols + j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols, i, j;
    printf("Enter array's size: ");
    scanf("%d", &rows);
    cols = rows;

    int *arr = (int *)malloc(rows * cols * sizeof(int));

    printf("Enter array elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i * cols + j]);
        }
    }

    printf("Cubes of all elements:\n");
    cubes(arr, rows, cols);

    free(arr);
    return 0;
}
