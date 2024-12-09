// code to calculate simple interest

#include <stdio.h>

int main(){ 
    int p,r,t;
    printf("Enter p or principal amount ");
    scanf("%d", &p);
    printf("Enter r or rate of interest (percentage) ");
    scanf("%d", &r);
    printf("Enter t or time (years) ");
    scanf("%d", &t);
    printf("The total interest on amount %d with interest of %d for %d years is %d", p, r, t, (p*r*t)/100);
    return 0;
}