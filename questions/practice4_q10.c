// 10. Write a program to check whether a given number is prime or not using loops.

#include <stdio.h>

int main(){
    int n;
    printf("Enetr a number: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d is not a prime number", n);
        } else if (n <= 1)
        {
            printf("Please enter a number Grater than 1");
        } else
        {
            printf("%d is a prime number", n);
        }
    }
    return 0;
}