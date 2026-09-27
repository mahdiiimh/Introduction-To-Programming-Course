#include <stdio.h>
#include <math.h>

int main(){

    // Quadratic equation: ax^2 + bx + c = 0
    // a, b, and c are the coefficients of the equation
    // and are provided by the user

    float a, b, c;

    // delta is the discriminant of the quadratic equation
    // x1 and x2 are the roots of the equation
    float delta, x1, x2;

    // Get the coefficients from the user
    printf("please enter a, b, c : ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the discriminant:
    // Δ = b^2 - 4ac
    delta = (b * b) - (4 * a * c);

    // If delta is greater than zero,
    // the equation has two distinct real roots
    if(delta > 0){

        // Calculate the first root:
        // x1 = (-b + √Δ) / 2a
        x1 = (-b + sqrt(delta)) / (2 * a);

        // Calculate the second root:
        // x2 = (-b - √Δ) / 2a
        x2 = (-b - sqrt(delta)) / (2 * a);

        // Display both roots with two decimal places
        printf("x1 = %.2f and x2 = %.2f \n", x1, x2);

    // If delta is equal to zero,
    // the equation has one repeated real root
    } else if(delta == 0){

        // Calculate the repeated root:
        // x1 = x2 = -b / 2a
        x1 = (-b) / (2 * a);

        // Display the root
        printf("x1 = x2 = %.2f \n", x1);

    // If delta is less than zero,
    // the equation has no real roots
    } else {
        printf("your equation doesnt has real solution");
    }

    return 0;
}