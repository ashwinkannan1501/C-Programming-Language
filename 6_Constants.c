/*
Constants :- 
--------------
    The Constants cannot be modified once they are defined/declared. They are fixed values in a program. There can be
any types of constants like 'integers', 'float', 'octal', 'hexadecimal', 'character constant', etc.,

    If you don't want others (or yourself) to change the existing variable values, you can use the constants.
The constants is 'read-only' variable.

    The constants can be defined in 2 ways. They are :-
        (i) Using '#define' pre-processor directives
        (ii) Using a 'const' keyword.
*/
#include <stdio.h>

/*
(i) Using '#define' pre-processor directives :-
-------------------------------------------------
    This pre-processor directive is used to declare an alias name for existing variable (or) any value.

SYNTAX :-
-----------
    --------------------------
    | #define variable value |
    --------------------------

    This should come in pre-processor section. No semi-colon(;) should be placed at the end of pre-proessor 
directives section.
*/
#define a 5.50 // Example 

void main()
{
    printf("-------------------- CONSTANTS --------------------- \n");
    /*
    (ii) Using a 'const' keyword :-
    ---------------------------------
        Using 'const' keyword to define constants is as simple as defining variables.
    
    SYNATX :-
    -----------
        --------------------------------------------
        | const_keyword datatype variable = value; |
        --------------------------------------------
    
    Good Practice :-
    -----------------
        Another thing about constant variables, is that it is considered good practice to declare them with uppercase
    characters. It is not required, but useful for code readability.
    */
   
    const float pi = 3.1415; // Exmaple
    const float e = 1.602;
    const float electron_mass = 9.109;
    const float proton_mass = 1.672;
    const float neutron_mass = 1.674;
    const float faraday_constant = 9.265;

    printf("PI value = %.4f \n", pi);
    printf("e value = %.4f \n", e);
    printf("Electron Mass value = %.4f \n", electron_mass);
    printf("Proton Mass value = %.4f \n", proton_mass);
    printf("Neutron Mass value = %.4f \n", neutron_mass);
    printf("Faraday Constant value = %.4f \n", faraday_constant);
    printf("A = %.2f \n", a);



}