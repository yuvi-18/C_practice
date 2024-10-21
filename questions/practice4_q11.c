// 11. Implement 10 using other types of loops.
// 10. Write a program to check whether a given number is prime or not using loops.

#include <stdio.h>

int main()
{
    int n;
    int i = 2;
    int prod;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("%d is not prime", n);
    }
    else
    {
        while (i < n)
        {
            prod = n % i;
            i++;
            if (prod == 0)
            {
                break;
            }
        }
        if (prod == 0)
        {
            printf("Entered Number %d is not Prime", n);
        }else
        {
            printf("Entered Number %d is Prime", n);
        }
    }
    return 0;
}