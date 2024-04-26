#include<stdio.h>
main(){
	
	int a;
	
	printf("enter value: ");
	scanf("%d",&a);

	int arry[a],i;
	
	for(i=0;i < a;i++){
		printf("arry[%d]",i);
		scanf("%d",&arry[i]);
	}
	int b;
	
	printf("enter value ");
	scanf("%d",&b);
	
	int arry1[b];
	
	for(i=0;i< b;i++){
		printf("arry1[%d]",i);
		scanf("%d",&arry1[i]);
	}
	
	
	for(i=0;i<a;i++){
		printf("%d ",arry[i]);
	}
	for(i=0;i<b;i++){
		printf("%d ",arry1[i]);
	}
	
}
