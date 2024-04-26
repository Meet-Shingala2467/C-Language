#include<stdio.h>
main(){
	int i,j,s;
	
	for(i=1;i<=5;i++){
		for(s=1;s<=i;s++){
			printf(" ");
		}
		for(j=1;j<=5 - i + 1; j++){
			printf("%d",(j % 2 == 0) ? 0 : 1);
		}
		printf("\n");
	}
}
