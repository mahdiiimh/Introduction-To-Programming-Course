#include <stdio.h>

int main(){

    // Declare variables to store the three input numbers
    float num1, num2, num3;

    // Variable to store the calculated average
    float average;

    // Ask the user to enter three numbers
    printf("Please enter 3 numbers: ");

    // Read three floating-point numbers from the user
    scanf("%f %f %f", &num1, &num2, &num3);

    // Calculate the average of the three numbers
    average = (num1 + num2 + num3) / 3;

    // Display the average with two digits after the decimal point
    printf("Your average is: %.2f\n", average);

    // Indicate that the program finished successfully
    return 0;
}