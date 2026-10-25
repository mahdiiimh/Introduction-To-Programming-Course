#include <stdio.h> 

int main(){
    // Initialize counters for each letter grade.
    int aCount = 0 ;
    int bCount = 0;
    int cCount = 0 ;
    int dCount = 0 ;
    int fCount = 0 ;

    // Display instructions for entering letter grades.
    puts("please enter letter grades. ");
    puts("enter EOF character to end input. ");

    // Initialize the variable that will store each input character.
    int grade = 0 ;

    // Read characters one at a time until the EOF character is encountered.
    while ((grade = getchar())!= EOF)
    {
        // Check the input character and update the corresponding counter.
        switch (grade)
        {
        case 'A':
        case 'a':
            // Increment the counter for grade A (uppercase or lowercase).
            aCount++;
            break;

        case 'B':
        case 'b':
            // Increment the counter for grade B (uppercase or lowercase).
            bCount++;
            break;

        case 'C':
        case 'c':
            // Increment the counter for grade C (uppercase or lowercase).
            cCount++;
            break;

        case 'D':
        case 'd':
            // Increment the counter for grade D (uppercase or lowercase).
            dCount++;
            break;

        case 'F':
        case 'f':
            // Increment the counter for grade F (uppercase or lowercase).
            fCount++;
            break;

        case '\n':
        case '\t':
        case ' ':
            // Ignore newline characters, tabs, and spaces.
            break;

        default:
            // Display an error message for any unrecognized character.
            printf("%s","Incorrect Letter grade entered. ");
            puts("enter new grade.");
            break;
        } // End of switch statement.

    } // End of while loop.

    // Display the total number of occurrences of each letter grade.
    printf("A: %d\n",aCount);
    printf("B: %d\n",bCount);
    printf("C: %d\n",cCount);
    printf("D: %d\n",dCount);
    printf("f: %d\n",fCount);

    // Return 0 to indicate successful program execution.
    return 0;
}