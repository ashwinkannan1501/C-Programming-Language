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

#include <stdio.h>
#define CONSTANT_VARIABLE 5.5056 // Example 

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
   
    const float PI = 3.1415; // Exmaple
    const float E = 1.602;
    const float ELECTRON_MASS = 9.109;
    const float PROTON_MASS = 1.672;
    const float NEUTRON_MASS = 1.674;
    const float FARADAY_CONSTANT = 9.265;

    printf("PI value = %.4f \n", PI);
    printf("e value = %.4f \n", E);
    printf("Electron Mass value = %.4f \n", ELECTRON_MASS);
    printf("Proton Mass value = %.4f \n", PROTON_MASS);
    printf("Neutron Mass value = %.4f \n", NEUTRON_MASS);
    printf("Faraday Constant value = %.4f \n", FARADAY_CONSTANT);
    printf("Constant Variable = %.4f \n", CONSTANT_VARIABLE);



}