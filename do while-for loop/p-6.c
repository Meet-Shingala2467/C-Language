#include<stdio.h>
main(){
	
	int n,f=20,ans;
	
	printf("enter starting no:");
	scanf("%d",&n);
	
	do{
		if(n%2==0){
			printf("%d ",n);
			ans = ans + n;
			
		}
		n++;
	}while(n<=f);
		printf("\n\n sum of enen no %d",ans);
	
	
}
