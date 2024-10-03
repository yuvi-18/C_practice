// 8. Write a program to calculate the factorial of a given number using a for loop.

// formula n!=n×(n−1)×(n−2)×…×2×1  ||  5!=5×4×3×2×1=120

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i > 10; i++)
    {
        int fac = n * (n - i);
        printf("the factorial of %d is %d", n);
    }

    return 0;
}