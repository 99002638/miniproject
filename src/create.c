#include<bank.h>

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
