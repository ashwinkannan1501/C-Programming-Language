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
    where 'type' is one of the C's datatype, such as 'int'.
          'variable_name' is the name of the variable.
          The '=' is used to assign a value to the variable.

    EXAMPLE :-
    ------------
        --------------------
        | int number = 15; |
        --------------------
    where 'int' - datatype
          'number' - variable
          '=' - assignment operator (assigns the value to the variable)
          '15' - value
    

*/
#include<stdio.h>

void global_variable();
void static_variable();

int global_variables = 20; // Global Variable
//extern short external_variable; // External Variable

void main()
{
    printf("Variables Introduction :- \n");
    int number = 15;
    printf("Number = %d \n", number);
    printf("The memory location of the number (%d) is : %p \n", number, &number);

    printf("-----------------------------------------------------------------------\n\n");

    // You can declare a variable without assigning a value first, and then assign the value later.
    // EXAMPLE :-
    // Declare a variable
    int num1;
    // Assign a value to a variable
    num1 = 26;
    printf("Num1 = %d \n", num1);
    printf("Memory Address of Num1 (%d) is : %p \n", num1, &num1);
    
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
        For Exmaple, to output the value of an 'int' varable, you must use the format specifier '%d' (or) '%i' surrounded
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
    printf("Memory address of the Floating Point (%f) is : %p \n", floating_point, &floating_point);
    printf("%c \n", character);
    printf("Memory address of the character (%c) is : %p \n", character, &character);

    printf("-----------------------------------------------------------------------\n");

    // To print different types in a single printf() function, use the following
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
    printf("Memory address of Old Num (%d) is : %p \n", myNum, &myNum);
    myNum = 10;
    printf("New 'myNum' value :- %d \n", myNum);
    printf("Memory address of New Num (%d) is : %p \n", myNum, &myNum);

    printf("-----------------------------------------------------------------------\n");

    // You can also assign the value of one varable to another variable
    printf("Assigning the value of one variable to another variable :- \n");
    printf("Before Change \n");
    float one_value = 12.3;
    float another_value = 2.36;
    printf("One Value :- %f \n", one_value);
    printf("Another Value :- %f \n", another_value);
    printf("Memory Address of One Value (%f) (before change) is : %p \n", one_value, &one_value);
    printf("Memory Address of Another Value (%f) (before change) is : %p \n", another_value, &another_value);
    printf("After Change \n");
    // Assign the value of 'another_value' to 'one_value'
    one_value = another_value;
    printf("One Value :- %f \n", one_value);
    printf("Another Value :- %f \n", another_value);
    printf("Memory Address of One Value (%f) (after change) is : %p \n", one_value, &one_value);
    printf("Memory Address of Another Value Value (%f) (after change) is : %p \n", another_value, &another_value);

    printf("-----------------------------------------------------------------------\n");


    // Swapping of 2 variables
    short number_1 = 10;
    short number_2 = 20;
    short temp; // Creates a temporary variable

    printf("Before Swapping \n");
    printf("Number 1 : %hd \n", number_1);
    printf("Number 2 : %hd \n", number_2);

    // Swapping Procedure;
    temp = number_2; // Firstly assigning the num2 value to temp variable
    number_2 = number_1; // Secondly assigning the num1 value to num2 variable
    number_1 = temp; // Lastly assigning the temp value to num1 variable 

    printf("After Swapping \n");
    printf("Number 1 : %hd \n", number_1);
    printf("Number 2 : %hd \n\n", number_2);

    printf("------------------------------------------------------------------------ \n\n");

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
    printf("Memory address of A (%d) is : %p \n", a, &a);
    printf("Memory address of B (%d) is : %p \n", b, &b);
    printf("Memory address of C (%d) is : %p \n", c, &c);

    printf("-----------------------------------------------------------------------\n");


    /*
    C Variable Names :- 
    ---------------------
        All the C variables must be identified with unique names. These unique names are called as 'identifiers'.
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
    printf("Types of Variables :- \n");

    int local_variable = 10; // Local Variable
    printf("Local Variable :- %d \n", local_variable);

    printf("Global Variable :- %d \n", global_variables);
    global_variable();
    static_variable();
    static_variable();
    static_variable(); 
    static_variable();
    static_variable();

/*
Automatic variable :- 
-----------------------
    All the variables in C that are declared inside the block are automatic variables by default.
    We can also explicitly declare an automatic variable using 'auto' keyword.
    Since By default, the memory of the variable is allocated at the beginning of the block/function and deallocated at the end.
    So, The 'auto' keyword is very rarely used.
 */
    short variable = 10;
    auto short automatic_variable = 20; // Both are same
/*
External Variable :- 
---------------------
    An external variable in C is a variable that is declared in one file and used(or refernced) in another file.
    External Variable enables sharing of variables across multiple files in a program.
    They are also referred as global variables when they are accessible throughout the program, but their explicit declaration with the 'extern' keyword allows cross file visibility

Key Points about external variables :- 
----------------------------------------
(i) Declared Globally :-
--------------------------
    External variables are defined outside of all functions, typically at the top of the file
(ii) Storage Class :- 
----------------------
    Declared with the extern keyword in files where they are referenced but not defined.
    Defined without the extern keyword in the file where the variable is created.
(iii) Scope :-
----------------
    External Variable have global scope and can be accessed by all function in a program
(iv) Lifetime :-
------------------
    Their lifetime is the entire duration of the program's execution.

How External Variable Works :-
--------------------------------
    Definition : An external variable is defined in one file without the extern keyword
    Declaration : The same variable is declared in other files using the extern keyword to access it.

Benefits :-
-----------
    It allows variables to share between multiple files in a modular program.
    Enable communication between different parts of the program

Limitation and Best Practices :-
----------------------------------
    Unintended Modification :- External Variable can be modified by any part of the program. Use with caution.
    Encapsulation :- Avoid excessive use of the external variable. Prefer passing data via function, arguments or use static variables for limited scope
    Documentation : Clearly document the process, and use of external variables to maintain code readability.

 */
    //printf("External Variable (using extern keyword) is : %hd\n", external_variable);
}

void global_variable()
{
    global_variables++;
    printf("Global Variable :- %d \n", global_variables);
}

/*
Static Variables :- 
----------------------
    A Variable that is declared with the 'static' keyword is called static variable.
    It retains the value between the multiple function calls (Important point for static variable) 
 */
void static_variable()
{
    static int static_variables = 10; // static variable
    // printf("Memory address of the static variable (%d) (before incrementing) : %p\n", static_variable, &static_variable);
    static_variables++;
    printf("Static Variable :- %d \n", static_variables);
    // printf("Memory address of the static variable (%d) (After incrementing) : %p\n", static_variable, &static_variable);
}
