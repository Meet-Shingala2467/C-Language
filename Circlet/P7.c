#include<stdio.h>


main()
{
int i,j,s,l,m;

	for(i=5;i>=1;i--)
	{
  		for(s=1;s<=i;s++)
   		{
     		printf("%d",s);
   		}
  		for(j=5;j>i;j--)
   		{
     		printf(" ");
   		}
  		for(l=5;l>i;l--)
   		{
     		printf(" ");
   		}
  		for(m=i;m>=1;m--)
   		{
     		printf("%d",m);
  		}
  			printf("\n");
}

}

