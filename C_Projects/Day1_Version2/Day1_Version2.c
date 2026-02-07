#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Basic_Arithmetic_Operations();
void Number_to_ASCII_Conversion();
void Character_to_ASCII_Conversion();
void Grade_Classification();
void Character_Case_Conversion();
void Odd_or_Even();
void Sum_of_Five_Numbers();


int main()
{
    //task_1
   Basic_Arithmetic_Operations();

    //task_2
   Number_to_ASCII_Conversion();

    //task_3
   Character_to_ASCII_Conversion();

    //task_4
   Grade_Classification();

    //task_5
  Character_Case_Conversion();

    //task_6
    Odd_or_Even();

    //task_7
   Sum_of_Five_Numbers();


    return 0;
}

void Basic_Arithmetic_Operations()
{
    printf("=======Task 01  Basic Arithmetic Operations=======\n");

    float Task1_num1, Task1_num2;

    printf("please enter the first num:\n");
    scanf("%f", &Task1_num1);

    printf("Please enter the second num:\n");
    scanf("%f", &Task1_num2);

    printf("the summation of the two numbers is :%.2f \n", Task1_num1 + Task1_num2);
    printf("the difference of the two numbers is :%.2f \n", Task1_num1 - Task1_num2);
    printf("the product of the two numbers is :%.2f \n", Task1_num1 * Task1_num2);

    if (Task1_num2 == 0)
        printf("the divison of the two numbers is Invalid");
    else
        printf("the divison of the two numbers is :%.2f \n", Task1_num1 / Task1_num2);  
}

void Number_to_ASCII_Conversion()
{

    printf("\n=======Task 02  Number to ASCII Conversion=======\n");

    int Task2_num;
    printf("please enter the num:\n");
    scanf("%d", &Task2_num);
    
    if (Task2_num >= 0 && Task2_num <= 255)
        printf("ASCII is :'%c'\n", Task2_num);
    else
        printf("Invalid Number\n");


}

void Character_to_ASCII_Conversion()
{

    printf("\n=======Task 03  Character to ASCII Conversion=======\n");

    char Task3_chr;
    printf("please enter the character:\n");
    scanf(" %c", &Task3_chr);

    printf("ASCII is :'%u'\n", (unsigned char)Task3_chr);

}

void Grade_Classification()
{
    printf("\n=======Task 04  Grade Classification=======\n");

    int Task4_mark;

    printf("please enter the grade mark:\n");
    scanf("%d", &Task4_mark);

    if (Task4_mark > 100 || Task4_mark < 0)
    {
        printf("Invalid Mark");
    }
    else if (80 <= Task4_mark)
    {
        printf("the grade is: Excellent");
    }
    else if (70 <= Task4_mark)
    {
        printf("the grade is: very good");
    }
    else if (50 <= Task4_mark)
    {
        printf("the grade is: pass");
    }
    else
    {
        printf("the grade is: fail");
    }
}

void Character_Case_Conversion()
{

    printf("\n=======Task 05  Character Case Conversion=======\n");

    char Task5_chr;

    printf("please enter alphabet character: ");
    scanf(" %c", &Task5_chr);


    if (isupper(Task5_chr))
    {
        printf("the letter case is upper case\n");
        printf("convert %c to lower case is : %c\n", Task5_chr, tolower(Task5_chr));
    }
    else if (islower(Task5_chr))
    {
        printf("the letter case is lower case\n");
        printf("convert %c to upper case is : %c\n", Task5_chr, toupper(Task5_chr));
    }
    else
        printf("Invalid because it is not a letter");

}

void Odd_or_Even()
{
    printf("\n=======Task 06  Odd or Even=======\n");

    int Task6_num;

    printf("please enter number:\n");
    scanf("%d", &Task6_num);

    if (Task6_num % 2 == 0)
    {
        printf("the number is even");
    }
    else if (Task6_num % 2 != 0)
    {
        printf("the number is odd");
    }
}

void Sum_of_Five_Numbers()
{
    printf("\n=======Task 07  Sum of Five Numbers=======\n");

    int Task7_num1, Task7_num2, Task7_num3, Task7_num4, Task7_num5, Task7_summation;

    printf("please enter five numbers:\n");
    scanf("%d %d %d %d %d", &Task7_num1, &Task7_num2, &Task7_num3, &Task7_num4, &Task7_num5);

    Task7_summation = Task7_num1 + Task7_num2 + Task7_num3 + Task7_num4 + Task7_num5;

    printf("the total sum of five numbers is %d", Task7_summation);
}