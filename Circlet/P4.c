#include<stdio.h>
main()
{
  int i , j , s;

  for(i=5;i>=1;i--)
  {
    for(s=i;s<=4;s++){
        printf(" ");
    }
    for(j=i;j>=1;j--)
    {
        (j%2==0)?printf("0"):printf("1");
    }
    printf("\n");
  }
}
