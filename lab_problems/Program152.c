/*152. Create a structure to specify data of customers in a bank. The data to be stored is: 
Account number, Name, Balance in account. 
Assume maximum of 200 customers in the bank.
(a) Write a function to print the Account number and name of each customer with balance below Rs. 100.
(b) If a customer request for withdrawal or deposit, it is given in the form:
Acct. no, amount, code (1 for deposit, 0 for withdrawal) Write a program to give a message, “The balance is insufficient for the specified withdrawal”.*/
#include<stdio.h>
#define max 200

void printcustomer_below100();
void withdrawal_deposit(float amount,long long account_no,int code);

struct bank{
long long int acc_no;
char name[100];
float balance;
};
struct bank data[max];

int main()
{
   for(int i=0;i<max;i++)
    {
        printf("Enter the account number of customer %d :",i+1);
        scanf("%lld",&data[i].acc_no);
        getchar();
        printf("Enter the name of customer %d :",i+1);
        fgets(data[i].name,100,stdin);

        for(int j=0;(data[i].name)[j]!='\0';j++)
        {
            if((data[i].name)[j]=='\n')
            (data[i].name)[j]='\0';
        }

        printf("Enter the balance in the account of customer %d :",i+1);
        scanf("%f",&data[i].balance);
        getchar();
    }
    printf("The list of customers with balance less than Rs 100:\n");
    printcustomer_below100();

    printf("Do you want to withraw or deposit anything(Y/N): ");
    char ch;
    scanf("%c",&ch);
    if(ch=='Y')
    {   long long int account_no;
        printf("Enter the account no.: ");
        scanf("%lld",&account_no);

        float amount;
         printf("Enter the amount: ");
        scanf("%f",&amount);

        int code;
        printf("Enter the code (1 for deposit, 0 for withdrawal): ");
        scanf("%d",&code);

        withdrawal_deposit(amount,account_no,code);
    }
}
void printcustomer_below100()
{
    printf("The customers with balance below 100:\n");
    for(int i=0;i<max;i++)
    {
        
        if(data[i].balance<100)
        {
            printf("Account no.= %lld\n",data[i].acc_no);
            printf("The name= %s\n",data[i].name);
            printf("The amount= %f\n",data[i].balance);
            printf("\n");
        }
    }
}
void withdrawal_deposit(float amount,long long account_no,int code)
{
        if(code==1)
        {
            int f=0,index;
            for(int i=0;i<max;i++)
            {
                if(data[i].acc_no==account_no)
                {
                    index=i;
                    data[i].balance+=amount;
                    f=1;
                    break;
                }
            }
            
            if(f==1)
            {
            printf("Updated record:\n");
            printf("Account no.: %lld",data[index].acc_no);
            printf("The name: %s",data[index].name);
            printf("Current Balance: %f\n",data[index].balance);
            }
            else
            printf("Account not found.\n");
        }
        else if(code==0)
        {
            int  f=0,index;
            for(int i=0;i<max;i++)
            {
                if(data[i].acc_no==account_no)
                {
                    index=i;
                    f=1;
                if(data[i].balance>=100)
                {
                    float new_amount=data[i].balance-amount;
                    if(new_amount<100)
                    {
                        printf("The balance is insufficient for the specified amount.\n");
                    }
                    else
                    {
                        data[i].balance=new_amount;
                    }
                }
                else
                {
                    printf("The balance is insufficient for the specified amount.\n");
                }
                }
            }

            if(f==1)
            {
            printf("Account no.: %lld",data[index].acc_no);
            printf("The name: %s",data[index].name);
            printf("Current Balance: %f\n",data[index].balance);
            }
            else
            printf("Account not found\n");

        }
        else
        printf("Invalid input");

}
   