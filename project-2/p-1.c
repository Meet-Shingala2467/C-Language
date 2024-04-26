#include<stdio.h>

void main()
{
       int ss,guj,pd,ac,com;
       float totalmarks,percentage;
       
	printf("enter marks for ss:-");
	 scanf("%d",&ss);
	printf("enter marks for guj:-");
	 scanf("%d",&guj);
	printf("enter marks for pd:-");
	 scanf("%d",&pd);
	printf("enter marks for ac:-");
	 scanf("%d",&ac);
	printf("enter marks for com:-");
	 scanf("%d",&com);
	    totalmarks=ss+guj+pd+ac+com;
	    percentage=totalmarks/500*100;
	    printf("percentage:%.2f",percentage);

	if (percentage>=90)
	{
		printf("grade A \n");
	}
	else if (percentage>=80)
	{
		printf("grade B \n");
	}
	else if (percentage>=70)
	{
		printf("grade C \n");
	}
	else if (percentage>=60)
	{
		printf("grade D \n");
	}
	else if (percentage>=50)
	{
		printf("grade E");
	}
	else
	{
		printf("grade F");
	}
     
}
