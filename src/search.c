#include<bank.h>
void accountsearch(int number)
{   int accno,i;
     if(number==0)
    {
        printf("No Account to display\n");
        goto end;
    }
    printf("Enter account number:\n");
    scanf("%d",&accno);
    for(i=0;i<number;i++)
    {
    if(accno == e[i].accno)
    {
        viewaccount(number);
    }
    else
    {
        printf("Account not found\n");
    }
}
end:
;
}
