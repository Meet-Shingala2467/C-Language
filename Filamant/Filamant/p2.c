#include <stdio.h>
int main() {
	
    int i, freq[256] = {0};
    char a[50];
    
    printf("Enter any string : ");
    gets(a);
    
    for (i = 0; a[i] != '\0'; i++) {
        if (isprint(a[i])) {
            freq[(int)a[i]]++;
        }
    }
    
    printf("\nFrequency of each letter :");
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0 && isprint(i)) {
            printf("\n%c: %d", (char)i, freq[i]);
        }
    }
}
