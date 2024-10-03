// 1. Write a program to print multiplication table of a given number n.

#include <stdio.h>

int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for (int i = 0; i < 11; i++)
    {
        printf("%d times %d is %d\n", n, i, n * i);
    }
    
    return 0;
}