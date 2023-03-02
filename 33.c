#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int length = 0;
    for (int i = n; i; i /= 10) length++;
    
    int sum = 0;
    for (int j = n; j; j /= 10) sum += pow((j % 10), length);    
    
    if (n == sum)
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is NOT an Armstrong number\n", n);

    return 0;
}