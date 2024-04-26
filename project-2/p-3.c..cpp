#include<stdio.h>
main ()
{
	int number;
	printf("Enter your number: \n");
	scanf("%d",&number );
	
	if(number ==0){
		printf("your value is  zero")
	}
	else if(number >=0){
	 printf("your value is  positive");
	}
	
	else{
	
		printf("your value is negative");
	}
}
