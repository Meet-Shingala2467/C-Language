// Write a Program to find all the negative elements from a given 1D array.
#include<stdio.h>
int main(){
	int n , i;
	printf("Enter the size of Array:- ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
			printf("arr[%d]:- ",i);
			scanf("%d",&arr[i]);
	}
	
	printf("The Negative Elements are : ");
	for(i=0;i<n;i++){
		    if(arr[i]<0){
		        printf("%d ",arr[i]);
		    }
	}
}
