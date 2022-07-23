#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    if(num>99)
    {
        printf("A number is a three digit number\n",num);
    }
    else
    {
        printf("A number is not a three digit number\n",num);
    }




    return 0;
}