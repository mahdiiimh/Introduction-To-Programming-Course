#include <stdio.h>

int main(){
/*     printf("A\n");

    goto test ;

    printf("B\n");

    test:
        printf("C\n");
    
    printf("D\n");
 */
/*     int i = 1, sum = 0;
    while(i<=10){
        sum += i ;
        printf("sum is : %d \n",sum);
        i++ ;
    } */
    //printf("sum is : %d \n",sum);
  /*   int i = 1;
    while(i <= 10){
        printf("hello.\n");
        i++;
    } */
   /*  for (int i = 5; i>=1;i-=2){
        printf("Hi\n");
    } */
   /*  for (;;){
        printf("Hi\n");
    } */
   /*  int i ;
    for (i = 1; i>=1 ; i++){
        printf("%d\n",i);
    } */

    //off by one error

    /* for(int i=1 ; i<=9;i++){
        printf("%d\n",i);
    } */

/*     int i = 5 ;

    do{
        printf("Hi\n");
        i++;
    }while (i <= 3); */

/*     for(int i = 1 ; i <= 10 ; i++){
        if(i == 4){
            break ;
        }
        printf("%d\n",i);
    }
    printf("break activated here is after for"); */
  /*   for(int i = 1 ; i <= 10 ; i++){
        if(i == 4){
            continue; 
        }
        printf("%d\n",i);
    }
    printf("continue activated here is after for and 4 is not printed"); */
/*     for (int i = 0 ; i < 4; i++){
        printf("i = %d: ",i);

        for(int j = 0; j < 5; j++){
            printf("%d",i*5+j);
        }
        printf("\n");
    } */
/* 
    int end = 5;
    int i = 1;
    while (i <=end)
    {
        printf("\n");
        int j = 1;
        while (j<=i)
        {
            printf("*");
            j = j + 1;
        }
        i = i + 1;
        
    } */
/*    int i =1 ;
   do {
    int j =1;
    do {
        printf("%d",j);
        j++;
    }while(j <= 3);
    printf("\n");
    i++;

   }while(i <= 2);
    */ 
   /*  for(int i = 0 ; i < 5; i++){
        for(int j = 0; j< 3; j++){

            if(i == 3){
                break;
            }
            printf("* ");
        }
        printf("\n");
    } */

    //tests

/*     int i,j, count = 0;
    for(i = 1; i<=3;i++){
        for(j=1;j<=3;j++){
            if(i==j){
                count++;
            }
        }
    }
    printf("%d",count);
 */
    int i = 0;
    for(;;){
        if(i==3){
            break;
        }
        printf("%d",i);
        i++;
    }
    return 0;
}