#include<stdio.h>
main (){
	int angle1,angle2,angle3;
	
	printf("Enter your angle1 value:");
	scanf("%d",&angle1);
	
	printf("Enter your angle2 value:");
	scanf("%d",&angle2);
	

	angle3=180-(angle1+angle2);
	printf("angle3 is %d",angle3);
	
}
