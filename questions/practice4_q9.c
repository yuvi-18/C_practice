/*
9. Repeat 8 using while loop.
8. Write a program to calculate the factorial of a given number using a for loop.
*/

#include <stdio.h>

int main(){
    int i = 1;
    int n, prod = 1;
    printf("Enter: ");
    scanf("%d", &n);
    while (i <= n )
    {
        prod *= i;
        i++;
    }
    printf("%d", prod);
    return 0;
}