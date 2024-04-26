#include<stdio.h>
main(){
	int i , j;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=5 - i + 1; j++){
			printf("%d",(j % 2 == 0) ? 0 : 1);
		}
		printf("\n");
	}
}
