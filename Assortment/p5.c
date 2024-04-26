// Write a Program to find the average of a given 2D array.
#include <stdio.h>
main() {
    int r, c , i , j;
    
    printf("Enter the array's row size: ");
    scanf("%d", &r);
    
    printf("Enter the array's column size: ");
    scanf("%d", &c);
    
    int array[r][c];
    
    printf("\nEnter array's elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    
    int sum = 0;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum += array[i][j];
        }
    }
    
    float average = (float)sum / (r * c);
    
    printf("\nAverage of an Array: %.2f\n", average);

}

