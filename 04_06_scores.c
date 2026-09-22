#include <stdio.h>

int main(){

    // Variables to store the midterm, final, and project scores
    float midTerm, final, project;

    // Variable to store the final weighted score
    float final_score;

    // Ask the user to enter the three scores
    printf("please enter your scores (midterm, final, project): ");

    // Read the midterm, final, and project scores
    scanf("%f %f %f", &midTerm, &final, &project);

    // Calculate the final score using the weighted average
    // Midterm: 30%, Final: 50%, Project: 20%
    final_score = (midTerm * 0.3) + (final * 0.5) + (project * 0.2);

    // Display the final score with two digits after the decimal point
    printf("your final score is : %.2f", final_score);

    // Indicate that the program finished successfully
    return 0;
}