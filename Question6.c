#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);
    if(a>b)
    {
        printf("%d is the gretest number\n",a);
    }else if(b>a)
    {
        printf("%d is the gretest number\n",b);
    }
    else
    {
        printf("both are equal but one is %d\n",a,b);
    }





    return 0;
}