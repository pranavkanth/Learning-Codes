#include <stdio.h>
#include <math.h>

void calculate(int *arr, int length, int *sum, float *per);

int main()
{
    int length;
    printf("Enter number of subjects: ");
    scanf("%d", &length);

    int nums[length];
    for (int i = 0; i < length; i++)
    {
        printf("Enter marks in subject %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    int sum;
    float per;
    calculate(nums, length, &sum, &per);

    printf("Sum = %d\n", sum);
    printf("Percentage = %f\n", per);

    return 0;
}

void calculate(int *arr, int length, int *sum, float *per)
{
    *sum = 0;
    for (int i = 0; i < length; i++)
        *sum += arr[i];

    *per = (float) *sum / (100 * length) * 100;
}