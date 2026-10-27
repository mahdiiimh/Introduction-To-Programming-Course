#include <stdio.h>

// Function prototype: calculates the power of a base raised to an exponent.
int power(int base, int exponent);

int main(){

    int base, exponent ;

    // Prompt the user to enter the base and exponent.
    printf("please enter base and exponent: ");

    // Read the base and exponent from the user.
    scanf("%d %d",&base, &exponent);

    // Calculate and display the power using the user-provided values.
    printf("Result = %d \n",power(base,exponent));

    // Calculate and display 2 raised to the power of 3.
    printf("Result = %d \n",power(2,3));

}

// Recursive function to calculate base raised to the exponent.
int power(int base, int exponent){

    // Base case: any nonzero number raised to the power of 0 is 1.
    if(exponent == 0){
        return 1;
    }

    // Recursive case: multiply the base by the result of power(base, exponent - 1).
    return base * power(base,exponent - 1);
}