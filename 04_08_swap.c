#include <stdio.h>

int main(){

    // Variables to store two integer numbers
    int x, y;

    // Ask the user to enter two numbers
    puts("please enter 2 numbers");

    // Read the two numbers
    scanf("%d %d", &x, &y);

    // Add x and y and store the result in x
    x = x + y;

    // Subtract the original value of y from x
    // The result is the original value of x
    y = x - y;

    // Subtract the new value of y from x
    // The result is the original value of y
    x = x - y;

    // Display the swapped values
    printf("x: %d y: %d\n", x, y);

    // Indicate that the program finished successfully
    return 0;
}