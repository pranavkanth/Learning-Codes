#include<stdio.h>
#include<math.h>

void calculate(int *arr, int length, int *sum, float *avg, float *stdev);

int main()
{
    int length;
    printf("Enter number of numbers: ");
    scanf("%d", &length);

    int nums[length];
    for (int i = 0; i < length; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    int sum;
    float avg, stdev;
    calculate(nums, length, &sum, &avg, &stdev);

    printf("Sum = %d\n", sum);
    printf("Average = %f\n", avg);
    printf("Standard deviation = %f\n", stdev);

    return 0;
}

void calculate(int* arr, int length, int* sum, float* avg, float* stdev)
{
    *sum = 0;
    for (int i = 0; i < length; i++)
        *sum += arr[i];

    *avg = (float) *sum / length;

    int sigma = 0;
    for (int i = 0; i < length; i++)
        sigma += pow(arr[i] - *avg, 2);

    *stdev = sqrt(sigma / (length - 1));
}