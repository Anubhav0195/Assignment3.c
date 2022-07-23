#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your character\n");
    scanf("%c",&ch);
    if(ch<=122 && ch>=97)
    {
        printf("It is a lower case\n");
     
    }
    else
    {
        printf("It is a upper case\n");
    }




    return 0;
}