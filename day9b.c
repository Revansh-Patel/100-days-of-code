#include<stdio.h>
int main()
{
    float percentage;
    printf("enter the percentage : ");
    scanf("%f",&percentage);

    if (percentage >= 90){
        printf("Grade A");
    }
    else if (percentage >= 80 && percentage < 90){
        printf("Grade B");
    }
    else if (percentage >= 70 && percentage < 80){
        printf("Grade C");
    }
    else if (percentage >= 60 && percentage < 70){
        printf("Grade D");
    }
    else{
        printf("Grade F");
    }
    return 0;
}