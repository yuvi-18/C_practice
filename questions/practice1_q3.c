//code to convert celcius to Fahrenheit

#include <stdio.h>

int main(){
    int c;
    printf("Enter the celcius value ");
    scanf("%d", &c);
    int f = (9.0/5.0)*c +32;
    printf("The converted value of celcius %d to Fahrenheit is %d", c, f);
    return 0;
}