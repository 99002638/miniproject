#include<bank.h>
void transfer(int n)
{
    if(n==0)
    {
        printf("No Account to display\n");
        goto end;
    }
    int z,y,i,acc,receiver,amount;
    char a[100];
    printf("Enter your Account number\n");
    scanf("%d",&acc);
    printf("Enter the receiver account number\n");
    scanf("%d",&receiver);
    printf("Enter the amount need to be Transfer from your account\n");
    scanf("%d",&amount);
    for(i=0;i<n;i++)
    {
        if(acc==e[i].accno)
        {
            e[i].accbal=e[i].accbal-amount;
            z=i;
        }
        if(receiver==e[i].accno)
        {
            e[i].accbal=e[i].accbal+amount;
            strcpy(a,e[i].custname);
        }
    }
    printf("Transaction Successfull!!!\n");
    printf("The amount Rs.%d is transferred to %s's account\n",amount,a);
    printf("Your Available Balance is Rs.%d\n",e[z].accbal);
    end:
    ;
}
