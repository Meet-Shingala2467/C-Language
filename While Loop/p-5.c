#include<stdio.h>
main(){
	
	int n,f;
	

	printf("enter first value:");
	scanf("%d",&n);
	printf("enter end value:");
	scanf("%d",&f);
	
	
	while(n<=f){
		if(n%4==0){
			printf("%d",n);
				printf("\n");
		}
		n++;
	
	
	}	
}
