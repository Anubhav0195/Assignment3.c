#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter your three number\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c){
        printf("%d is the gretesr number\n",a);
    }
    else if(b>c)
    {
        printf("%d is the gretesr number\n",b);
    }
    
    else{
        printf("%d is the grestest number\n",c);
    }
    return 0;






}