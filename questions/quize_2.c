/*
Quick Quiz: Write a program to print first ‘n’ natural number using do-while loop
*/

#include <stdio.h>

int main(){
    int n = 1;
    do
    {
        printf("The number is: %d\n", n);
        n++;
    } while (n<5);
    
    
    return 0;
}