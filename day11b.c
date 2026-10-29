#include <stdio.h>

int main()
{
    float cp, sp, profit, loss, percentage;

    printf("Enter cost price: ");
    scanf("%f", &cp);

    printf("Enter selling price: ");
    scanf("%f", &sp);

    if (cp <= 0)
    {
        printf("Cost price must be greater than zero.\n");
    }
    else if (sp > cp)
    {
        profit = sp - cp;
        percentage = (profit / cp) * 100;

        printf("Profit = %.2f\n", profit);
        printf("Profit percentage = %.2f%%\n", percentage);
    }
    else if (cp > sp)
    {
        loss = cp - sp;
        percentage = (loss / cp) * 100;

        printf("Loss = %.2f\n", loss);
        printf("Loss percentage = %.2f%%\n", percentage);
    }
    else
    {
        printf("No profit, no loss.\n");
    }

    return 0;
}