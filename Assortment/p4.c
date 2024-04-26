// Write a Program to print and find the sum of all elements of a given row & column from a 2D array.
#include <stdio.h>
main() {
    int r, c , i , j;
    
    printf("Enter the arr's row size: ");
    scanf("%d", &r);
    
    printf("Enter the arr's column size: ");
    scanf("%d", &c);
    
    int arr[r][c];
    
    printf("\nEnter arr's elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

    int row , row_sum = 0;
    printf("\nEnter row number: ");
    scanf("%d", &row);
    printf("Elements of row %d: ", row);
    
    for (j = 0; j < c; j++) {
        printf("%d ", arr[row][j]);
        row_sum += arr[row][j];
    }
    printf("\nThe sum of row %d: %d\n", row, row_sum);

    int col , col_sum = 0;
    printf("\nEnter column number: ");
    scanf("%d", &col);
    printf("Elements of column %d:  ", col);
    
    for (i = 0; i < r; i++) {
        printf("%d ", arr[i][col]);
        col_sum += arr[i][col];
        
    }
    printf("\nThe sum of column %d: %d\n", col, col_sum);

}

