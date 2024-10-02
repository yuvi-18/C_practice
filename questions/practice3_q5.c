/*
5. Write a program to determine whether a character entered by the user is
lowercase or not.
*/

#include <stdio.h>

// ASCII value of a = 97 & ASCII value of z = 122;

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("The character %c is a lower case character", ch);
    }
    else
    {
        printf("The charcter %c is not a lowercase character", ch);
    }
    
    return 0;
}