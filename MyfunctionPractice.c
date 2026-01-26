//ch5_ex_5.1
/*
#include <stdio.h>
int max_value(int x, int y);
int main()
{
    int val1, val2, Max;

    printf("Please enter the first number:\n");
    scanf("%d", &val1);

    printf("Please enter the second number:\n");
    scanf("%d", &val2);

    Max = max_value(val1, val2);

    printf("the maximum of two values is:\n%d", Max);


    return 0;    
}
int max_value(int x, int y)
{
  int  max;
  if( x > y )
  {
    max = x;
  }
  else
  {
    max = y;
  }
  return max;
}
*/



//ch5_ex_5.2
/* #include <stdio.h>

int x=7;
int y =9;

void swap_func (void);

int main()
{
    int x=y;
    printf("x after swap is : %d\n", x);
    swap_func();
    return 0;

}
void swap_func (void)
{
    int y=x;
    printf("y after swap is : %d", y); 
}
*/



//ch5_ex_5.2 another solution
/* #include <stdio.h>

int x=7;
int y =9;

void swap_func (void);

int main()
{
    swap_func();  
    printf("x after swap is : %d\n", x);
    printf("y after swap is : %d", y);

    return 0;
}
void swap_func(void)
{   
    int z;
    z=x;
    x=y;
    y=z;   
}
    */

