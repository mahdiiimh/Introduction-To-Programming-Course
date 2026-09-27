#include <stdio.h>

int main(){

    double a, b, ratio;

    // Get two positive numbers from the user
    printf("Please enter 2 numbers: ");
    scanf("%lf %lf", &a, &b);

    // Both numbers must be positive
    if(a <= 0 || b <= 0){
        printf("Your numbers must be positive.");
        return 0;

    // If a is greater than or equal to b,
    // calculate the ratio as a / b
    } else if(a >= b) {
        ratio = a / b;

    // Otherwise, calculate the ratio as b / a
    } else {
        ratio = b / a;
    }

    // Display the calculated ratio with three decimal places
    printf("Ratio: %.3lf\n", ratio);

    // Check whether the ratio is approximately equal to
    // the golden ratio (approximately 1.618)
    if(ratio >= 1.617 && ratio <= 1.619){
        printf("Your numbers have the golden ratio.");
    } else {
        printf("Your numbers do not have the golden ratio.");
    }

    return 0;
}