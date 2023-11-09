#include <stdio.h>
#include<math.h>

int main()
{
    for (int i = 1; i <= 1000; i++)
    {
        int length = 0;
        for (int j = i; j; j /= 10)
            length++;

        int sum = 0;
        for (int k = i; k; k /= 10)
            sum += pow((k % 10), length);

        if (i == sum)
            printf("%d is an Armstrong number\n", i);
    }
    return 0;
}