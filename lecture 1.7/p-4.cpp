#include<stdio.h>
main (){
	int choice ;
	
	printf("enter your choice");
	scanf("%d",&choice);
	
	
	
	
	 switch(choice)
	 {
	 	case 1:
	 		printf("monday");
	 		break;
	    
	    case 2:
	 		printf(" trusday");
	 		break;
			 
		case 3:
	 		printf("wednesday");
	 		break;
			 
	 	case 4:
	 		printf(" thursday");
	 		break;
			 
		case 5:
	 		printf(" friday");
	 		break;
			 
		case 6:
	 		printf(" saturday");
	 		break;
			 
		case 7:
	 		printf(" sunday");
	 		break;
			 
			 default:
			 	printf(" please valid day");	    
	 }
}



