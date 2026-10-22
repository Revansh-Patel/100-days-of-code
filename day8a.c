#include<stdio.h>

int main()
{
    char ch;
    //uppercase_alphabet, lowercase_alphabet;

    printf("enter a character : ");
    scanf("%c", &ch);

    if(ch>='A' && ch<='Z')
    {
        printf("%c is uppercase alphabet\n", ch);
    }
    else if(ch>='a' && ch<='z')
    {
        printf("%c is lowercase alphabet\n", ch);
    }
    else if(ch>='0' && ch<='9')
    {
        printf("%c is digit\n", ch);
    }
    else
    {
        printf("%c is special character\n", ch);
    }


    return 0;
}