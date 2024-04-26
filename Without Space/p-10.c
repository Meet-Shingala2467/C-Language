#include <stdio.h>

main() {
    int i,j, n = 1;
    char k = 'A';

    for (i = 0; i < 5; i++) 
	{
        for (j = 0; j < 5; j++)
		 {
            if (j % 2 == 0) 
			{
                printf("%d ", n++);
            } else {
                printf("%c ", k++);
            }
        }
        printf("\n");
    }

}
