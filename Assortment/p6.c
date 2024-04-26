/*Write a Program to perform the addition operation of two 2D arrays & store it in another array. Keep in mind that 
both array sizes must be the same.*/
#include <stdio.h>
main() {
    int r, c , i , j,a;

    printf("Enter the array's raw size: ");
    scanf("%d", &r);
    printf("Enter the array's column size: ");
    scanf("%d", &c);

    int arr[r][c], arr1[r][c], arr2[r][c];

    printf("\nEnter array A's elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nEnter array B's elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\nArray C is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            arr2[i][j] = arr[i][j] + arr1[i][j];
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }

}

