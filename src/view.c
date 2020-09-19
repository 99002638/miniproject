3include<bank.h>
void viewaccount(int n)
{
  
    if(n==0)
    {
        printf("No Account to display\n");
        goto end;
    }
    int i,acc;
    printf("Enter your Account number\n");
    scanf("%d",&acc);
    printf("Welcome User\n");
    for(i=0;i<n;i++)
    {
        if(acc==e[i].accno)
        {
            printf("Name : %s\n",e[i].custname);
            printf("Account Number : %d\n",e[i].accno);
            printf("Available Balance : Rs. %d\n",e[i].accbal);
            printf("Address : %s\n",e[i].add);
            printf("Mobile Number : %ld\n",e[i].phno);
            printf("Age : %d\n",e[i].age);
            printf("Thank you for using our bank");
            
        }
    }
    end:
    ;
}
