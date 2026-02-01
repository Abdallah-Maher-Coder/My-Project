#include <stdio.h>
#include <string.h>

////////////////////////////// 1D Array /////////////////////////////
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


////////////////////////////// 2D Array /////////////////////////////
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


}



//////////////////////////////////////// main function ///////////////////////////////////////

int main ()
{

    one_D_array();
    two_D_array();

 return 0;

}