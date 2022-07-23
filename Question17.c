#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of the triangle\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b)
    {
        printf("The triangle is valid\n");
    }
    else{
        printf("Triangle is not valid\n");
    }




    return 0;
}