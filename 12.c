// If a 5-digit number is input through the keyboard,
// WAP a program to reverse the number

#include<stdio.h>
#include<math.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int length = 0;
    for (int i = num; i; i /= 10) length++;
    
    int reversed = 0;
    for (int j = num, l = length; j; j /= 10) {
        reversed += (j % 10) * pow(10, l-- - 1);
    }

    printf("Reverse of %d = %d\n", num, reversed);

    return 0;
}