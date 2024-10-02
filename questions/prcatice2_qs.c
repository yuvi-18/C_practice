/*
1. Which of the following is invalid in C?
a. int a=1; int b = a;
b. int v = 3*3;
c. char dt = ‘21 dec 2020’;

answer c

*/

/*
2. What data type will 3.0/8 – 2 return?

answer floating point number

*/

// 3. Write a program to check whether a number is divisible by 97 or not.

#include <stdio.h>

int main(){
    int a;
    printf("Enter your Number ");
    scanf("%d", &a);
    printf("The remainder of %d divided by 97 is %d", a, a % 97);
    return 0;
}

// 4. Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1

/*
First 3 will be multiplied by x, then the output would be divided by y, then the output would be subtracted from z then the result will be added
*/

/*
5. 3.0 + 1 will be:
a. Integer.
b. Floating point number.
c. Character.

answer b

*/
