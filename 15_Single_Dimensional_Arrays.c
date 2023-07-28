/*
Arrays in C :- 
----------------
    The Arrays are used to store multipe values of same data type in a single variable, instead of declaring separate
variables for each value.
    To create an array, define the data type (like int) and specify the name of the array followed by the '[]'.
    To insert values to it, use a comma-separated list inside {}.
*/
#include <stdio.h>

void main()
{
    printf("------------- Single Dimensional Arrays ---------------- \n");

    short list[] = {25, 50, 75}; // Example of instantiating a list
    list[3] = 85;

    /*
    Accessing the element of an array :- 
    ---------------------------------------
        To access an array element, refer to it's 'index' value / number. Array index starts with 0.
        ----------------
        | 25 | 50 | 75 |
        ----------------
           0    1   2 -> Array Indices

        Array Length :- 3
        First Index :- 0
        Last Index :- 2  
    */
    printf("%hd \n", list[3]); // Example of accessing an element

    /*
    Change an array element :-
    ----------------------------
        To change the value of the specific element, refer to it's index number
    */
    list[0] = 55; // Example of changing an array element

    /*
    Loop through an array :- 
    --------------------------
        You can loop through an array element with either for loop / while loop
    */
    short index = 0;
    while (index < 2)
    {
        printf("index %hd : %hd \n", index, list[index]);
        printf("Memory Location in integer: %d \n", &list[index]);
        // %p (Prints Memory Address) Format Specifier. To find the memory address that holds values of a variable, 
        // we use the %p format specifier, and it prints in hexadecimal form
        printf("Memory Location in hexadecimal: %p \n", &list[index]); 
        index ++;
    }

    /*
    Set Array Size :- 
    -------------------
        Another common way to create array is to specify the size of the array, and add elements later. Using this
    method, you should know the size of the array, in order for the program to store enough memory.
        You are not able to change the size of the array after creation.
    */
    // Declare an array of 4 integers
    short num[4];
    // Add elements
    num[0] = 15;
    num[1] = 25;
    num[2] = 75;
    num[3] = 100;
    printf("%hd \n", num[2]);

    /*
    NOTE :-
    --------
        Arrays in C are immutable because the structure itself cannot change once it has been created.
        It's element are stored in a contiguous memory location.
        The Arrays can have more than one dimension.

    Advantages :-
    ---------------
        Random access of elements using the array size.
        Traversal through the array becomes easy by using a single loop (for/while)

    Disadvantages :-
    ------------------
        Allows a fixed number of elements to be entered which is decided at the time of declaration.
        Unlike a linked list, an array in C is not dynamic.
        Insertion and deletion of elements can be harder/costly since the elements are needed to be manages in 
    accordance with the new memory location.
    */

    // Example of single dimensional array
    short limit;
    printf("Enter the Limit :- ");
    scanf("%hd", &limit);

    short array[limit];
    for (short index = 0; index < limit; index++)
    {
        printf("Enter the value of index %hd : ", index);
        scanf("%hd", &array[index]);
    }

    printf("Printing the array one by one \n");
    for (short index = 0; index < limit; index ++)
    {
        printf("index %hd : %hd \n", index, array[index]);
    }
}