#include<stdio.h>
int main()
{
    float physics,chemistry,maths,english,computer;
    float total;
    printf("Enter physics marks\n");
    scanf("%f",& physics);
    printf("Enter chemistry marks\n");
    scanf("%f",&chemistry);
    printf("Entermaths marks\n");
    scanf("%f",&maths);
    printf("Enter english marks\n");
    scanf("%f",&english);
    printf("Enter computer marks\n");
    scanf("%f",&computer);
    total=(physics+chemistry+maths+english+computer)/5;
    if(total>33)
    {
        printf("Your total percenatge is %f and you are pass",total);
    }
    else{
        printf("Your total percentage is %f and you are fail",total);
    }







    return 0;
}