#include <stdio.h>

short with_argument_and_with_return_type(short first_number, short second_number)
{
    return first_number + second_number;
}

short with_argument_and_without_return_type(short first_number, short second_number)
{
    short subtraction_result = first_number - second_number;
    printf("%hd - %hd = %hd \n", first_number, second_number, subtraction_result);
}

short without_argument_and_with_return_type()
{
    short first_number, second_number, multiplication_result;
    printf("Enter the First Number :- ");
    scanf("%hd", &first_number);
    
    printf("Enter the Second Number :- ");
    scanf("%hd", &second_number);

    multiplication_result = first_number * second_number;
    printf("%hd x %hd = ", first_number, second_number);
    return multiplication_result;
}

short without_argument_and_without_return_type()
{
    short first_number, second_number;
    float division_result;

    printf("Enter the First Number :- ");
    scanf("%hd", &first_number);
    
    printf("Enter the Second Number :- ");
    scanf("%hd", &second_number);

    division_result = first_number / second_number;
    printf("%hd / %hd = %.2f", first_number, second_number, division_result);
}

void array_parameters(char names[], int age)
{
    printf("Hello %s . You are %d years old !\n", names, age);
}

void arrays_as_function(short numbers[5])
{
    for (short index = 0; index < 5; index++)
    {
        printf("%hd \n", numbers[index]);
    }
    
}

void function_declaration(short, short, short, short, float); // Function Declaration

void main()
{
    printf("-------------- Functions --------------- \n");

    short first_number, second_number, addition_result, multiplication_result, division_result;
    printf("Enter the First Number :- ");
    scanf("%hd", &first_number);
    
    printf("Enter the Second Number :- ");
    scanf("%hd", &second_number);

    printf("----------------------- Addition Operation ------------------- \n");
    addition_result = with_argument_and_with_return_type(first_number, second_number);
    printf("%hd + %hd = %hd \n", first_number, second_number, addition_result);

    printf("----------------------- Subtraction Operation ------------------- \n");
    with_argument_and_without_return_type(first_number, second_number);

    printf("----------------------- Multiplication Operaton ------------------- \n");
    multiplication_result = without_argument_and_with_return_type();
    printf("%hd \n", multiplication_result);

    printf("------------------------- Division Operation ---------------------------- \n");
    without_argument_and_without_return_type();

    printf("\n-------------------- Array Parameters ----------------- \n");
    array_parameters("Ashwin", 12);
    array_parameters("Kannan", 45);

    printf("\n ----------------------------- Passing Arrays as Function Parameters----------------------- ");
    short numbers[5] = {10, 25, 63, 95, 75};
    arrays_as_function(numbers);

    function_declaration(first_number, second_number, addition_result, multiplication_result, division_result);

    
}

void function_declaration(short first_number, short second_number, short addition, short multiplication, float division)
{
    printf("First Number :- %hd \n", first_number);
    printf("Second Number :- %hd \n", second_number);
    printf("Addition Value :- %hd \n", addition);
    printf("Multiplication Value :- %hd \n", multiplication);
    printf("Division Value :- %f \n", division);
}