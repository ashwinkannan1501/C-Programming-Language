#include <stdio.h>

void main()
{
    printf("----------------- Matrix Addition --------------------\n");

    unsigned short rows, columns;
    printf("Enter the number of rows :- ");
    scanf("%hd", &rows);

    printf("Enter the number of columns :- ");
    scanf("%hd", &columns);


    short first_matrix[rows][columns], second_matrix[rows][columns], multiplication_matrix[rows][columns];
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
    for (unsigned short i = 0; i < rows; i ++)
    {
        for (unsigned short j = 0; j < columns; j ++)
        {
            for (unsigned short k = 0; k < columns; k ++)
            {
                multiplication_matrix[i][j] = first_matrix[i][j] + first_matrix[i][k] * second_matrix[k][j];
            }
            
        }
    }

    printf("Addition Matrix \n");
    for (unsigned short row = 0; row < rows; row ++)
    {
        for (unsigned short column = 0; column < columns; column ++)
        {
            printf("%hd\t", multiplication_matrix[row][column]);
        }
        printf("\n");
    }
}
