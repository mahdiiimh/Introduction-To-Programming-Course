#include <stdio.h>

int main(){
    int score;

    // Ask the user to enter their score
    printf("please enter your score: ");
    scanf("%d", &score);

    // Select a case based on the integer division of score by 3
    switch (score / 3)
    {
    case 6:
        // Assign grade A for scores from 18 to 20
        printf("A");
        break;

    case 5:
        // Assign grade B for scores from 15 to 17
        printf("B");
        break;

    case 4:
        // Assign grade C for scores from 12 to 14
        printf("C");
        break;

    case 3:
        // Check whether the score is at least 10
        if(score >= 10){
            // Assign grade D for scores from 10 to 11
            printf("D");
        }else {
            // Assign grade F for scores below 10 in this case
            printf("F");
        }
        break;

    default:
        // Check whether the score is between 0 and 8
        if(score >= 0 && score < 9){
            // Assign grade F for scores from 0 to 8
            printf("F");
        }
        break;
    }

    return 0;
}