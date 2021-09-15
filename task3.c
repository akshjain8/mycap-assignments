#include<stdio.h>
#include<conio.h>
int main ()
{
    int order ;
    printf("Hey byte , what would you like to order today\n");
    scanf("%d",&order);
    switch (order)
    {
    case 1:
        printf("\nHere is your Sandwich.\n");
        printf("Please pay Rs 120/- ");
        break;

    case 2:
        printf("\nHere is your Burger.\n");
        printf("Please pay Rs 80/- ");
        break;
    case 3:
        printf("\nHere are your French fries.\n");
        printf("Please pay Rs 90/- ");
        break;

    case 4:
        printf("\nHere is your Pizza.\n");
        printf("Please pay Rs 220/- ");
        break;

    case 5:
        printf("\nHere is your Pasta.\n");
        printf("Please pay Rs 130/- ");
        break;
    
    default:
        printf("This order is not available.");
        break;
    }
    return 0 ;
}