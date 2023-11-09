// The marks obtained by a student in 5 different subjects are input through the keyboard.
// The students get a division as per the following rules
// - percentage above or equal to 60 = 1st division
// - percentage between 50 and 59 = 2nd division
// - percentage between 40 and 49 = 3rd division
// - percentage less than 40 = fail
// WAP to obtain the division of the student

#include<stdio.h>

int main()
{
    float num1, num2, num3, num4, num5;
    
    printf("Enter marks obtained in subject 1: ");
    scanf("%f", &num1);
    printf("Enter marks obtained in subject 2: ");
    scanf("%f", &num2);
    printf("Enter marks obtained in subject 3: ");
    scanf("%f", &num3);
    printf("Enter marks obtained in subject 4: ");
    scanf("%f", &num4);
    printf("Enter marks obtained in subject 5: ");
    scanf("%f", &num5);

    float per = (num1 + num2 + num3 + num4 + num5) / 5;
    printf("Percentage = %.2f\n", per);
    if (per >= 60)
        printf("1st division");
    else if (per >= 50 && per <= 59)
        printf("2nd division");
    else if (per >= 40 && per <= 49)
        printf("3rd division");
    else
        printf("Fail");
    printf("\n");

    return 0;
}