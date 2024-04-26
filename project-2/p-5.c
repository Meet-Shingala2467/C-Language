#include<stdio.h>
main(){
	
	
	int age;
	
	printf("enter your age:");
	scanf("%d",&age);
	
    if (age <= 12){
        printf("You are a child.");
  	}
    else if (age <=19){
    	 printf("You are a teenager.");
	}
       
    else if (age <=64){
    	 printf("You are an adult.");
	}
       
    else{
    	 printf("You are a senior.");
	}	
	
}
