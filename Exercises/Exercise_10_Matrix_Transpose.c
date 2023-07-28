#include <stdio.h>

void main()
{
    printf("----------------- Matrix Addition --------------------\n");

    unsigned short rows, columns;
    printf("Enter the number of rows :- ");
    scanf("%hd", &rows);

    printf("Enter the number of columns :- ");
    scanf("%hd", &columns);


    short matrix[rows][columns], transpose_matrix[rows][columns];
    printf("Matrix \n");
    for (unsigned short row = 0; row < rows; row++)
    {
        for (unsigned short column = 0; column < columns; column++)
        {
            printf("Enter the data for [%hu][%hu] : ", row, column);
            scanf("%hd", &matrix[row][column]);
        }
    }

    // printf("Second Matrix \n");
    // for (unsigned short row = 0; row < rows; row++)
    // {
    //     for (unsigned short column = 0; column < columns; column++)
    //     {
    //         printf("Enter the data for [%hu][%hu] : ", row, column);
    //         scanf("%hd", &second_matrix[row][column]);
    //     }
    // }

    // Performing Addition Calculation
    for (unsigned short row = 0; row < rows; row ++)
    {
        for (unsigned short column = 0; column < columns; column ++)
        {
            transpose_matrix[row][column] = matrix[column][row];
        }
    }

    printf("Transpose Matrix \n");
    for (unsigned short row = 0; row < rows; row ++)
    {
        for (unsigned short column = 0; column < columns; column ++)
        {
            printf("%hd\t", transpose_matrix[row][column]);
        }
        printf("\n");
    }
}
