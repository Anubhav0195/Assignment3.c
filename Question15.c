#include<stdio.h>
int main()
{
    int num;
    printf("Enter number\n");
    scanf("%d", &num);
    if(num>0)
    {
        printf("%d is positive\n",num);
    }
    else if(num<0)
    {
        printf("%d is negative\n",num);
    }
    else{
        num ==0;
        printf("zero\n");
    }





    return 0;
}