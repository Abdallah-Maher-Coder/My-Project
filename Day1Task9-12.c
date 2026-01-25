#include <stdio.h>
int main(){

    printf("=======Task 09 Factorial Calculation=======\n");

    int f_num, c, i;
    long long factorial=1;
    printf("please enter the number to calculate its factorial:\n");
    scanf("%d", &f_num);
    if(f_num<0)
    {
        printf ("please enter positive number:\n");
        scanf("%d", &f_num);
    }
    else
    {
        if(f_num == 0)
        {
            printf("factorial is equal : 1");
        }
        else
        {
            for(i=1;i<=f_num;i++)
            {
                factorial*=i;
            }
            printf("factorial of number %d is equal : %lld", f_num , factorial);
        }

    }
printf("\n=======Task 10 Power Calculation=======\n"); 

//Write a program that reads two numbers x and y, then calculates:
//x^y (x raised to the power of y).

int z=1;
int x,y;
int ii=1;
printf("please enter the number of x :");
scanf("%d", &x);
printf("please enter the power of y :");
scanf("%d", &y);
while (ii<=y)
{
    z*=x;
    ii++;
}
printf("x power y is: %d", z);

//Task 12 – Menu Program
//Write a program that displays a menu of options and allows the user to select and execute an operation.
printf("\n=======Task 12 Menu Program=======\n");
int choice;
printf("which phone brand do you prefer?\n");
printf("1.iphone\n");
printf("2.samsung\n");
printf("3.xiaomi\n");
printf("please enter the number of phone brand you prefer:");
do
{
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("iphone 17 , iphone 16, iphone 15");
        break;
    case 2:
        printf("galaxy s25 ultra , galaxy s25");
        break;
    case 3:
        printf("xiaomi 14 , xiaomi 13T pro, xiaomi 12 pro");
        break;
    
    }
}
while (choice!=1 && choice!=2 && choice!=3);
return 0;
}

