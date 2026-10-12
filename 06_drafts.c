#include <stdio.h>

int main(){

    // Example 1: Basic switch-case statement
    {
        int var = 1;

        // The value of var determines which case is executed
        switch (var)
        {
        case 1:
            printf("case 1 \n");
            break; // Exit the switch statement

        case 2:
            printf("case 2 \n");
            break;

        case 3:
            printf("case 3 \n");
            break;

        default:
            // Executed when no case matches the value of var
            printf("default is running \n");
            break;
        }
    }

    // Example 2: Multiple cases can share the same code
    {
        int x = 1;

        // The switch expression evaluates to 0 or 1
        switch (x)
        {
        case 0:
        case 1:
            // Both case 0 and case 1 lead to this statement
            printf("case 1\n");
            break;

        case 2:
            // This case has no statements of its own
            // If matched, execution continues into the default case
           
        default:
            printf("SSSSS");
        }
    }

    // Example 3: The default case can appear anywhere
    {
        int x = 5;

        switch (x)
        {
        default:
            // The default case is selected because x matches no other case
            printf("A");
            break; // Prevent execution from continuing into the next case

        case 1:
            printf("B");
            break;

        case 2:
            printf("C");
            break;
        }
    }

    // Example 4: Fall-through occurs when break is omitted
    {
        int x = 5;

        switch (x)
        {
        case 1:
            printf("A");
            break;

        default:
            // Since x is 5, execution starts here
            printf("B");

            // No break: execution continues into case 2

        case 2:
            printf("C");
            break; // Exit the switch statement

        case 3:
            printf("D");

            // No break here either
            // Execution would continue to the end of the switch
        }
    }

    return 0;
}
