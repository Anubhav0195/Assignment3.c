#include<stdio.h>
int main()
{

    char ch,digit;
    printf("Enter your character\n");
    scanf("%c",&ch);
    if(ch<='Z' && ch>='A')
    {
        printf("It is upper case\n",ch);
    }
    else if(ch<='z'&& ch>='a')
    {
        printf("It is lower case\n",ch);
    }
    else if(ch<=0 && ch<=9){
        printf("%c is a digit\n");
    }
    else
    {
        printf("%c is a special charcater\n",ch);
    }





    return 0;
}