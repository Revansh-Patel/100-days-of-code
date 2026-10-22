#include<stdio.h>
#include<math.h>

int main()
{
    float p, r ,t, si, ci ;
     printf("ente principle amount: ");
     scanf("%f", &p);

     printf("enter rate of intrest : ");
     scanf("%f", &r);

     printf("enter time in year :");
     scanf("%f", &t);

     si = (p*r*t)/100;

     ci = p*pow((1+r/100), t)- p;

     printf("simple intrest = %.2f\n", si);
     printf("compund intrest = %.2f\n", ci);

    
    return 0;

    
}