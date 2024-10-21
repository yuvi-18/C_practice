// 10. Write a program to check whether a given number is prime or not using loops.

#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int remainder = 1;
    for (int i = 2; i < n; i++)
    {
        remainder = n % i;
        if (remainder == 0)
        {
            break;
        }
    }
    if (remainder == 0)
    {
        printf("The Entered number %d is not Prime",n );
    } else if (n <= 1)
    {
        printf("The Entered number %d is not Prime",n );
    } else
    {
        printf("The Enetered number %d is prime", n);
    }
    return 0;
}