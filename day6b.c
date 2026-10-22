#include <stdio.h>

int main()
{
    int a;
     printf("enter a number : ");
     scanf("%d", &a);

     if (a>=0)
     {
        if (a==0)
        {
            printf("%d is zero\n", a);
         }
         else
            {
                printf("%d is positive number\n", a);
            }
        }
        else
        {
            printf("%d is negative number\n", a);
        }
     

    return 0;
}