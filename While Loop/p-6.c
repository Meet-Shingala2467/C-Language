#include<stdio.h>
main(){
	
	int n,f=20,ans;
	
	printf("enter starting no:");
	scanf("%d",&n);
	
	while(n<=f){
		if(n%2==0){
			printf("%d ",n);
			ans = ans + n;
			
		}
		n++;
	}
		printf("\n\n sum of enen no %d",ans);
	
	
}
