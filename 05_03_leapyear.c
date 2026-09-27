#include <stdio.h>

int main(){

    int year;

    // Get the year from the user
    printf("Please enter the year: ");
    scanf("%d", &year);

    // A year is a leap year if it is divisible by 400
    if(year % 400 == 0)
        printf("%d is a leap year.", year);

    // A year divisible by 100 but not by 400 is not a leap year
    else if(year % 100 == 0)
        printf("%d is not a leap year.", year);

    // A year divisible by 4 is a leap year
    else if(year % 4 == 0)
        printf("%d is a leap year.", year);

    // All other years are not leap years
    else
        printf("%d is not a leap year.", year);

    return 0;
}