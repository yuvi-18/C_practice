// 8. Write a program to calculate the factorial of a given number using a for loop.

// formula n!=n×(n−1)×(n−2)×…×2×1  ||  5!=5×4×3×2×1=120

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int fac = 1;
    if (n == 0)
    {
        printf("Factorial of 0 is 1");
    } else if (n < 0)
    {
        printf("Factorial of negative number is not possible");
    } else
    {
    for (int i = 1; i <= n; i++)
    {
        fac *= i;
    }
    printf("%d", fac);
    }
    return 0;
}