#include<stdio.h>
main (){
	int a, b, choice ;
	
    printf("enter your number of a :");
	scanf("%d",&a);
	
	printf("enter your number of b :");
	scanf("%d",&b);
	
	printf("enter your choice :");
	scanf("%d",&choice);
	
	
	
	
	 switch(choice)
	 {
	 	case 1:
	 		printf("%d + %d = %d",a,b,a+b);
	 		break;
	    
	    case 2:
	 		printf("%d - %d = %d",a,b,a-b);
	 		break;
			 
		case 3:
	 		printf("%d * %d = %d ",a,b,a*b);
	 		break;
			 
	 	case 4:
	 		printf(" %d / %d = %d",a,b,a/b);
	 		break;
			 
	
			 
			 default:
			 	printf(" please valid day");	    
	 }
}



