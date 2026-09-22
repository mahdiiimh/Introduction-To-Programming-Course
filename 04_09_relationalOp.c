#include <stdio.h>

int main(){

    // Variable to store an integer number
    int x;

    // Read an integer number from the user
    scanf("%d", &x);

    // Check whether the number is positive
    // The comparison returns 1 (true) or 0 (false)
    printf("is positive : %d\n", x > 0);

    // Check whether the number is negative
    printf("is negative : %d\n", x < 0);

    // Check whether the number is zero
    printf("is zero : %d\n", x == 0);

    // Check whether the number is even
    // A number is even if its remainder when divided by 2 is zero
    printf("is even : %d\n", (x % 2) == 0);

    // Check whether the number is odd
    // A number is odd if its remainder when divided by 2 is not zero
    printf("is odd : %d\n", (x % 2) != 0);

    // Indicate that the program finished successfully
    return 0;
}