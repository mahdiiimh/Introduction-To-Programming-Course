#include <stdio.h> 

int main(){
    // Declare variables for the two input numbers, their copies, and the remainder.
    int number_1, number_2,copyNumber_1,copyNumber_2,r;

    // Declare variables to store the greatest common divisor and least common multiple.
    int gcd, lcm ;

    // Read two integers from the user.
    scanf("%d %d",&number_1, &number_2);

    // Save copies of the original numbers for calculating the LCM later.
    copyNumber_1 = number_1;
    copyNumber_2 = number_2 ;

    // Declare a temporary variable used to swap the numbers.
    int temp ;

    // Ensure that number_1 is greater than or equal to number_2.
    if (number_1 < number_2){
        temp = number_1 ; // Store the value of number_1 temporarily.
        number_1 = number_2 ; // Assign the larger number to number_1.
        number_2 = temp ; // Assign the original value of number_1 to number_2.
    }

    // Initialize the remainder to enter the loop.
    r = number_2 ;

    // Apply the Euclidean algorithm to calculate the GCD.
    while (r > 0)
    {
        r = number_1 % number_2 ; // Calculate the remainder of number_1 divided by number_2.
        number_1 = number_2 ; // Replace number_1 with the previous divisor.
        number_2 = r ; // Replace number_2 with the remainder.
    }

    // When the loop ends, number_1 contains the GCD.
    gcd = number_1 ;

    // Calculate the LCM using the product of the original numbers divided by the GCD.
    lcm = (copyNumber_1 * copyNumber_2) / gcd ;

    // Display the GCD and LCM.
    printf("GCD IS : %d\n",gcd);
    printf("LCM IS : %d\n",lcm);

    // Return 0 to indicate successful program execution.
    return 0;
}