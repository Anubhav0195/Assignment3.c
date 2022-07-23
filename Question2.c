#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("Divisibility test return %d\n",num%5);
    return 0;
}