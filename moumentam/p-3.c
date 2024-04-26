#include<stdio.h>
main(){
	
	int guj,eng,ss,com,sci;
	float per,total;
	
	
	printf("enter your marks guj:");
	scanf("%d",&guj);
	
	printf("enter your marks eng:");
	scanf("%d",&eng);
	
	printf("enter your marks ss:");
	scanf("%d",&ss);
	
	printf("enter your marks com:");
	scanf("%d",&com);
	
	printf("enter your marks sci:");
	scanf("%d",&sci);
	
	total=guj+eng+ss+com+sci;
	per=total/500*100;
	printf("per:-%.2f",per);
	
	if(per>=90){
			printf("grade A");
	}
	else if(per>=80){
			printf("grade B");
	}
	else if(per>=70){
			printf("grade C");
	}
	else if(per>=60){
			printf("grade D");
	}
	else if(per>=50){
			printf("grade E");
	}
	else{
		printf("grade F");
	}
	
	
	
	
}
