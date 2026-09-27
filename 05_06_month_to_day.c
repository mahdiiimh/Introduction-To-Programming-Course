#include <stdio.h>

int main(){

    int month, day, dayOfTheYear;

    // Get the birth month and day from the user
    printf("Please enter your month and day of birth: ");
    scanf("%d %d", &month, &day);

    // For the first six months, each month has 31 days
    if(month <= 6){
        dayOfTheYear = ((month - 1) * 31) + day;

    // For months 7 to 12:
    // The first six months have 6 * 31 days
    // Each month after the sixth has 30 days
    } else {
        dayOfTheYear = (6 * 31) + ((month - 7) * 30) + day;
    }

    // Display the day number of the birthday within the year
    printf("Your birthday is on day number: %d", dayOfTheYear);

    return 0;
}