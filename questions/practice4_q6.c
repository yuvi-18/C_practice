// 6. Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.

/*
5. Write a program to sum first ten natural numbers using while loop.
*/

#include <stdio.h>

// int main(){
//     int sum = 0;
//     for (int i = 1; i < 11; i++)
//     {
//         sum +=i;
//     }
//     printf("%d", sum);
//     return 0;
// }

#include <stdio.h>

int main()
{
    int sum = 0;
    int i = 1;
    do
    {
        sum += i;
        i++;
    } while (i < 11);

    printf("%d", sum);

    return 0;
}