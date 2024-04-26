#include<stdio.h>
 main(){
	int f,l,i,arr[i];
	printf("Enter first year:-");
	scanf("%d",&f);//2020
	
	printf("EnterLast year:-");
	scanf("%d",&l);//2040
	
	for(arr[i]=f; arr[i]<=l; arr[i]++){
		if(arr[i] % 4== 0){
			printf("%d,",arr[i]);
		}
	}
}
