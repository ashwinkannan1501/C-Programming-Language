#include <stdio.h>

void main() 
{
    printf("----------------- Switch Statements -------------------- \n");
    // Basic Calculator
    float first_number, second_number;
    short choice;

    printf("Enter the first number : ");
    scanf("%f", &first_number);

    printf("Enter the second number : ");
    scanf("%f", &second_number);

    printf("Enter 1 for Addition \n");
    printf("Enter 2 for Subtraction \n");
    printf("Enter 3 for Multiplication \n");
    printf("Enter 4 for Division \n");

    printf("Enter your choice :- ");
    scanf("%hd", &choice);
    switch (choice)
    {
    case 1:
        printf("%.2f + %.2f = %.2f", first_number, second_number, first_number + second_number);
        break;
    
    case 2:
        printf("%.2f - %.2f = %.2f", first_number, second_number, first_number - second_number);
        break;

    case 3:
        printf("%%.2f x %.2f = %.2f", first_number, second_number, first_number * second_number);
        break;

    case 4:
        printf("%.2f / %.2f = %.2f", first_number, second_number, first_number / second_number);
        break;
    
    default:
        printf("Please enter the correct choice");
        break;
    }
}