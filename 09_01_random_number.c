#include <stdio.h> // Provides standard input and output functions.
#include <stdlib.h> // Provides rand() and srand() for generating pseudo-random numbers.
#include <time.h> // Provides time() to obtain the current time.

int main(){
    // Display the maximum value that rand() can return,
    // generate a pseudo-random number, and map it to the range 1 to 6.
    /*     printf("%d\n",RAND_MAX);
    int value = rand();
    printf("%d",1+ (value % 6)); */

    // Prompt the user to enter a seed for the random number generator.
    printf("please enter seed.\n");

    // Declare a variable for the seed and read its value from the user.
    /*  int seed = 0 ;
    scanf("%d",&seed); */

    // Initialize the pseudo-random number generator using the current time as the seed.
    // This usually produces a different sequence each time the program is run.
    srand(time(NULL));

    // Generate and display 10 pseudo-random numbers representing six-sided die rolls.
    for (int i=1;i <= 10; i++){
        // Generate a number in the range 1 to 6 and print it.
        printf("%d  ",1 +(rand()% 6));

        // General formula for mapping a random number to a range:
        // a + rand() % b
        // a is the shifting value (the starting value of the range).
        // b is the scaling factor (the number of possible values in the range).
        // For example, 1 + rand() % 6 generates values from 1 to 6.
    }

    // Return 0 to indicate successful program execution.
    return 0;
}