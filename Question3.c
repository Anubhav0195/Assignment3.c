#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    if(num%2==0)
    {
        printf("Even\n",num);
    }
    else{
        printf("odd\n",num);
    }




    return 0;
}