#include <stdio.h>
// input/output drafts
// video Title: Ch03_02_Input_And_Output
int main(){
    printf("%g\n",123.545670);
    printf("%4d\n",-1);
    printf("%4d\n",-12);
    printf("%4d\n",-123);
    printf("%4d\n",1234);
    printf("%4d\n",12345);
    printf("%4d\n",12346);
    
    double f = 123.945369;
    printf("%f\n",f);
    printf("%.3f\n",f);
    printf("%e\n",f);
    printf("%.3e\n",f);
    printf("%.4e\n",f);
    printf("%g\n",f);
    printf("%.4g\n",f);



    int a;
    printf("please enter a number: ");
    scanf("%i",&a);
    printf("a is: %d",a);
    

    int c;
    puts("enter a char");
    c = getchar(); // ===> scanf("%c",&c);
    putchar(c); // ==> printf("%c",c);

    

     char str[100];
     puts("enter a string");
     gets(str); //==> scanf("%s",str)
     puts(str);
}