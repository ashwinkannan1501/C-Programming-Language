/*
Type Conversion :-
--------------------
    The type conversion is also called as type casting. The type conversion / type casting is used to convert the 
value from one datatype to another datatype.

Types :-
----------
    There are 2 types of conversions in C. They are :-
(I) Implicit Conversion / Widening Casting (automatically) 
(II) Explicit Conversion / Narrowing Casting (Manually)
*/
#include <stdio.h>
#include <stdbool.h>

void main()
{
    /*
    (I) Implicit Conversion / Widening Casting :- 
    -----------------------------------------------
        The implicit conversion / widening casting is done automatically by the compiler when you assign a value of
    one type to another type.
        It is used to convert a smaller datatype to larger datatype.

        -------------------------------------------------------------
        | bool -> short -> int -> long -> float -> double -> string |
        -------------------------------------------------------------
    */
    // Implicit Conversion / Widening casting
    short short_data_type = 123;
    printf("Short data type = %hd \n", short_data_type);

    float float_data_type = short_data_type;
    printf("Float Data Type = %f \n", float_data_type);

    /*
    Explicit Conversion / Narrowing casting :-
    --------------------------------------------
        The Explicit Conversion / Narrowing Cating is done manually by placing the type in paranthesis '()' in-front
    of the value.
        It is used to covert the larger datatype to smaller datatype.

        -------------------------------------------------------------
        | string -> double -> float -> long -> int -> short -> bool |
        -------------------------------------------------------------
    */

    // Explicit Conversion / narrowing Casting
    float floating_point =  123.569;
    printf("Floating Point value = %.3f \n", floating_point);
    int integer = (int) floating_point;
    printf("Integer value = %d \n", integer);

    
}