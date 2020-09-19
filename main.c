
#include <bank.h>
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
