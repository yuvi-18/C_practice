/*
1. What will be the output of this program
int a = 10;
if (a = 11)
printf("I am 11");
else
printf("I am not 11");

answer i am 11 because it is assignment operator not equals to operator

*/

/*
2. Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.
*/

#include <stdio.h>

int main(){
    int firstSubject, secondSubject, thirdSubject;

    printf("Enter First Subject's Marks: \n");
    scanf("%d", &firstSubject);

    printf("Enter Second Subject's Marks: \n");
    scanf("%d", &secondSubject);

    printf("Enter Third Subject's Marks: \n");
    scanf("%d", &thirdSubject);

    int total = firstSubject + secondSubject + thirdSubject;

    printf("Total marks of the three subjects are : %d\n", total);

    float passMarks = (40.0/100.0) * 300;
    printf("pass marks %.2f \n", passMarks);

    int individualPass = 33;

    if (total >= passMarks && firstSubject >= individualPass&& secondSubject >= individualPass&& thirdSubject >= individualPass)
    {
        printf("Congrats You passed the test \n");
    }
    else {
        printf("You failed\n");
    }
    return 0;
}