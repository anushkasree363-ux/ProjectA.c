#include<stdio.h>
#include<conio.h>
int main()
{
int pin=1103,epin,choice;
float amount,balance=5000;
clrscr();
printf("Enter the pin: ");
scanf("%d",&epin);
if(epin!=pin)
{
printf("Invalid pin\n");
return 0;
}
else
{
printf("login success\n");
}
do
{
printf("\nmenu");
printf("\n1.check the balance");
printf("\n2.withdraw");
printf("\n3.deposited");
printf("\n4.exit");
printf("enter the choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
printf("total balance=%f",balance);
break;
}
case 2:
{
printf("Enter withdraw amount: ");
scanf("%f",&amount);
if(amount<=0)
{
printf("\n Invalidf amount");
}
else if(amount>balance)
{
printf("\nInsufficient amount");
}
else
{
balance=balance-amount;
printf("New balance %f",balance);
}
}
case 3:
{
printf("\nEnter the deposit amount");
scanf("%f",&amount);
if(amount>0)
{
balance+=amount;
printf("\ndeposit successful\n");
printf("\ntotal amount %f",balance);
}
}
case 4:
{
printf("thank you\n");
break;
}
default:
{
printf("\nInvalid choice\n");
}
}
}while(choice!=4);
getch();
return 0;
}


