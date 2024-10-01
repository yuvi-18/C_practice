/*
4. Write a program to find whether a year entered by the user is a leap year or not.
Take year as an input from the user.
*/

#include <stdio.h>

int main(){
    int year;
    printf("Enter Year \n");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("The year %d is a leap Year \n", year);
    }
    else{
        printf("The year %d is not a leap year", year);
    }
    return 0;
}