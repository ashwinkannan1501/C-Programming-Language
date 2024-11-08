/*
Write a program for the following output using switch case
 
    MENU CARD
        1.COFFEE        Rs:15
        2.TEA           Rs:10
        3.COLD COFFEE   Rs:25
        4.MILK SHAKE    Rs:50
 
    Enter Your choice  : 2
 
    You have selected Tea
    Enter the quantity : 5
    Total amount :50
 
*/

#include <stdio.h>

void main()
{
    printf("----------------- Hotel management ------------------ \n");

    printf("\t Menu Card \n");
    printf("\t \t Enter '1' for 'Coffee' - Rs.15 \n");
    printf("\t \t Enter '2' for 'Tea' - Rs.10 \n");
    printf("\t \t Enter '3' for 'Cold Coffee' - Rs.25 \n");
    printf("\t \t Enter '4' for 'Milk Shake' - Rs.50 \n");

    unsigned short choice, quantity, bill;
    printf("Enter your choice :- ");
    scanf("%hu", &choice);

    printf("Enter your quantity :- ");
    scanf("%hu", &quantity);

    switch (choice)
    {
        case 1:
            bill = quantity * 15;
            printf("You have ordered %hu Coffee and your bill is : %hu", quantity, bill);
            break;

        case 2:
            bill = quantity * 10;
            printf("You have ordered %hu Tea and your bill is : %hu", quantity, bill);
            break;

        case 3:
            bill = quantity * 25;
            printf("You have ordered %hu Cold Coffee and your bill is : %hu", quantity, bill);
            break;

        case 4:
            bill = quantity * 50;
            printf("You have ordered %hu Milk Shake and your bill is : %hu", quantity, bill);
            break;
        
        default:
            printf("Please enter the number between 1 to 4");
    }
}
