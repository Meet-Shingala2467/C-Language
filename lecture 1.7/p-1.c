#include<stdio.h>
main()
{
	
	int a,b,c,d,e;
	
	printf("enter no of a:");
	scanf("%d",&a);
		printf("enter no of b:");
	scanf("%d",&b);
		printf("enter no of c:");
	scanf("%d",&c);
		printf("enter no of d:");
	scanf("%d",&d);
		printf("enter no of e:");
	scanf("%d",&e);
	
	
	
	(a>b)
	?((a>c) 
			? ((a>d) 
					? ((a>e) ? (printf("a is max")) :(printf("e is max")) ) 
					: ((d>e)) ? (printf("d is max"))  : (printf("e is max"))  ) 
			: ((c>d)) 
					?((c>e) ?(printf("c is max"))  : (printf("e is max")) ) 
					: ((d>e) ? (printf("d is max")) : (printf("e is max"))  ))
	: ((b>c) 
			? ((b>d) 
					? ((b>e) ? (printf("b is max")) : (printf("e is max")) )
					: ((d>e)) ? (printf("d is max")) : (printf("e is max")) )
			: ((c>d)) 
					? ((c>e) ? (printf("c is max"))  : (printf("e is max"))  ) 
					: ((d>e) ? (printf("d is max")) : (printf("e is max")) )  );
	
	
	
	
}
