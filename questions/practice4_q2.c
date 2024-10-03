// 2. Write a program to print multiplication table of 10 in reversed order.

#include <stdio.h>

int main(){
    int n = 10, i = 10;
    do
    {
        printf("%d times %d is %d\n", n, i, n*i);
        i--;
    } while (i);
    
    return 0;
}