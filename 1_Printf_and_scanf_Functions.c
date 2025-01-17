/**
 Printf() function and Scanf() function in C :-
 ------------------------------------------------
    The printf() & scanf() functions are in-built librarys functions defined in <stdio.h>(header files) which are used for input and output in C Language.

printf() function :- It is used for output. It prints the given statement to the console.
SYNTAX :- printf("format_string", argument_list);
The format string can be %d for integer, %f for float, %c for single character, %s for string, etc.,

scanf() function :- It is used for input. It reads the input data from the console
SYNTAX :- scanf("format_string", argument_list);
 */
#include<stdio.h>
int main()
{   
    int number, first_number, second_number, sum, difference;
    printf("---------------------- Printf() and Scanf() Functions in C ---------------------------\n");

    printf("1) Program to print the square and cube of a number \n");
    printf("Enter a number : ");
    scanf("%d", &number);
    printf("The Square of %d is : %d\n", number, number*number);
    printf("The Cube of %d is : %d\n", number, number*number*number);
    printf("\n");


    printf("2) Program to print the sum and difference of 2 numbers \n");
    printf("Enter the first number : ");
    scanf("%d", &first_number);
    printf("Enter the second number : ");
    scanf("%d", &second_number);
    sum = first_number + second_number;
    difference = first_number - second_number;
    printf("%d + %d = %d\n", first_number, second_number, sum);
    printf("%d - %d = %d\n", first_number, second_number, difference);
}