#include<stdio.h>
main (){
	int a;
	printf("Enter your Age: \n");
	scanf("%d",&a );
	
    if(a <=0){
	printf("please enter valid age");
	}
	else if (a >=18){
	printf("your age eligible for vote");
	}
	
	else{
		printf("your age not eligible for vote");
	}
}
