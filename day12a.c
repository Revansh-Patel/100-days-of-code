#include<stdio.h>

int main()
{
    int day, fine ;

    printf("enter the number of days you have issued the book");
    scanf("%d",&day);


    if (day <=5)
    {
        fine = 2*day;
        printf("lib fine : %d",fine);
    }else if (day <=10)
    {
        fine = 2*5 +(day-5)*4;
         printf("lib fine : %d",fine);

    }else if (day<=30)
    {
        fine = 2*5 + 4*5 +(day-10)*6;
        printf("lib fine : %d",fine);
        
    }else
    {
        printf("you membershop is canceled");
    }
    
    
    
   
    



    return 0;
}