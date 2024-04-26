#include<stdio.h>
main(){
	int sal,hra,da,ta,ans;
	
	printf("enter your:");
	scanf("%d",&sal);
	 
	 hra=sal*10/100;
	 da=sal*8/100;
	  ta=sal*5/100;
	  
	  ans=sal+hra+da+ta;
	  printf("ans:%d",ans);
	 
	
	
}
