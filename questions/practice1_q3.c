//code to convert celcius to Fahrenheit

#include <stdio.h>

int main(){
    int c;
    printf("Enter the celcius value ");
    scanf("%d", &c);
    printf("The converted value of celcius %d to Fahrenheit is %f", c, (9.0/5.0)*c +32);
    return 0;
}