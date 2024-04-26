#include<stdio.h>
main (){
	int choice ;
	
	printf("enter your choice:");
	scanf("%d",&choice);
	
	
	
	
	  switch(choice)
	 {
	 			 
		case 1:
	 		printf(" sunday");
	 		break;
	 	
	 	case 2:
	 		printf("monday");
	 		break;
	    
	    case 3:
	 		printf(" trusday");
	 		break;
			 
		case 4:
	 		printf("wednesday");
	 		break;
			 
	 	case 5:
	 		printf(" thursday");
	 		break;
			 
		case 6:
	 		printf(" friday");
	 		break;
			 
		case 7:
	 		printf(" saturday");
	 		break;
	
			 
			 default:
			 	printf(" please enter your valid no");	    
	 }
}



