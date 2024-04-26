#include<stdio.h>
main(){
	
	
	int choice, sub;
	
	printf("enter 1 for burger \n");
	printf("enter 2 for pizz \n");
	printf("enter 3 for coldrink \n");
	printf("enter 4 for dokla \n");

	scanf("%d",&choice);
	
	switch(choice){
		
		case 1:
			printf("burger");
			
			printf("enter 1 for cheesh \n");
			printf("enter 2 for butter \n");
			printf("enter 3 for paneer \n");

			scanf("%d",&sub);
			switch(sub){
				case 1:
					printf("cheesh");
					break;
				case 2:
					printf("butter");
					break;
				case 3:
					printf("paneer");
					break;
			}
		break;
		
		case 2:
			printf("pizza");
			
			printf("enter 1 for cheesh \n");
			printf("enter 2 for butter \n");
			printf("enter 3 for paneer \n");

			scanf("%d",&sub);
			switch(sub){
				case 1:
					printf("cheesh");
					break;
				case 2:
					printf("butter");
					break;
				case 3:
					printf("paneer");
					break;
			}
		break;
		
	
		case 3:
			printf("coldrink");
			 
			printf("enter 1 for fenta \n");
			printf("enter 2 for lemon  \n");
			printf("enter 3 for pepsi \n");

			scanf("%d",&sub);
			switch(sub){
				case 1:
					printf("fenta");
					break;
				case 2:
					printf("lemon");
					break;
				case 3:
					printf("pepsi");
					break;
			}
		break;
		
	
		case 4:
			printf("dokla");
			
			printf("enter 1 for cheesh \n");
			printf("enter 2 for butter \n");
			printf("enter 3 for pintbutter \n");

			scanf("%d",&sub);
			switch(sub){
				case 1:
					printf("cheesh");
					break;
				case 2:
					printf("butter");
					break;
				case 3:
					printf("pintbutter");
					break;
			}
		break;
		
	
		default{
			printf("pleash enter menu no:-");
			break;
		}
	
	
	
	
	
}

}
