//Write a Program to find the sum of diagonal elements from a given 2D array.
#include<stdio.h>
main(){
	int i , j , r , c;
	printf("Enter the size of Rows:- ");
	scanf("%d",&r);
	printf("Enter the Size of Columns:- ");
	scanf("%d",&c);
	int arr[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("arr[%d][%d]:- ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	int sum = 0;
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i+j==j){
				printf("%d ",arr[i][j]);
				sum = sum + arr[i][j];
			}else {
				printf(" ");
			}
		}
		printf("\n");
	}
	
	printf("Sum of Anti diagonal elements : %d",sum);
}
