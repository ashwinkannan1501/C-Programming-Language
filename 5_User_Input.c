/*
User Input in C :-
-------------------
    We have already learnt that 'printf()' function is used to output values in c.

    To get the user input, you can use the 'scanf()' function.

    In a C Programming language, the 'scanf()' is a functionthat stands for 'Scanning Formated String'. It reads the 
data from 'stdin'(Standard Input Stream (i.e) usually keyboard) and then writes the result into the given arguments.

    It accepts the 'character', 'string' and 'numeric data' from the user using standard input(keyboard).

    The 'scanf()' function also uses the format specifiers like 'printf()' function.

SYNTAX :-
----------
    ---------------------------------------------
    | int scanf("Format Specifier", &variable); |
    ---------------------------------------------
    where, (i) int - datatype
           (ii) Format Specifier - The strings that contains the type specifier.
           (iii) variable - The '&variable' is used to get the variable's memory address.

The Type Specifiers Recognized by scanf() function :- 
--------------------------------------------------------
    %hd, %d, %ld, %lld, %f, %c, %s, %hu, %i, %u, %lu, %llu, %lf. These are some of the specifiers that are recognized by the 'scanf()' function.

Return Values :-
------------------
    (i) >0 : The number of values converted and assigned successfully
    (ii) 0 : No value was assigned
    (iii) <0 : Read error encountered (or) Ednd-Of-File(EOF) reached before any assignemnt was made.

Why '&' ? :-
---------------
    While Scanning the input, the 'scanf()' function needs to store that input data somewhere.
    To store this input data, the 'scanf()' function needs to know the memory location of a variable and here comes 
the '&' symbol to rescue.
    The '&' symbol is also called as the 'address of the operator'.
    Example :- '&var' is the 'address of the variable named "var"'

Take String input :-
----------------------
    You can also get a string entered by the user

NOTE :-
-----------
    You must specify the size of the string/array and you don't have to specify the refernce operator(&) when working
with strings in 'scanf()' function.

    However, the 'scanf()' function has some limitations :- it considers the space(whitespaces, tabs, etc.,) as a 
terminating character, which means that it can only display a single word (even if you type many words).

    To overcome the limitations in 'scanf()' function, use the 'fgets()' function.

fgets() function :- 
---------------------
    When working with strings, we often use the 'fgets()' function to 'read the line of the text'.
    You must include the following arguments in 'fgets()' function. They are :-
(i) Name of the string variable
(ii) sizeof(string_name)
(iii) stdin (standard input (keyboard))

    fgets() function reads a text line or a string from the specified file (or) console.

Why '&' is not used for strings in 'scanf()' function? :-
--------------------------------------------------------------
    In case of string (character array), the variable itself points to the first element of the array. Thus there is
no need to use he '&' operator to pass te address.

NOTE :-
---------
    The '&' is used to get the address of the variable. 
    C does not have a string datatype, the string is just an array of characters and the array variable stres the 
address of the 1st index location
    By default, the variable itself points to the base address and therefore to access base address of string, there
    is no need of adding an extra '&' symbol operator.

*/
#include <stdio.h>

void main()
{
    printf("----------------------- User Input ----------------------------- \n");
    
    // printf("Enter the name : ");
    // char name[20];
    // scanf("%s", &name);
    // printf("\nThe name is : %s", name);

    // Getting the necessary input from the user
    printf("Enter the full name : ");
    char fullname[20];
    fgets(fullname, sizeof(fullname), stdin);
   
    short age;
    printf("Enter your age :- ");
    scanf("%hd", &age);
    
    unsigned long long reg_no;
    printf("Enter your register no :- ");
    scanf("%lld", &reg_no);
    
    char roll_no[20];
    printf("Enter the roll number :- ");
    scanf("%s", roll_no);
    
    char degree[5];
    printf("Enter your degree (in short format) :- ");
    scanf("%s", degree);
    
    char department[5];
    printf("Enter your department (in short format) :- ");
    scanf("%s", department);;
   
   // Printing the values
    printf("\nThe name is : %s \n", fullname);
    printf("The age is : %hd \n", age);
    printf("The register number is : %lld \n", reg_no);
    printf("The roll number is :- %s \n", roll_no);
    printf("The degree is :- %s \n", degree);
    printf("The department is :- %s \n", department);

    // char variable[25];

    // // Syntax to scan a String
    // scanf("%s", variable);

    // // Comparing base address of String with address
    // // of first element of array which must return
    // // true as both must be same
    // printf("(Is Base address = address of first element)? \n %d",(variable == &variable[0]));
}