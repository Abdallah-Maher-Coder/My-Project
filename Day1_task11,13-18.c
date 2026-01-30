#include <stdio.h>
#include <string.h>
////////////////////////////// Task 11 – Reverse Number /////////////////////////////
void Reverse_Number()
{
    int i;
    int digits_number;
    char number[digits_number];

    printf("Please enter digits_number ");
    scanf("%d", &digits_number);

    printf("Please enter the number ");
    scanf("%s", &number[digits_number]);

    for(i=(digits_number-1); i>=0; i--)
    {
        printf("%c", number[i]);
    }

}

////////////////////////////// Task 13 - 1D Array /////////////////////////////
void one_D_array ()
{
    int task13 [10];
    int i=0;
    int task13_sum=0;
    int task13_max=0;

    // input
    printf("enter elments : \n");
    for (i=0;i<10;i++)
    {
        printf("enter elment %d :\n ", i);
        scanf("%d", &task13[i]);
    }
    
    //output
    printf("\n the numbers are : ", i);
    for (i=0;i<10;i++)
    {
        printf("\n elment %d  is : %d", i, task13[i]);
    }

    //sum
    for (i=0;i<10;i++)
    {
      task13_sum+=task13[i];
    }
    printf("\n the summation of the elements is: %d ", task13_sum);

    //max
    for (i=0;i<10;i++)
    {
      if(task13_max < task13[i])
      {
        task13_max = task13[i];
      }
    }
    printf("\n the max of the elements is: %d ", task13_max);

}


 ////////////////////////////// Task 14 - 2D Array /////////////////////////////
void two_D_array()
{
    int i ,j;
    int task14 [5][3];
    
    // input
    printf("enter elments : \n");
    for (i=0;i<5;i++)
    {
        for (j=0;j<3;j++)
        {

        printf("enter elment [%d][%d] :\n ", i, j);
        scanf("%d", &task14[i][j]);
        }
    }

    //output
    printf("the two D array is : \n");
    for (i=0;i<5;i++)
    {
        for (j=0;j<3;j++)
        {
        printf("elment [%d][%d] is: %d\n ", i, j, task14[i][j]);
        }
    }

    //output
    printf("the two D array by another format is: \n");
    for (i=0;i<5;i++)
    {
        switch (i)
        {
        case 0:
            for (j=0;j<3;j++)
            {
             printf(" %d ", task14[i][j]);   
            }
            printf("\n");
            break;

        case 1:
            for (j=0;j<3;j++)
            {
             printf(" %d ", task14[i][j]);   
            }
            printf("\n");
            break; 

        case 2:
            for (j=0;j<3;j++)
            {
             printf(" %d ", task14[i][j]);   
            }
            printf("\n");
            break; 

        case 3:
            for (j=0;j<3;j++)
            {
             printf(" %d ", task14[i][j]);   
            }
            printf("\n");
            break;

        case 4:
            for (j=0;j<3;j++)
            {
             printf(" %d ", task14[i][j]);   
            }
            printf("\n");
            break;

        default:1;
            break;
    }

    
}


//Task 15 – Maximum Distance
//Task 16 – Magic Box



////////////////////////////// Task 17 - Fibonacci Series ///////////////////////
void Fibonacci_Series()
{
    int i;
    int n;
    printf("enter the terms number of Fibonacci Series : ");
    scanf("%d", &n);
    int t1, t2;
    if(n==1)
    {
        t1 = 0;
        printf("%d",t1);
    } else if(n==2)
    {
        t1 = 0, 
        t2 = 1;
        printf("%d %d", t1, t2);
    }
    else if(n>2)
    {
        t1 = 0;
        t2 = 1;
        int next_term;
        for(i=1;i<n;i++)
        {
            next_term = t1 + t2;
            t1 = t2;
            t2 = next_term;
            printf("%d ",t1);
        }

    }
}


//////////////////////////////  Task 18 - bubble sort /////////////////////////////

void bubble_sort()
{
    int task18_arr[5]={5,3,7,9,4};

    int i=0 ;
    int s =5;
    int z;
    int swap;
    for(i=0; i<s; i++)
    {
        swap == 0;

        if (task18_arr[i] > task18_arr[i+1])
        {
            {
                z = task18_arr[i+1];
                task18_arr[i+1] = task18_arr[i];
                task18_arr[i] = z;
            }

            swap == 1;
        }
        
        
        else if (swap == 0)
        {
            break;
        }

    }
    for(i=0;i<s;i++)
    {
        printf("%d ", task18_arr[i]);
    }
}

//////////////////////////////////////// main function ///////////////////////////////////////

int main()
{

    one_D_array();
    two_D_array();
    bubble_sort();
    Fibonacci_Series();
    Reverse_Number();


 return 0;

}