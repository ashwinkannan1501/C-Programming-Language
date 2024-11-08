/*
Variables :- 
--------------
    The Variables are the containers for storing data values like numbers and characters. In C, there are different
types of variables which is defined with different keywords. For Example :-
(i) int - Stores Integer (Whole Numbers), without decimals such as '123', '-123', etc.,
(ii) float - Stores floating point numbers, with decimals, such as '19.33', '-19.33', etc.,
(iii) char - Stores Single Characters such as 'a', 'B', etc.,. The char values are surrounded by ('').

Declaring / Creating Variables :- 
-------------------------------------
    To create a variable in C, there is the following syntax :- 

    SYNTAX :- 
    ----------
        -------------------------------
        | type variable_name = value; |
        -------------------------------
    where 'type' is one of the C's datatype, sucha s 'int'.
          'variable_name' is the name of the variable.
          The '=' is used to assign a value to the variable.

    EXAMPLE :-
    ------------
        --------------------
        | int number = 15; |
        --------------------
    where 'int' - datatype
          'number' - variable
          '15' - value
    

*/
#include<stdio.h>

void global_variable();
void static_variable();

int global_variables = 20; // Global Variable

void main()
{
    printf("Variables Introduction :- \n");
    int number = 15;
    printf("%d \n", number);

    printf("-----------------------------------------------------------------------\n\n");

    // You can declare a variable without assigning a value first, and then assign the value later.
    // EXAMPLE :-
    // Declare a variable
    int num1;
    // Assign a value to a variable
    num1 = 26;
    
    /*
    Output Variables :- 
    ---------------------
        You can output/print the values in the console with the 'printf()' function.
        EXAMPLE :-
        -----------
            ----------------------------
            | printf("Hello, World!"); |
            ----------------------------
        In any other programming languages like Java, Python, C++, etc., you can normally use a 'print function' to
    display the values the variables. However this is not possible in C.
        To output the variables in C, you must have to know the 'format specifiers'.

    Format Specifiers :- 
    ----------------------
        The format specifiers are used together with the 'printf()' function to tell the compiler what type of data,
    the variable is storing. It is basically the placeholder for the variable value.
        For Exmaple, to output the value of an 'int' varable, you must use the format specifier '%d'/'%i' surrounded
    by double quotes (""), inside the 'printf()' function.
    */

   // creating variables
   printf("Format Specifiers :- \n");
    int integer = 12;
    float floating_point = 3.6;
    char character = 'a';
    // print variables
    printf("%i \n", integer);
    printf("%f \n", floating_point);
    printf("%c \n", character);

    printf("-----------------------------------------------------------------------\n");

    // To print different types in a single priuntf() function, use the following
    printf("Print different types in a single printf() function :- \n");
    int variable1 = 256;
    char variable2 = 'A';
    printf("Number = %i \nCharacter = %c \n", variable1, variable2);

    printf("-----------------------------------------------------------------------\n");

    /*
    Change Variable Values :- 
    ---------------------------
        If you assign a new value to an existing variable, it will overwrite the previous value
    */
   printf("Change the Variable Values :- \n");
    int myNum = 15;
    printf("Old 'myNum' value :-  %d \n", myNum);
    myNum = 10;
    printf("New 'myNum' value :- %d \n", myNum);

    printf("-----------------------------------------------------------------------\n");

    // You can also assign the value of one varable to another variable
    printf("Assigning the vLaue of one variable to another variable :- \n");
    printf("Before Change \n");
    float one_value = 12.3;
    float another_value = 2.36;
    printf("One Value :- %f \n", one_value);
    printf("Another Value :- %f \n", another_value);
    printf("After Change \n");
    // Assign the value of 'another_value' to 'one_value'
    one_value = another_value;
    printf("One Value :- %f \n", one_value);
    printf("Another Value :- %f \n", another_value);

    printf("-----------------------------------------------------------------------\n");


    /*
    Declare Multiple Variables :- 
    -------------------------------
        To declare more than one variable of the same type, use a comma-separated list.
    */
    printf("Declaring Multiple Variables :- \n");
    int x = 5, y = 6, z = 10;
    printf("X : %d \n", x);
    printf("Y : %d \n", y);
    printf("Z : %d \n", z);

    printf("-----------------------------------------------------------------------\n");


    // You can also assign the same value to multiple variables of the same type
    printf("Assigning Multiple Variables of same type :-\n");
    int a, b, c;
    a = b = c = 50;
    printf("A : %d \n", a);
    printf("B : %d \n", b);
    printf("C : %d \n", c);

    printf("-----------------------------------------------------------------------\n");


    /*
    C Variable Names :- 
    ---------------------
        All the C variables must nbe identified with unique names. These unique names are called as 'identifiers'.
    Identifiers can be short names (like 'x' and 'Y') (or) more descriptive names (like 'age', 'sum', 'totalVolume').

        NOTE :- It is recommended to use descriptive names in order to create understandable and maintanable code

        The general rule for naming variable os :-
    (a) Names can contain letters, digitsand underscores(_) 
    (b) Names must begin with a letter or an underscore(_)
    (c) Names are case-sensitive ('Var' and 'var' are different variables).
    (d) Names cannot contain whitespaces or special characters like '!', '#', '%', etc.,
    (e) Reserved Keywords (such as 'int') can't be variable names
    (f) You can also assign the same value to multiple variables of the same type
    */

    // Real World Example
    printf("Real World Example :- \n");
    int student_age = 22;
    int student_register_no = 4026;
    float student_fee = 1.5;
    char student_grade = 'O';
    printf("Age : %d \n", student_age);
    printf("Reg : No : %d \n", student_register_no);
    printf("Annual Fee : %.1f Lakhs \n", student_fee);
    printf("Grade : %d \n", student_grade);

    printf("\n\n------------------------------------------------------ \n");
    printf("Types of Variables :- ");

    int local_variable = 10; // Local Variable
    printf("Local Variable :- %d \n", local_variable);

    printf("Global Variable :- %d \n", global_variables);
    global_variable();
    static_variable();
    static_variable();
    static_variable();

}

void global_variable()
{
    global_variables++;
    printf("Global Variable :- %d \n", global_variables);
}

void static_variable()
{
    static int static_variables = 10;
    static_variables++;
    printf("Static Variable :- %d \n", static_variables);
}