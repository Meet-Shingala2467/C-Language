#include <stdio.h>

int main() {
    FILE *file;
    int number;

    file = fopen("divisible_numbers.txt", "w");
    if (file == NULL) {
        printf("Unable to create file.\n");
        return 1;
    }

    for (number = 1; number <= 50; number++) {
        if (number % 3 == 0 && number % 5 == 0) {
            fprintf(file, "%d\n", number);
        }
    }

    printf("Numbers written to file successfully.\n");

    fclose(file);

    return 0;
}

