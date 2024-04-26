#include<stdio.h>
main(){
	
	
	int choice,sub;
	
	printf("enter 1 for english \n");
	printf("enter 2 for gujrati \n");
	printf("enter 3 for hindi \n");
	
	printf("enter your choice:-");
	scanf("%d",&choice);
	
	switch(choice){
		
	case 1:	
	printf("english");
	printf("Press 1 for Internet Recharge \n");
	printf("Press 2 for Top-up Recharge \n");
	printf("Press 3 for Special Recharge \n");
	
	printf("enter your sub:-");
	scanf("%d",&sub);
	
	switch(sub){
		
		case 1:
			printf("Internet Recharge \n");
			break;
			
		case 2:
			printf("Top-up Recharge \n" );
			break;
			
		case 3:
			printf("Special Recharge \n");
			break;
		
	}	
		break;
		
	case 2:	
	printf("gujrati");
	printf("Press 1 for Internet Recharge \n");
	printf("Press 2 for Top-up Recharge \n");
	printf("Press 3 for Special Recharge \n");
	
	printf("enter your sub:-");
	scanf("%d",&sub);
	
	switch(sub){
		
		case 1:
			printf("Internet Recharge \n");
			break;
			
		case 2:
			printf("Top-up Recharge \n");
			break;
			
		case 3:
			printf("Special Recharge \n");
			break;
		
	}
		break;
		
		
		case 3:	
	printf("hindi");
	printf("Press 1 for Internet Recharge \n");
	printf("Press 2 for Top-up Recharge \n" );
	printf("Press 3 for Special Recharge \n");
	
	printf("enter your sub:-");
	scanf("%d",&sub);
	
	switch(sub){
		
		case 1:
			printf("Internet Recharge \n");
			break;
			
		case 2:
			printf("Top-up Recharge \n");
			break;
			
		case 3:
			printf("Special Recharge \n");
			break;
		
	}
	
			
		break;
		
		
		
		
	}
	
	
	
	
	
}
