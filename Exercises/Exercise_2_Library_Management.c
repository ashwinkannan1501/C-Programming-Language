/*
A library charges a fine for every book returned late.
For first 5 days the fine is 50 paise,
for 6-10 days fine is one rupee and
above 10 days fine is 5 rupees.
If you return the book after 30 days your membership will be cancelled.
Write a program to accept the number of days the member is late to return
the book and display the fine or the appropriate message.
 
*/

#include <stdio.h>

void main()
{
    printf("---------------- Library Management System ----------------------- \n");
    unsigned short days;

    printf("Enter the number of days the book is returned late : ");
    scanf("%hu", &days);

    if(days > 0 && days <= 5)
    {
        printf("You returned the book %hu days later. So Fine amount will be Rs.50 paise.");
    }
    else if (days >= 6 && days <= 10)
    {
        printf("You returned the book %hu days later. So Fine amount will be Rs.1");
    }
    else if (days > 10 && days <= 30)
    {
        printf("You returned the book %hu days later. So Fine amount will be Rs.5");
    }
    else if (days > 30)
    {
        printf("You returned the book %hu days later. So, your membership will be cancelled");
    }
    else
    {
        printf("You returned the book on / before the due time. So fine amount will be collected and membership will not be cancelled");
    }
}
