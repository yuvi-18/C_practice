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

    printf("the are of the reactangle is ", length*breadth);
    return 0;
}