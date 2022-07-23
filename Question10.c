#include<stdio.h>
int main()
{
    double cost,sold,profit,loss,profit_per,loss_per;
    printf("Enter cost amount\n");
    scanf("%lf",&cost);
    printf("Enter sold amount\n");
    scanf("%lf",&sold);
    if(profit = sold-cost)
    {
        profit_per =((profit*100)/cost);
        printf("Profit percentage %lf\n",profit_per);
    }
    else if(loss = cost -sold)
    {
        loss_per =((loss*100)/cost);
        printf("Loss percenatge %lf\n",loss_per);
    }
    else
    {
        cost = sold;
        printf("No loss and no profit\n");
    }
    return 0;








}