/*
3. A do while loop is executed:
a. At least once.
b. At least twice.
c. At most once.

answer a
*/

/*
4. What can be done using one type of loop can also be done using the other two
types of loops – true or false?

answer true
*/

/*
5. Write a program to sum first ten natural numbers using while loop.
*/

#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;
    while (i < 11)
    {
        sum += i;
        i++;
    }
    printf("%d\n", sum);

    return 0;
}