#include <stdio.h>

int main(){

    // Variable to store the total number of seconds entered by the user
    int totalSeconds;

    // Variables to store the converted hours, minutes, and seconds
    int hours, minutes, seconds;

    // Ask the user to enter the total number of seconds
    printf("please enter total seconds: ");

    // Read the total number of seconds
    scanf("%d", &totalSeconds);

    // Calculate the number of complete hours
    hours = totalSeconds / 3600;

    // Keep only the remaining seconds after extracting the hours
    totalSeconds = totalSeconds % 3600;
    // totalSeconds %= 3600;

    // Calculate the number of complete minutes from the remaining seconds
    minutes = totalSeconds / 60;

    // Calculate the remaining seconds after extracting the minutes
    seconds = totalSeconds % 60;

    // Display the converted time
    printf("%d Hours and %d minutes and %d seconds", hours, minutes, seconds);

    // Indicate that the program finished successfully
    return 0;
}