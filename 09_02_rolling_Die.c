// Rolling a six-sided die 60,000,000 times.
#include <stdio.h> // Provides standard input and output functions.
#include <stdlib.h> // Provides rand() for generating pseudo-random numbers.
#include <time.h> // Provides clock() and CLOCKS_PER_SEC for measuring CPU time.

int main(void) {
    // Declare variables to record the start and end CPU clock values.
    clock_t start , end ;

    // Store the measured CPU execution time in seconds.
    double cpu_time_used ;

    // Initialize counters for the number of times each die face appears.
    int frequency1 =0 ;
    int frequency2 =0 ;
    int frequency3 =0 ;
    int frequency4 =0 ;
    int frequency5 =0 ;
    int frequency6 =0 ;

    // Record the CPU clock value before starting the simulation.
    start = clock();

    // Simulate rolling a six-sided die 60,000,000 times.
    for(int roll = 1; roll <= 60000000 ; roll++){

        // Generate a pseudo-random integer between 1 and 6.
        int face = 1 + rand() % 6 ;

        // Determine which face appeared and increment its counter.
        switch (face)
        {
        case 1:
            frequency1++; // Increment the counter for face 1.
            break;
        case 2:
            frequency2++; // Increment the counter for face 2.
            break;
        case 3:
            frequency3++; // Increment the counter for face 3.
            break;
        case 4: 
            frequency4++; // Increment the counter for face 4.
            break;
        case 5:
            frequency5++; // Increment the counter for face 5.
            break;
        case 6:
            frequency6++; // Increment the counter for face 6.
            break;
        }
    }

    // Record the CPU clock value after completing the simulation.
    end = clock();

    // Convert the difference between clock values into seconds.
    cpu_time_used = (double)(end - start)/CLOCKS_PER_SEC ;

    // Print the table headers using formatted output.
    printf("%s%13s\n","Face","Frequency");

    // Display the frequency of occurrence for each die face.
    printf("   1%13d\n", frequency1);
    printf("   2%13d\n", frequency2);
    printf("   3%13d\n", frequency3);
    printf("   4%13d\n", frequency4);
    printf("   5%13d\n", frequency5);
    printf("   6%13d\n", frequency6);

    // Display the measured CPU execution time in seconds with three decimal places.
    printf("Execution time : %.3f Seconds.",cpu_time_used);
}