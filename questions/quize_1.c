/*
Quick Quiz: Write a program to print natural numbers from 10 to 20 when initial loop
counter is initialized to 0.
*/

#include <stdio.h>

int main()
{
    int counter = 0;
    while (counter <= 10)
    {
        printf("Natural numbers from 10 are %d\n", counter + 10);
        counter++;
    }
    return 0;
}