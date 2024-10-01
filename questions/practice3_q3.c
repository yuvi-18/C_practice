/*
Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
 Income Slab Tax
 2.5 – 5.0L 5%
 5.0L - 10.0L 20%
 Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user
*/

#include <stdio.h>

int main()
{
    int i;
    float t;
    printf("Enter your income: \n");
    scanf("%d", &i);

    if (i < 250000)
    {
        printf("Lol You are tax free \n");
    }
    else if (i < 500000)
    {
        t = (5.0 / 100.0) * i;
        float r = i - t;
        printf("Your income is %d \nand the tax on it is %.2f\nso the total income after taxxes is %.2f \n", i, t, r);
    }
    else if (i < 1000000)
    {
        t = (20.0 / 100.0) * i;
        float r = i - t;
        printf("Your income is %d \nand the tax on it is %.2f\nso the total income after taxxes is %.2f \n", i, t, r);
    }
    else
    {
        t = (30.0 / 100.0) * i;
        float r = i - t;
        printf("Your income is %d \nand the tax on it is %.2f\nso the total income after taxxes is %.2f \n", i, t, r);
    }
    return 0;
}