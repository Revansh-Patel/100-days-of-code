#include<stdio.h>

int main()
{
    int unit, bill ;

    printf("enter the number of units used");
    scanf("%d",&unit);


    if (unit <=100)
    {
        bill = unit*5 ;
        printf("bill: %d",bill);
    }else if (unit <=200)
    {
        bill = 100*5 +(unit-100)*7;
         printf("bill : %d",bill);

    }else if (unit<=300)
    {
        bill = 100*5+ 100*7 +(unit-200)*10;
        printf("bill : %d",bill);
        
    }else
    {
        bill = 100*5+ 100*7 + 100*10+(unit-300)*12;
        printf("bill : %d",bill);
    }
    
    
      return 0;
}