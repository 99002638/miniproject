#include<bank.h>
void withdraw(int n)
{
    if(n==0)
    {
        printf("No Account to display\n");
        goto end;
    }
    int z,i,acc,amount;
    printf("Enter the Account number\n");
    scanf("%d",&acc);
    printf("Enter the amount need to be withdraw from your account\n");
    scanf("%d",&amount);
    for(i=0;i<n;i++)
    {
        if(acc==e[i].accno)
        {
            e[i].accbal=e[i].accbal-amount;
            z=i;
            break;
        }
    }
    printf("Cash Withdraw has been  Successfully Done!!!\n");
    printf("Your Current Balance is Rs.%d\n",e[z].accbal);
    end:
    ;
}
