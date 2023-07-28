#include <stdio.h>

void main()
{
    printf("----------------- Matrix Addition --------------------\n");

    unsigned short rows, columns;
    printf("Enter the number of rows :- ");
    scanf("%hd", &rows);

    printf("Enter the number of columns :- ");
    scanf("%hd", &columns);


    short first_matrix[rows][columns], second_matrix[rows][columns], subtraction_matrix[rows][columns];
    printf("First Matrix \n");
    for (unsigned short row = 0; row < rows; row++)
    {
        for (unsigned short column = 0; column < columns; column++)
        {
            printf("Enter the data for [%hu][%hu] : ", row, column);
            scanf("%hd", &first_matrix[row][column]);
        }
    }

    printf("Second Matrix \n");
    for (unsigned short row = 0; row < rows; row++)
    {
        for (unsigned short column = 0; column < columns; column++)
        {
            printf("Enter the data for [%hu][%hu] : ", row, column);
            scanf("%hd", &second_matrix[row][column]);
        }
    }

    // Performing Addition Calculation
    for (unsigned short row = 0; row < rows; row ++)
    {
        for (unsigned short column = 0; column < columns; column ++)
        {
            subtraction_matrix[row][column] = first_matrix[row][column] - second_matrix[row][column];
        }
    }

    printf("Addition Matrix \n");
    for (unsigned short row = 0; row < rows; row ++)
    {
        for (unsigned short column = 0; column < columns; column ++)
        {
            printf("%hd\t", subtraction_matrix[row][column]);
        }
        printf("\n");
    }
}
