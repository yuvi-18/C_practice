//code for finding area of a rectangle from user input

#include <stdio.h>

int main(){
    // int length;
    // int breath;
    // scanf("length");
    // scanf("breath");

    int length, breadth;

    printf("Enter length\n");
    scanf("%d", &length);

    printf("Enter breadth\n");
    scanf("%d", &breadth);

    // printf("the are of the reactangle is ", length*breadth);
    printf("the are of the reactangle is %d", length*breadth);
    return 0;
}