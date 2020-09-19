#include<bank.h>
void addmoney(int n)
{
    if(n==0)
    {
        printf("No Account to display\n");
        goto end;
    }
    int z,iterator,acc,amount;
    printf("Enter the Account number\n");
    scanf("%d",&acc);
    printf("Enter the amount need to be add in your account\n");
    scanf("%d",&amount);
    for(iterator=0;iterator<n;iterator++)
    {
        if(acc==e[iterator].accno)
        {
            e[iterator].accbal=e[iterator].accbal+amount;
            z=iterator;
            break;
        }
    }
    printf("Amount Credited Successfully!!!\n");
    printf("Your Available Balance is Rs.%d\n",e[z].accbal);
    end:
    ;
}

