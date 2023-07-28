/*
Multi-Dimensional Arrays :- 
-----------------------------
    In general, there are 2 types of arrays. They are :-
        (i) Single Dimensional Arrays
        (ii) Multi Dimensional Arrays
    
    The single dimensional arrays are great. However if you want to store the data as a tablular form, you need a 
multi-dimensional arrays
    A Multi-Dimensional array is basically an array of arrays.
    Arrays can have N number of dimensions. The most common is 2D Array

Two-Dimensional Arrays (2D Array) :-
--------------------------------------
    A 2-D Array is also known as a matrix. It stores homogenoeus data in a tabular form

Syntax of declaring N Dimensional Arrays :-
----------------------------------------------
    --------------------------------------------------
    | datatype array_name[size1][size2].....[size N] |
    --------------------------------------------------

*/
#include <stdio.h>

void main()
{
    printf("------------------------- Multi-Dimensional Arrays --------------------- \n");

    // Exmaple of declaring N Dimensional array
    short matrix[2][3] = {
        {1, 5, 2}, {3, 9, 12}
    };

    /*
    Explanation :-
    ---------------
        The 1st dimension repesents the number opf rows [2], while the 2nd dimension represents the number of columns
    [3]. The values are placed in row-order and can be visualized like this :-
    ---------------------------------------------------
    |        |  column 0 | column 1  |   column 2   |
    ---------------------------------------------------
    | Row 0  |       1   |       4   |        2     |
    ----------------------------------------------------
    | Row 1  |       3    |      6    |      8      |
    ---------------------------------------------------

    Accessing the elements of 2D Array :-
    --------------------------------------
        To access the elements of a 2D Array, yu must specify the index number of both the rows and columns
    */

    printf("matrix[0][2] = %d \n", matrix[0][2]); // Exmaple

    /*
    Change Elements :-
    --------------------
        To Change the value of the element, refer to the index number of the element in each of the dimensions
    */
    matrix[1][2] = 22; // Example
    printf("matrix[1][2] = %d \n", matrix[1][2]);

    /*
    Loop :- 
    ---------
        To loop through a multi-dimensional array, you need one loop for each of the array's dimension
    */
    for(short i = 0; i < 2; i++)
    {
        for (short j = 0; j < 3; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Getting input from the user and printing the 2D array matrix
    unsigned short rows, columns;
    printf("Enter the number of rows : ");
    scanf("%hu", &rows);

    printf("Enter the number of columns : ");
    scanf("%hu", &columns);

    short two_dimension[rows][columns];

    for (unsigned short row = 0; row < rows; row++)
    {
        for (unsigned short column = 0; column < columns; column++)
        {
            printf("Enter the data for [%hd][%hd] : ", row, column);
            scanf("%hd", &two_dimension[row][column]);
        }
    }

    // Printing the data in tabular form
    for (unsigned short row = 0; row < rows; row++)
    {
        for (unsigned short column = 0; column < columns; column++)
        {
            printf("%hd\t", two_dimension[row][column]);
        }
        printf("\n");
    }

    // Three- Dimensional Arrays
    unsigned short array, row, column;

    printf("Enter the number of arrays :- ");
    scanf("%hu", &array);

    printf("Enter the number of rows :- ");
    scanf("%hu", &row);

    printf("Enter the number of columns :- ");
    scanf("%hu", &column);

    short three_dimensional_array[array][row][column];

    for (unsigned short i = 0; i < array; i++)
    {
        for (unsigned short j = 0; j < row; j++)
        {
            for (unsigned short k = 0; k < column; k++)
            {
                printf("Enter the data for [%hu][%hu][%hu] : ", i, j, k);
                scanf("%hd", &three_dimensional_array[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

    for (unsigned short i = 0; i < array; i++)
    {
        for (unsigned short j = 0; j < row; j++)
        {
            for (unsigned short k = 0; k < column; k++)
            {
                printf("Array[%hd][%hd][%hd] : %hd\t", i, j, k, three_dimensional_array[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    /*
    Note :- 
    ---------
        In similar ways, we can create N number of dimensions. However, the complexity also increases as the number 
    of dimensions increases. The Most used multi-dimensional array is 2D array.
    */
}
