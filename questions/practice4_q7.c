/*
7. Write a program to calculate the sum of the numbers occurring in the
multiplication table of 8. (consider 8 x 1 to 8 x 10).
*/

#include <stdio.h>

int main(){
    int n = 8, i = 1, tab, sum = 0;
    for (i = 1; i < 11; i++)
    {
        tab = i * n;
        printf("%d times %d is %d\n",n, i, tab);
        sum += tab;
    }
    printf("%d", sum);
    return 0;
}