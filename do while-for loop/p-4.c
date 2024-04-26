#include<stdio.h>
main(){
	
	int n=1,f;
	

	printf("enter ending value:");
	scanf("%d",&f);
	
	
	do{
		if(f%2==1){
			printf("%d ",f);
		}
		f--;
	
	}while(f>=n);
	
	
	
}
