#include <stdio.h>

int main(){

    /*
        Convert Celsius to Fahrenheit

        float celsius;
        float fahrenheit;

        // Ask the user to enter the temperature in Celsius
        printf("please enter celsius: ");

        // Read the Celsius temperature
        scanf("%f", &celsius);

        // Convert Celsius to Fahrenheit
        fahrenheit = (celsius * 9.5) + 32;

        // Display the converted temperature
        printf("%.2f celsius is equal to %.2f fahrenheit.",
               celsius, fahrenheit);
    */

    // Variable to store the temperature in Celsius
    float c;

    // Variable to store the temperature in Fahrenheit
    float f;

    // Ask the user to enter the temperature in Fahrenheit
    printf("please enter fahrenheit: ");

    // Read the Fahrenheit temperature
    scanf("%f", &f);

    // Convert Fahrenheit to Celsius
    c = (f - 32) / 1.8;

    // Display the temperature in Celsius
    printf("%.2f c", c);

    // Indicate that the program finished successfully
    return 0;
}