#include <stdio.h>
main() {
    int n, first_digit, last_digit, sum;

    printf("Enter any number: ");
    scanf("%d", &n);

    first_digit = n;
    while (first_digit >= 10) {
        first_digit /= 10;
    }

    last_digit = n % 10;

    sum = first_digit + last_digit;

    printf("The sum of the first and the last digit: %d\n",sum);

}
