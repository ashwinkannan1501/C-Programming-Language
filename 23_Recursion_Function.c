#include<stdio.h>

int recursive_function(short);

void main()
{
    short number;
    printf("Enter a number :- ");
    scanf("%hd", &number);

    int factorial_result = recursive_function(number);
    printf("The Factorial of %hd is :- %d \n", number, factorial_result);
}

int recursive_function(short number)
{
    if(number == 1)
    {
        return 1;
    }
    else{
        return number * recursive_function(number - 1); // Calling a function by itself again and again
    }
}
