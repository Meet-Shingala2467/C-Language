#include<stdio.h>
main(){
	char k='A';
	int i , j , p=2;
	 
	for(i=0;i<5;i++){
		for(j=0;j<=i;j++){
			if(i%2==0){
				if(j%2==0){
					printf("%c ",k++);
				}
				else{
					printf("%d ",p++);
				}
			}
			else{
				if(j%2==0){
					printf("%d ",p++);
				}
				else{
					printf("%c ",k++);
				}
			}
		}
		printf("\n");
	}
}
