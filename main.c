
#include<bank.h>
struct bank
{
    char custname[100];
    int accno;
    int accbal;
    char add[100];
    char city[100];
    long int phno;
    int age;
    int pwd;
}e[100];

/*
int createaccount()
{   int pwd;
    int age;
    static int i=0,n=0;
    printf("Enter customer name:\n");
    scanf("\n%s",e[i].custname);
    printf("Enter the acc no:\n");
    scanf("%d",&e[i].accno);
    e[i].accbal=0;
    printf("Enter the customer address:\n");
    scanf("\n%s",e[i].add);
    printf("Enter the city near you:\n");
    scanf("\n%s",e[i].city);
    printf("Enter the Password:\n");
    scanf("%d",&pwd);
    printf("Enter the Phone number");
    scanf("%ld",&e[i].phno);
    printf("Enter the age");
    scanf("%d",&e[i].age);
    if(e[i].age < 18)
    {
       // printf("Cannot create account");
        goto end;
    }
    else{
        
    printf("Account Created Successfully\n");
    n++;i++;
    return n;
    }
    
    end:printf("Cannot create account");
    ;
}

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

void addmoney(int n)
{
    if(n==0)
    {
        printf("No Account to display\n");
        goto end;
    }
    int z,i,acc,amount;
    printf("Enter the Account number\n");
    scanf("%d",&acc);
    printf("Enter the amount need to be add in your account\n");
    scanf("%d",&amount);
    for(i=0;i<n;i++)
    {
        if(acc==e[i].accno)
        {
            e[i].accbal=e[i].accbal+amount;
            z=i;
            break;
        }
    }
    printf("Amount Credited Successfully!!!\n");
    printf("Your Available Balance is Rs.%d\n",e[z].accbal);
    end:
    ;
}

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

void mobilechange(int number)
{   int i;
    long int newphn;  
     if(number==0)
    {
        printf("No Account to display\n");
        goto end;
    }
    printf("Enter new number:\n");
    scanf("%ld",&newphn);
    for(i=0;i<number;i++)
    {
    if(newphn != e[i].phno)
    {
        e[i].phno = newphn;
        printf("Number changed sucessfully\n Your new number is %ld\n",e[i].phno);
    }
    else
    {
        printf("This is your Old mobilenumber\n");
    }
    }
    end:
    ;
}

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
/*int Password(int number)
{   int pwd,i;
    printf("Enter the password\n");
    scanf("%d",&pwd);
    for(i =0;i<number;i++)
    {
    if(e[i].pwd == pwd){
    printf("Password Matched\n");
    return 1;
    }
    else{
    return 0;
    }
}*/
    
}*/
int main()
{
    //struct bank e[100];
    int number=0;
    int choice;
    int value = 0;
    for(;;)
    {
        printf("***************Online Banking**************\n");
        printf("1:Create New User Account\n2:View Profile\n3:Add money to vallet\n4:withdraw money\n5:Transfer money \n6:Mobile number change\n 7.Search Account \n9. 8.Logout \n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        if(choice==10)
        {
            printf("Transaction closed\n");
            break;
        }
        switch(choice)
        {
            case 1:
                number=createaccount();
                break;
            case 2: 
                /*value = Password(number);
                printf("value: %d\n",value);
                if(value == 0){
                printf("Wrong password\n");
                }
                else*/
                 viewaccount(number);
                
                break;
            case 3:
                
                addmoney(number);
                break;
            case 4:
                
                withdraw(number);
                break;
            case 5:
                
                transfer(number);
                break;
            case 6:
                mobilechange(number);
                break;
            case 7:
                accountsearch(number);
                break;
                
        }
    }
    return 0;
    
}
