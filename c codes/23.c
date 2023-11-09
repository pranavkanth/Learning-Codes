// A certain grade of steel is graded according to the following conditions
// 1. hardness must be greater than 50
// 2. carbon content must be less than 0.7
// 3. tensile strength must tbe greater than 5600
// The grades are as follows:
// 1. grade is 10 if all three conditions are met
// 2. grade is 9 if first two conditions are met
// 3. grade is 8 if conditions 2 and 3 are met
// 4. grade is 7 if 1 and 3 are met
// 5. grade is 6 if only one condition is met
// 6. grade is 5 if no condition is met

#include<stdio.h>

int main()
{
    int h, t;
    float c;
    printf("Enter hardness of steel: ");
    scanf("%d", &h);
    printf("Enter carbon content of steel: ");
    scanf("%f", &c);
    printf("Enter tensile strength of steel: ");
    scanf("%d", &t);

    int grade;
    if (h > 50 && c < 0.7 && t > 5600) grade = 10;
    else if (h > 50 && c < 0.7 && t <= 5600) grade = 9;
    else if (h <= 50 && c >= 0.7 && t > 5600) grade = 8;
    else if (h > 50 && c < 0.7 && t > 5600) grade = 7;
    else if ((h > 50 && c >= 0.7 && t <= 5600)
            || (c < 0.7 && h <= 50 && t <= 5600)
            || (t > 5600 && h <= 50 && c >=0.7))
        grade = 6;
    else if (h <= 50 && c >= 0.7 && t <= 5600)
        grade = 5;

    printf("Grade of the steel is %d\n", grade);
    
    return 0;
}