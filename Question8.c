#include<stdio.h>
int main()
{
    int year;
    printf("Enter year\n");
    scanf("%d",&year);
    if(year % 400==0)
    {
        printf("%d is a leap year\n");
    }
    else if(year % 100==0){
        printf("%d is not a leap year\n");
    }
    else if(year % 4 == 0){
        printf("%d is a leap year\n");
    }
    else{
        printf("%d is not a leap year\n");
    }
    return 0;
}