/*
Any integer is input through the keyboard. Write a program to find out
whether it is an odd number or even number.
(Hint: Use the % (modulus) operator)
*/
# include <stdio.h>

void main()
{
    printf("--------------- Odd or Even ------------------\n");

    short number;
    printf("Enter the number : ");
    scanf("%hd", &number);
    if(number % 2 == 0)
    {
        printf("%hd is a even number", number);
    }
    else
    {
        printf("%hd is a odd number", number);
    }

}