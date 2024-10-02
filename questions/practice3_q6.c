// 6. Write a program to find greatest of four numbers entered by the user

#include <stdio.h>

int main(){
    int a, b, c, d;
    printf("Enter Four Numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("Your Entered numbers are %d, %d, %d, %d\n", a, b ,c, d);
    if (a>b && a>c && a>d)
    {
       printf("%d is The greatest among the four entered numbers", a);
    }
    else if (b>a && b>c && b>d)
    {
       printf("%d is The greatest among the four entered numbers", b);
    }
    else if (c>a && c>b && c>d)
    {
       printf("%d is The greatest among the four entered numbers", c);
    }
    else{
       printf("%d is The greatest among the four entered numbers", d);
    }
    return 0;
}