#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num%2==0 && num%3==0)
    {
        printf("Number is divisible by 2 and 3\n");
    }
    else{
        printf("Number is not divisible by 2 and 3\n");
    }





    return 0;
}