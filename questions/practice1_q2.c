// code to find the radius of the circle and volume of a cylinder

#include <stdio.h>

// int main(){
//     int r;
//     printf("Enter the radius of the circle\n");
//     scanf("%d", &r);
//     printf("the area of a circle with radius %d is %f", r, 3.14*r*r);
//     return 0;
// }

int main(){
    int r, h;
    printf("Enter the radius of the circle\n");
    scanf("%d", &r);
    printf("Enter the height of the circle\n");
    scanf("%d", &h);
    printf("the volume of a circle with radius %d and hieght %d is %f", r, h, 3.14*r*r*h);
    return 0;
}