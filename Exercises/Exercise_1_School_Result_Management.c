/*
School Result Management
1.Five Marks input through the keyboard
2.Find total and average of the given marks.
3.Find the result whether the given marks must be >=35
4.Grade as per the following condition.
    90-100 - A Grade
    80-89  - B Grade
    70-79  - C Grade
    <70    - D Grade
    Fail   - No Grade
 
*/

#include <stdio.h>

void main()
{
    printf("--------------------- School Result Management ---------------------- \n");
    short tamil, english, maths, science, social_science;

    printf("Enter Tamil Mark :- ");
    scanf("%hd", &tamil);

    printf("Enter English Mark :- ");
    scanf("%hd", &english);

    printf("Enter Maths Mark :- ");
    scanf("%hd", &maths);

    printf("Enter Science Mark :- ");
    scanf("%hd", &science);

    printf("Enter Social Science :- ");
    scanf("%hd", &social_science);

    short total = tamil + english + maths + science + social_science;

    float average = (tamil + english + maths + science + social_science) / 5;

    printf("Total = %hd \n", total);
    printf("Average = %.2f \n", average);

    if (tamil < 35 || english < 35 || maths < 35 || science < 35 || social_science < 35)
    {
        printf("Fail -> No Grade \n");
    }

    if (tamil > 100 || english > 100 || maths > 100 || science > 100 || social_science > 100)
    {
        printf("Please enter the range between 1 to 100 \n");
    }
    else
    {
        if (average >= 90 && average <= 100)
        {
            printf("Grade : A");
        }
        else if (average >= 80 && average <= 89)
        {
            printf("Grade : B");
        }
        else if (average >= 70 && average <= 79)
        {
            printf("Grade : C");
        }
        else if (average < 70)
        {
            printf("Grade : D");
        }
    }

}
