#include <conio.h>
#include <stdio.h>
void main()
{
    printf("\t\t\t\t\tGAURAV MART");
    printf("\n\t\t\t\t\t___________");
    printf("\n\t\t\t\t G-9/107 ratia marg sangam vihar");
    char date;
    printf("\t\t\t\t\t date=");
    scanf("%s", &date);
    char custname, adrs, items, i;
    int custno, amount, qty, total, sum = 0;
    printf("customer name-");
    scanf("%s", &custname);
    printf("\ncustomer contact number-");
    scanf("%d", &custno);
    printf("\naddress of the customer-");
    scanf("%s", &adrs);
    printf("\nname of items ");
    for (i = 0; i < 10; i++)
    {
        scanf("%s", &items);
        if (items == 'n')
        {
            printf("total number of items are %d", i);
        }
    }

    printf("\namount ");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &amount);

        if (amount == 't')
        {
            total = sum + amount;
            printf("total number of amount are %d", total);
        }
    }

    getch();
}