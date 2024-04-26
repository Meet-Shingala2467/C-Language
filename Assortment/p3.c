// Write a Program to find the transpose matrix of a given 2D array.
#include <stdio.h>
main() {
    int r, c , i , j;

    printf("Enter the array's row size: ");
    scanf("%d", &r);
    printf("Enter the array's column size: ");
    scanf("%d", &c);

    int arr[r][c];

    printf("Enter array's elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Transpose matrix of an array is:- \n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d  ",arr[j][i]);
        }
        printf("\n");
    }
}
