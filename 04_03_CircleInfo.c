#include <stdio.h>

int main(){

    // Variable to store the radius of the circle
    float radius;

    // Variables to store the area and circumference of the circle
    float masaaht, mohit;

    // Define PI as a constant value
    const float PI = 3.14159;

    // Ask the user to enter the radius
    printf("Please enter radius: ");

    // Read the radius entered by the user
    scanf("%f", &radius);

    // Calculate the area of the circle
    masaaht = PI * radius * radius;

    // Calculate the circumference of the circle
    mohit = 2 * PI * radius;

    // Display the calculated area and circumference
    printf("masahat shoma : %.2f va mohit shoma: %.2f", masaaht, mohit);

    // Indicate that the program finished successfully
    return 0;
}