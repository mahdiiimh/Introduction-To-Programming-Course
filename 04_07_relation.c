#include <stdio.h>

int main(){

    // Variables to store three integer numbers
    int x, y, z;

    // Ask the user to enter three numbers
    puts("please enter 3 numbers");

    // Read the three numbers
    scanf("%d %d %d", &x, &y, &z);

    // Check whether x > y and y > z
    // The result of each comparison is either 0 (false) or 1 (true)
    // The && operator returns 1 only if both conditions are true
    printf("%d", (y < x) && (z < y));

    // Indicate that the program finished successfully
    return 0;
}