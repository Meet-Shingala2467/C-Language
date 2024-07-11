#include<stdio.h>

main(){
	
	int i, a, b = 1;
	char str[10];
	
	printf("Enter any string :");
	gets(str);
	
	while (str[a] != '\0') {
       a++;
    }
	
	for (i = 0; i < a/2; i++) {
        if (str[i] != str[a - i - 1]) {
        	b = 0;
            break;
        }
    }
    
    if (b) {
        printf("Given string is a Palindrome.\n");
    } 
	else {
        printf("Given string is not a Palindrome.");
    }
}
