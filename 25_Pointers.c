#include<stdio.h>

void main()
{
    int number;
    printf("Enter a Number  :- ");
    scanf("%d", &number); // '&' -> Reference Operator

    int *pointer_integer = &number;
    printf("Number Value :- %d \n", number);
    printf("Address of %d :- %d \n", number, &number);

    printf("Pointer Value of %d is :- %d \n", number, pointer_integer);
    printf("Address of %d is :- %d \n", pointer_integer, &pointer_integer);

    printf("Dereferncing of %d is :- %d \n", pointer_integer, *pointer_integer);

}
