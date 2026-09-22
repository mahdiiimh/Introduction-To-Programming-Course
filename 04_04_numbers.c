#include <stdio.h>

int main(){
    int number ;
    int yekan, dahgan, sadgan;
    printf("please enter a number : ");
    scanf("%d",&number);

    yekan = number % 10 ;
    number /= 10 ;
    dahgan = number % 10 ;
    number /= 10 ;
    sadgan = number % 10 ;
    printf("sadgan: %d , dahgan: %d, yekan: %d ", sadgan , dahgan, yekan);

    return 0;
}