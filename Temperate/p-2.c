#include<stdio.h>
main(){
	
	int a,no;
	
	printf("enter your no:");
	scanf("%d",&no);
	
	while(no != 0){
		no= no/10;
		a++;
	}
	printf("no of digit: %d",a);
	
	
}
